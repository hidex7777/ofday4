#include "Particle.h"

Particle::Particle() {
	this->center.set(ofGetWidth() / 2, ofGetHeight() / 2, ofRandom(ofGetWidth()));
	this->radius = ofRandom(ofGetWidth() / 2);
	mycolor = this->colorScheme(this->color_index(ofRandom(11)));
	mya = ofMap(ofRandom(100), 0, 100, 100, 200);
}
void Particle::update() {
	
}
void Particle::draw() {
	ofNoFill();
	ofSetColor(this->mycolor, this->mya);
	ofDrawCircle(this->center, this->radius);
}
string Particle::color_index(int idx) {
	//string pccs[] = { "d2", "d4", "d6","d8", "d10", "d12", "d14", "d16", "d18", "d20", "d22", "d24" };
	if (idx < 0) {
		idx *= -1;
	}
	int reti = idx % 12;
	switch (reti) {
	case 0:
		return "d2";
		break;
	case 1:
		return "d4";
		break;
	case 2:
		return "d6";
		break;
	case 3:
		return "d8";
		break;
	case 4:
		return "d10";
		break;
	case 5:
		return "d12";
		break;
	case 6:
		return "d14";
		break;
	case 7:
		return "d16";
		break;
	case 8:
		return "d18";
		break;
	case 9:
		return "d20";
		break;
	case 10:
		return "d22";
		break;
	case 11:
		return "d24";
		break;
	}
	return "d2";
}
ofColor Particle::colorScheme(string name) {
	ofColor retcol;
	if (name == "d2") {
		retcol.set(163, 90, 92);
	}
	else if (name == "d4") {
		retcol.set(175, 105, 84);
	}
	else if (name == "d6") {
		retcol.set(179, 127, 70);
	}
	else if (name == "d8") {
		retcol.set(171, 148, 70);
	}
	else if (name == "d10") {
		retcol.set(133, 143, 70);
	}
	else if (name == "d12") {
		retcol.set(79, 135, 102);
	}
	else if (name == "d14") {
		retcol.set(42, 123, 118);
	}
	else if (name == "d16") {
		retcol.set(36, 106, 125);
	}
	else if (name == "d18") {
		retcol.set(52, 89, 125);
	}
	else if (name == "d20") {
		retcol.set(84, 82, 124);
	}
	else if (name == "d22") {
		retcol.set(108, 74, 113);
	}
	else if (name == "d24") {
		retcol.set(139, 79, 101);
	}
	else {
		retcol.set(0, 0, 0);
	}
	return retcol;
}