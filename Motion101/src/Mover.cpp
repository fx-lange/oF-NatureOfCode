#include "Mover.h"

void Mover::setup(const ofColor & c){
	color = c;

	pos.set(ofGetWidth()/2,ofGetHeight()/2);
	vel.set(0,0);
	acc.set(-0.001,0.01);
	topSpeed = 10;
}

void Mover::update(){
	vel += acc;
	vel.limit(topSpeed);
	pos += vel;

	checkBorders();
}

void Mover::checkBorders(){
	pos.x = pos.x > ofGetWidth() ? 0 : pos.x;
	pos.y = pos.y > ofGetHeight() ? 0 : pos.y;
	pos.x = pos.x < 0 ? ofGetWidth() : pos.x;
	pos.y = pos.y < 0 ? ofGetHeight() : pos.y;
}

void Mover::draw(){
	ofPushStyle();
	ofSetColor(color);
	ofEllipse(pos,10,10);
	ofPopStyle();
}

// ----- RandomAccMover

void RandomAccMover::update(){
	acc.set(ofRandom(2)-1,ofRandom(2)-1);
	Mover::update();
}

// ----- PerlinAccMover

void PerlinAccMover::setup(const ofColor & c){
	Mover::setup(c);
	t.set(1,1000);
}

void PerlinAccMover::update(){
	acc.set(ofSignedNoise(t.x),ofSignedNoise(t.y));
	t += 0.01;
	Mover::update();
}

