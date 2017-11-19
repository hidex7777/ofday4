#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetCircleResolution(90);
	ofSetWindowTitle("day 4");
	ofEnableAlphaBlending();
	ofEnableDepthTest();
	for (int i = 0; i < 512; i++) {
		this->particles.push_back(shared_ptr<Particle>(new Particle()));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < this->particles.size(); i++) {
		this->particles[i]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	//this->cam.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 2000);
	this->cam.begin();
	for (int i = 0; i < this->particles.size(); i++) {
		this->particles[i]->draw();
	}
	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == 'x') {
		string now = ofGetTimestampString("%Y%m%d%H%M%S");
		this->img.grabScreen(0, 0, 1000, 1000);
		this->img.saveImage("of" + now + ".jpg");
	}
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
