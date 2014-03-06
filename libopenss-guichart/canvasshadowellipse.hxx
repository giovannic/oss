////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2005 Silicon Graphics, Inc. All Rights Reserved.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2.1 of the License, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
// details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this library; if not, write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
////////////////////////////////////////////////////////////////////////////////

#ifndef CANVASSHADOWELLIPSE_H
#define CANVASSHADOWELLIPSE_H

#include <qcanvas.h>

class QFont;


//! Defines a simple shadow for the canvas ellipse.
class CanvasShadowEllipse : public QCanvasEllipse
{
public:
    enum { CANVAS_SHADOW_ELLIPSE = 1300 };

    CanvasShadowEllipse( int i, int s1, int s2, int a, int extent, QCanvas *m_canvas )
	: QCanvasEllipse( s1, s2, a, extent, m_canvas ), m_index( i ) {}

    int index() const { return m_index; }
    void setIndex( int index ) { m_index = index; }

    int rtti() const { return CANVAS_SHADOW_ELLIPSE; }

private:
    int m_index;
};

#endif // CANVASSHADOWELLIPSE_H
