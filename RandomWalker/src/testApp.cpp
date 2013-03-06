#include "testApp.h"

#include "RandomWalker.h"

/*	TODO
 * 	gaussian walker
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

	string str = "press 1 - 5 to toggle different walker:\n";
	str += "1: default random walker \n";
	str += "2: walker using center to mouse direction\n";
	str += "3: random step size walker\n";
	str += "4: walker with perlin noise positions\n";
	str += "5: walker with perlin step size\n";

	ofSetColor(255);
	ofDrawBitmapString(str,10,20);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	switch(key){
	case '1':
		walker.toggleDraw();
		break;
	case '2':
		mouseWalker.toggleDraw();
		break;
	case '3':
		stepsWalker.toggleDraw();
		break;
	case '4':
		perlinLocWalker.toggleDraw();
		break;
	case '5':
		perlinStepWalker.toggleDraw();
		break;
	}
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
