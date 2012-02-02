/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "simpleDrawingHelpApp.h"

poObject *createObjectForID(uint uid) {
	return new simpleDrawingHelpApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "simpleDrawingHelp", 100, 100, 1024, 768);
}

void cleanupApplication() {
}