#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    void drawDebug();
    void setupBranches(ofVec3f origin, ofVec3f initial_vector, float length, int segments);
    void generateBranch(ofVec3f origin, ofVec3f initial_vector, float length, int segments, int level);

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
    
    bool debug;
		
    ofEasyCam cam;
    ofSpherePrimitive sphere;
    
    ofPath path;
    
    ofxPanel gui;
    ofParameterGroup branch;
    ofParameter<float> branch_smooth, branch_length;
    ofParameter<int> branch_levels, branch_segments, cam_orbit, cam_lat;
};
