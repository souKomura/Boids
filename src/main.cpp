#include "ofMain.h"
#include "ofApp.h"

//make mesh
float Bird::r = 2;
ofMesh Bird::shape;

//========================================================================
int main( ){
	ofSetupOpenGL(1200,900,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());
    
}
