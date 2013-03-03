#include "testApp.h"

#include "RandomWalker.h"

/*	TODO
 * 	gaussian walker
 * 	perlin walker
 * 	ui to toggle different walkers
 * 	explain mouseWalker visually
 */

RandomWalker walker;
RandomMouseWalker mouseWalker;
RandomStepSizeWalker stepsWalker;
PerlinLocWalker perlinLocWalker;
PerlinStepSizeWalker perlinStepWalker;

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	ofSetBackgroundAuto(false);
	ofEnableAlphaBlending();

	walker.setup();
	mouseWalker.setup();
	stepsWalker.setup();
	perlinLocWalker.setup();
	perlinStepWalker.setup();
}

//--------------------------------------------------------------
void testApp::update(){
	walker.update();
	mouseWalker.update();
	stepsWalker.update();
	perlinLocWalker.update();
	perlinStepWalker.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(0,0,0,15);
	ofRect(0,0,ofGetWidth(),ofGetHeight());

	ofSetColor(255);
	walker.draw();

	ofSetColor(255,0,0);
	mouseWalker.draw();

	ofSetColor(0,255,0);
	stepsWalker.draw();

	ofSetColor(0,0,255);
	perlinLocWalker.draw();

	ofSetColor(255,255,0);
	perlinStepWalker.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
