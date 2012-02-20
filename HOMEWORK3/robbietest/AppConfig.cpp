/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "robbietestApp.h"

poObject *createObjectForID(uint uid) {
	return new robbietestApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "robbietest", 100, 100, 1024, 768);
}

void cleanupApplication() {
}