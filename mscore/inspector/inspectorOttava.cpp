//=============================================================================
//  MuseScore
//  Music Composition & Notation
//  $Id:$
//
//  Copyright (C) 2012 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENSE.GPL
//=============================================================================

#include "inspectorOttava.h"
#include "musescore.h"
#include "libmscore/ottava.h"
#include "libmscore/score.h"

namespace Ms {

//---------------------------------------------------------
//   InspectorOttava
//---------------------------------------------------------

InspectorOttava::InspectorOttava(QWidget* parent)
   : InspectorBase(parent)
      {
      e.setupUi(addWidget());
      l.setupUi(addWidget());
      setupLineStyle(l.lineStyle);
      //tl.setupUi(addWidget());
      o.setupUi(addWidget());

      iList = {
            { P_ID::COLOR,        0, 0, e.color,       e.resetColor      },
            { P_ID::VISIBLE,      0, 0, e.visible,     e.resetVisible    },
            { P_ID::USER_OFF,     0, 0, e.offsetX,     e.resetX          },
            { P_ID::USER_OFF,     1, 0, e.offsetY,     e.resetY          },
            { P_ID::DIAGONAL,     0, 0, l.diagonal,    l.resetDiagonal   },
            { P_ID::LINE_VISIBLE, 0, 0, l.lineVisible, l.resetLineVisible  },
            { P_ID::LINE_COLOR,   0, 0, l.lineColor,   l.resetLineColor  },
            { P_ID::LINE_WIDTH,   0, 0, l.lineWidth,   l.resetLineWidth  },
            { P_ID::LINE_STYLE,   0, 0, l.lineStyle,   l.resetLineStyle  },
            // tl missing
            { P_ID::OTTAVA_TYPE,  0, 0, o.ottavaType,  o.resetOttavaType  },
            { P_ID::PLACEMENT,    0, 0, o.placement,   o.resetPlacement   },
            { P_ID::NUMBERS_ONLY, 0, 0, o.numbersOnly, o.resetNumbersOnly }
            };

      mapSignals();
      }
}

