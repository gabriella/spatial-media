/*	Created by Jared Schiffman on 1/31/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"

class spatialMediaApp : public poObject {
public:
	spatialMediaApp();
	virtual ~spatialMediaApp();
	
    virtual void    update();
    
    virtual void    draw();
	
    void            drawProblem1();
    void            drawProblem2();
    void drawProblem3(int W, int H);
    virtual void    eventHandler(poEvent *event);
	
    virtual void    messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
    
    
    // class variables
    int             mouseX, mouseY;
  //  int W, H;
    char            lastKeyDown;
};

