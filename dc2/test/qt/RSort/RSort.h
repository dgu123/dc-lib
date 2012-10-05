// =====================================================================
//  dc/test/qt/RSort.h
// =====================================================================

//  Author:         (C) 2011 Camil Demetrescu, Andrea Ribichini
//  License:        See the end of this file for license information
//  Created:        February 11, 2011
//  Module:         dc/test/qt

//  Last changed:   $Date: 2012/07/24 14:24:41 $
//  Changed by:     $Author: ribbi $
//  Revision:       $Revision: 1.4 $

#include <QMainWindow>
#include <QObject>
#include <QGraphicsRectItem>
#include <QThread>

class MyWidget : public QMainWindow
{
	Q_OBJECT
			
	public:		
		MyWidget (QWidget *parent=0);
	
	public slots:
		void sort ();
}; 

class MyQGraphicsRectItem : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
    Q_PROPERTY(QPointF pos READ pos WRITE setPos)
    
    public:
        MyQGraphicsRectItem ( qreal x, qreal y, qreal width, qreal height, QGraphicsItem * parent = 0 )
        : QGraphicsRectItem ( x, y, width, height, parent )
        {
            
        }
};

class MyThread : public QThread
{
    public:
        void run();
};

// Copyright (C) 2011 Camil Demetrescu, Andrea Ribichini

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
