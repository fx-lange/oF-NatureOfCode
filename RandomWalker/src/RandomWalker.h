#ifndef RANDOMWALKER_H_
#define RANDOMWALKER_H_

#include "ofMain.h"

class RandomWalker {
public:
	void setup();
	void update();
	void draw();
protected:
	float x,y;
};

class RandomMouseWalker : public RandomWalker{
public:
	void update();
};
#endif /* RANDOMWALKER_H_ */
