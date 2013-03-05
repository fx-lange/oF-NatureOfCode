#include "testApp.h"

#include "Mover.h"

Mover mover;
RandomAccMover randomMover;
PerlinAccMover perlinMover;

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	ofSetFrameRate(60);
	ofSetBackgroundAuto(false);
	ofEnableAlphaBlending();

	mover.setup(ofColor(255,0,0));
	randomMover.setup(ofColor(0,255,0));
	perlinMover.setup(ofColor(0,0,255));
}

//--------------------------------------------------------------
void testApp::update(){
	mover.update();
	randomMover.update();
	perlinMover.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(0,0,0,5);
	ofRect(0,0,ofGetWidth(),ofGetHeight());
	ofSetColor(255);

	mover.draw();
	randomMover.draw();
	perlinMover.draw();
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
