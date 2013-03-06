#ifndef RANDOMWALKER_H_
#define RANDOMWALKER_H_

#include "ofMain.h"

class RandomWalker {
public:
	void setup();
	void update();
	void draw();
	void toggleDraw();
protected:
	bool bShow;
	float x,y;
};

class RandomMouseWalker : public RandomWalker{
public:
	void update();
};

class RandomStepSizeWalker : public RandomWalker{
public:
	void update();
};

class PerlinLocWalker : public RandomWalker{
public:
	float tx,ty;
	void setup();
	void update();
};

class PerlinStepSizeWalker : public PerlinLocWalker{
public:
	void update();
};

//gaussian distributed
#endif /* RANDOMWALKER_H_ */
