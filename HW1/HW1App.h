/*	Created by Administrator on 1/28/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"




class HW1App : public poObject {
public:

	HW1App();
    
	virtual ~HW1App();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
  
    //virtual void drawGrid1(int W, int H);
    void drawGrid1(int W, int H);
    void drawGrid2(int X, int Y);
   
};

