/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "HW1App.h"

poObject *createObjectForID(uint uid) {
	return new HW1App();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "HW1", 100, 100, 1024, 768);
}

void cleanupApplication() {
}