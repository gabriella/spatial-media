

#include "spatialMediaApp.h"
#include "poApplication.h"
#include "poCamera.h"
#include "poSimpleDrawing.h"

// APP CONSTRUCTOR. Create all objects here.
spatialMediaApp::spatialMediaApp() {
    
    // add the 2D camera with a black background
	addModifier(new poCamera2D(poColor::black));
    
    // initialize our variables (see variables declared in .h file)
    lastKeyDown = '1';
    mouseX = 0;
    mouseY = 0;
    
    // register for "mouse move" and "key down" events
    addEvent( PO_MOUSE_MOVE_EVENT, this );
    addEvent( PO_KEY_DOWN_EVENT, this );
}

// APP DESTRUCTOR. Delete all objects here.
spatialMediaApp::~spatialMediaApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void spatialMediaApp::update() {
	
}

// UPDATE. Called once per frame. Draw objects here.
void spatialMediaApp::draw() {
    
    // do '1'
    if ( lastKeyDown == '1' )
        drawProblem1();
    
    // do '2'
    if ( lastKeyDown == '2' )
        drawProblem2();

    if ( lastKeyDown == '3' )
        drawProblem3(20,15);

}

// NOTE: this is not the actual solution to Problem 1
void spatialMediaApp::drawProblem1()
{
    // set color to red
    po::setColor( poColor::red );
    // draw 300 x 300 rectangle
    po::drawFilledRect( 0, 0, 300, 300 );
}

// NOTE: this is not the actual solution to Problem 2
void spatialMediaApp::drawProblem2()
{
    // repeat 10 times
    for( int i=0; i<10; i++ ) {
        // set color to white
        po::setColor( poColor::white );
        // draw 50x50 rectangle at specified steps
        po::drawFilledRect( i*60,200, 50,50 );
    }
}


void spatialMediaApp::drawProblem3(int W, int H)
{
    
    for(int x=0;x<W;x++){
        
        for(int y=0;y<H;y++){
            po::setColor( poColor::white );
            // draw 50x50 rectangle at specified steps
            po::drawFilledRect( x*20, y*20, 10,10);
    }
}
}


// EVENT HANDLER. Called when events happen. Respond to events here.
void spatialMediaApp::eventHandler(poEvent *event) {
	
    if ( event->type == PO_MOUSE_MOVE_EVENT )
    {
        // capture mouse coordinates    
        mouseX = event->globalPosition.x;
        mouseY = event->globalPosition.y;
    }
    
    if ( event->type == PO_KEY_DOWN_EVENT )
    {
        // capture key down
        lastKeyDown = event->keyChar;
    }
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void spatialMediaApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}







