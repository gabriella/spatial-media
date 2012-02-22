
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
    
    void imageTest(smImage image);
    bool seedFill(int x, int y, int label);
    
    int label ;
    smImage*    labelImage;
    smImage* flood1;
    smImage* flood2;
    smImage* flood3;
    smImage* sourceImage;
    
    int         threshold;
    int height, width;
    
    float       mouseX, mouseY;
    char        lastKeyDown;
};

