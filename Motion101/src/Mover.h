#ifndef MOVER_H_
#define MOVER_H_

#include "ofMain.h"

class Mover {
public:
	ofVec2f vel, pos, acc;
	ofColor color;
	float topSpeed;

	void setup(const ofColor & c);
	void update();
	void draw();
private:
	void checkBorders();
};

class RandomAccMover : public Mover{
public:
	void update();
};

class PerlinAccMover : public Mover{
public:
	ofVec3f t;
	void setup(const ofColor & c);
	void update();
};

#endif /* MOVER_H_ */
