#include "RandomWalker.h"

// ----- RandomWalker

void RandomWalker::setup(){
	x = ofGetWidth()/2.f;
	y = ofGetHeight()/2.f;
}

void RandomWalker::update(){
	x += ofRandom(2)-1;
	y += ofRandom(2)-1;
}

void RandomWalker::draw(){
	ofCircle(x,y,2);
}

// ----- RandomMouseWalker

void RandomMouseWalker::update(){
	float upProb = ofMap(ofGetMouseY(),ofGetHeight(),0,5,45);
	float downProb = ofMap(ofGetMouseY(),0,ofGetHeight(),5,45) + upProb;
	float leftProb = ofMap(ofGetMouseX(),ofGetWidth(),0,5,45) + downProb;
	float rightProb = ofMap(ofGetMouseX(),0,ofGetWidth(),5,45) + leftProb;

	float dice = ofRandom(100);

	if(dice < upProb){
		y -= 1;
	}else if(dice < downProb){
		y += 1;
	}else if(dice < leftProb){
		x -= 1;
	}else if (dice < rightProb){
		x += 1;
	}
}

// ----- RandomStepsWalker

void RandomStepSizeWalker::update(){
	float range = 5;
	float stepSize, dice;

	//custom probability distributed step size (like monte carlo)
	//likelihood of a step size equals its squared value
	do{
		stepSize = ofRandom(0,range);
		dice = ofRandom(0,range*range);
	}while(dice > stepSize * stepSize);

	x += ofRandom(-stepSize,stepSize);
	y += ofRandom(-stepSize,stepSize);
}

// ----- PerlinNoiseWalker

void PerlinLocWalker::setup(){
	RandomWalker::setup();
	tx = 0;
	ty = 10000;
}

void PerlinLocWalker::update(){
	x = ofMap(ofNoise(tx),0,1,0,ofGetWidth());
	y = ofMap(ofNoise(ty),0,1,0,ofGetHeight());

	tx += 0.01;
	ty += 0.01;
}

// ----- PerlinStepSizeWalker

void PerlinStepSizeWalker::update(){
	x += ofMap(ofNoise(tx),0,1,-10,10);
	y += ofMap(ofNoise(ty),0,1,-10,10);



	tx += 0.01;
	ty += 0.01;
}

