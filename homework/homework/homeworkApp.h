/*	Created by Administrator on 1/28/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"
#include "poShapeBasics2D.h"




class homeworkApp : public poObject {
public:
    
	homeworkApp();
    
	virtual ~homeworkApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
    
    //virtual void drawGrid1(int W, int H);
    void drawGrid1(int W, int H);
    void drawGrid2(int X, int Y);
    int X=0;
    int Y=0;
    poRectShape* redRect;
    
};

