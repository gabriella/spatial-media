
#include "poObject.h"
#include "smImage.h"

class spatialMedia02App : public poObject {
public:
	spatialMedia02App();
	virtual ~spatialMedia02App();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
    

    smImage*    myImage1;
    smImage*    myImage2;
    smImage*    myImage3;
    
    int         threshold;
    
    float       mouseX, mouseY;
    char        lastKeyDown;
};

