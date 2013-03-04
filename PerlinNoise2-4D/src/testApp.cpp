#include "testApp.h"

float faktor = .01;
ofImage img, img2, img3;


//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(60);

	img.allocate(600,200,OF_IMAGE_GRAYSCALE);
	img2.allocate(600,200,OF_IMAGE_GRAYSCALE);
	img3.allocate(600,200,OF_IMAGE_COLOR);

	unsigned char * pixels = img.getPixels();
	for(int x = 0;x<600;++x){
		for(int y=0;y<200;++y){
			char brightess = ofMap(ofNoise(x*faktor,y*faktor),0,1,0,255);
			pixels[y*600+x] = brightess;
		}
	}
	img.update();
}

//--------------------------------------------------------------
void testApp::update(){
	unsigned char * pixels = img2.getPixels();
	for(int x = 0;x<600;++x){
		for(int y=0;y<200;++y){
			char brightess = ofMap(ofNoise(x*faktor,y*faktor,ofGetFrameNum()*faktor),0,1,0,255);
			pixels[y*600+x] = brightess;
		}
	}

	unsigned char * rgbPixels = img3.getPixels();
	for(int x = 0;x<600;++x){
		for(int y=0;y<200;++y){
			for(int c=0;c<3;++c){
				rgbPixels[(y*600+x)*3+c] = ofMap(ofNoise(x*faktor,y*faktor,c,ofGetFrameNum()*faktor),0,1,0,255);
			}
		}
	}

	img2.update();
	img3.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(255);
	img.draw(0,0);
	img2.draw(0,200);
	img3.draw(0,400);

	ofSetColor(255,0,0);
	ofDrawBitmapString(ofToString(ofGetFrameRate()),10,10);
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
