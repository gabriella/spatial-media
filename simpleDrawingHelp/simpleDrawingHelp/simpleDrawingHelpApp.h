/*	Created by Administrator on 1/31/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"
#include <iostream>
//#include "Car.h"


class simpleDrawingHelpApp : public poObject {
public:
	simpleDrawingHelpApp();
	virtual ~simpleDrawingHelpApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
    
    int x;
    
    bool hasclicked;
    
 //   Car = myCar();
    
    poPoint mousePos;//whenever it moves, grab that position, save it in a variable used in the draw loop
    
    
    //Box b = new Box();
    //b.addEvent(PO_Mouse_Over, this)...
};

