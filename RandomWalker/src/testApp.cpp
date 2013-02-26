#include "testApp.h"

#include "RandomWalker.h"

RandomWalker walker;
RandomMouseWalker mouseWalker;

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	ofSetBackgroundAuto(false);
	ofEnableAlphaBlending();

	walker.setup();
	mouseWalker.setup();
}

//--------------------------------------------------------------
void testApp::update(){
	walker.update();
	mouseWalker.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(0,0,0,15);
	ofRect(0,0,ofGetWidth(),ofGetHeight());
	ofSetColor(255);
	walker.draw();
	ofSetColor(255,0,0);
	mouseWalker.draw();
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
