
#include "poObject.h"
#include "smImage.h"
#include <iostream>

class robbietestApp : public poObject {
public:
	robbietestApp();
	virtual ~robbietestApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
    
    
    smImage*    myImage1;
    smImage*    myImage2;
    smImage*    myImage3;
    smImage*    myImage4;
    smImage*    myImage5;
    smImage*    myImage6;
    smImage*    myImage7;
    smImage*    myImage8;
    smImage*    myImage9;
    smImage*    myImage10;
    smImage*    myImage11;
    smImage*    myImage12;
    
    int         threshold;
    
    float       mouseX, mouseY;
    char        lastKeyDown;
};

