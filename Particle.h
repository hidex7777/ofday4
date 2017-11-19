#pragma once
#include "ofMain.h"

class Particle
{
public:
	Particle();
	~Particle() {};

	void update();
	void draw();
	string color_index(int idx);
	ofColor colorScheme(string name);
private:
	ofVec3f center;
	float radius;
	ofColor mycolor;
	float mya;
	int colidx;
};