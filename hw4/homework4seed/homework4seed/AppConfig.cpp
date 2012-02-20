/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "homework4seedApp.h"

poObject *createObjectForID(uint uid) {
	return new homework4seedApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "homework4seed", 100, 100, 1024, 768);
}

void cleanupApplication() {
}