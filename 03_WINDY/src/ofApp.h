#pragma once
#include "Ball.hpp"

#include "ofMain.h"

#define NBALLS 1000

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        
        Ball groupOfBalls[NBALLS];
    ofImage image;
    ofImage windows;
    ofSoundPlayer outside;
    ofSoundPlayer inside;
    ofSoundPlayer news;
    
    int bxpos = (ofGetWidth()*.5) - 250;
    int bypos = ofGetHeight() - 250;
};
