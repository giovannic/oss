lang en_US.UTF-8
keyboard us
timezone US/Eastern
auth --useshadow --enablemd5
selinux --disabled
firewall --enabled
xconfig --startxonboot
part / --size 4096
services --enabled=NetworkManager --disabled=network,sshd

repo --name=a-base --baseurl=file:///var/www/html/yum/base

%packages
@base-x
@base
@core
@admin-tools
@dial-up
@hardware-support
#@printing
kernel
#memtest86+

# save some space
#-*.i686
-openvpn
-gnome-bluetooth*
-pulseaudio-module-bluetooth
-bluez*
-wireless-tools*
-empathy
-telepathy-gabble
-telepathy-idle
-telepathy-filesystem
-telepathy-glib
-python-telepathy
-telepathy-butterfly
-telepathy-haze
-telepathy-farsight
-telepathy-salut
-telepathy-mission-control
#-ImageMagick
-samba-client
-mpage
-sox
-hplip
-hpijs
-numactl
-isdn4k-utils
-autofs
# smartcards won't really work on the livecd.
-coolkey
-ccid
-wget

# qlogic firmwares
-ql2100-firmware
-ql2200-firmware
-ql23xx-firmware
-ql2400-firmware

# scanning takes quite a bit of space :/
-xsane
-xsane-gimp
-sane-backends
-deja-dup

-ibus-pinyin-open-phrase
-cjkuni-fonts-common
-cjkuni-ukai-fonts
-cjkuni-uming-fonts
-thunderbird
-eclipse-*
-rhythmbox
-valgrind
-digikam
-ghostscript                  
-ghostscript-cups             
-ghostscript-fonts  
-specspo
-esc
-samba-client
-a2ps
-mpage
-redhat-lsb
-sox
-hplip
-hpijs
# smartcards won't really work on the livecd.  
-coolkey
-ccid
# duplicate functionality
-pinfo
-vorbis-tools
-wget

# qlogic firmwares
-ql2100-firmware
-ql2200-firmware
-ql23xx-firmware
-ql2400-firmware

# scanning takes quite a bit of space :/
-xsane
-xsane-gimp
-sane-backends

# dictionaries are big
-aspell-*
-hunspell-*
-man-pages*
-words

# livecd bits to set up the livecd and be able to install
anaconda
isomd5sum

# more stuff that I took out...
-compiz-gnome
-audiofile
-libtiff
-libogg
-aspell
-mailx
-enchant
-tmpwatch
-cpio
-cdrdao
-meanwhile
-cracklib-dicts
-zenity
-orca
-pirut

# save some space
-gnome-user-docs
-evolution-help
-gnome-games-help
-nss_db
-isdn4k-utils
-dasher
-evince-dvi
-evince-djvu
-desktop-backgrounds-basic
-constantine-backgrounds-extras


# these pull in excessive dependencies
-ekiga
-tomboy
-scim
-scim-chewing
-scim-chewing-0.3.3-2.fc12.i686
-scim-pinyin-0.5.91-27.fc12.i686



#Fix for SELINUX Disabled
/usr/sbin/lokkit



%end

%post
# FIXME: it'd be better to get this installed from a package
cat > /etc/rc.d/init.d/fedora-live << EOF
#!/bin/bash
#
# live: Init script for live image
#
# chkconfig: 345 00 99
# description: Init script for live image.

. /etc/init.d/functions

if ! strstr "\`cat /proc/cmdline\`" liveimg || [ "\$1" != "start" ] || [ -e /.liveimg-configured ] ; then
    exit 0
fi

exists() {
    which \$1 >/dev/null 2>&1 || return
    \$*
}

touch /.liveimg-configured

# mount live image
if [ -b /dev/live ]; then
   mkdir -p /mnt/live
   mount -o ro /dev/live /mnt/live
fi

# read some variables out of /proc/cmdline
for o in \`cat /proc/cmdline\` ; do
    case \$o in
    ks=*)
        ks="\${o#ks=}"
        ;;
    xdriver=*)
        xdriver="--set-driver=\${o#xdriver=}"
        ;;
    esac
done

# if liveinst or textinst is given, start anaconda
if strstr "\`cat /proc/cmdline\`" liveinst ; then
   /usr/sbin/liveinst \$ks
fi
if strstr "\`cat /proc/cmdline\`" textinst ; then
   /usr/sbin/liveinst --text \$ks
fi

# enable swaps unless requested otherwise
swaps=\`blkid -t TYPE=swap -o device\`
if ! strstr "\`cat /proc/cmdline\`" noswap -a [ -n "\$swaps" ] ; then
  for s in \$swaps ; do
    action "Enabling swap partition \$s" swapon \$s
  done
fi

# configure X, allowing user to override xdriver
exists system-config-display --noui --reconfig --set-depth=24 \$xdriver

# add openssuser user with no passwd
useradd -c "OpenSpeedShop Live User" openssuser
passwd -d openssuser > /dev/null

# turn off firstboot for livecd boots
echo "RUN_FIRSTBOOT=NO" > /etc/sysconfig/firstboot

# don't start yum-updatesd for livecd boots
chkconfig --level 345 yum-updatesd off 2>/dev/null

# don't start cron/at as they tend to spawn things which are
# disk intensive that are painful on a live image
chkconfig --level 345 crond off 2>/dev/null
chkconfig --level 345 atd off 2>/dev/null
chkconfig --level 345 anacron off 2>/dev/null
chkconfig --level 345 readahead_early off 2>/dev/null
chkconfig --level 345 readahead_later off 2>/dev/null

# Stopgap fix for RH #217966; should be fixed in HAL instead
touch /media/.hal-mtab

# workaround clock syncing on shutdown that we don't want (#297421)
sed -i -e 's/hwclock/no-such-hwclock/g' /etc/rc.d/init.d/halt
EOF

# workaround avahi segfault (#279301)
touch /etc/resolv.conf
/sbin/restorecon /etc/resolv.conf

chmod 755 /etc/rc.d/init.d/fedora-live
/sbin/restorecon /etc/rc.d/init.d/fedora-live
/sbin/chkconfig --add fedora-live

# save a little bit of space at least...
rm -f /boot/initrd*
# make sure there aren't core files lying around
rm -f /core*

%end

%post --nochroot
cp $INSTALL_ROOT/usr/share/doc/*-release-*/GPL $LIVE_ROOT/GPL
cp $INSTALL_ROOT/usr/share/doc/HTML/readme-live-image/en_US/readme-live-image-en_US.txt $LIVE_ROOT/README

# only works on x86, x86_64
if [ "$(uname -i)" = "i386" -o "$(uname -i)" = "x86_64" ]; then
  mkdir -p  $LIVE_ROOT/LiveOS
  cp /usr/bin/livecd-iso-to-disk $LIVE_ROOT/LiveOS
fi

# copy some test applications for OpenSpeedShop
# make sure these apps exist on your host machine...and were compiled in
# in the same location.  This makes source mapping easier for OpenSpeedShop.

%end
