#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i=0; i<NBALLS; i++){
        groupOfBalls[i].setup();
    } // calling the object's setup method
    
    ofBackgroundHex(0xfffef9);
    
   
    outside.load("outside.wav");
    inside.load("inside.wav");
    news.load("news.mp3");
    
    
    outside.play();
    inside.play();
    news.play();
    
    inside.setVolume(0);
    outside.setVolume(.7);
    news.setVolume(0);
    
    image.load("apt.png");
    windows.load("windows.png");

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i<NBALLS; i++){
        groupOfBalls[i].update();
    } // calling the object's update method
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
  
        
        for(int i=0; i<NBALLS; i++){
            ofNoFill();
            groupOfBalls[i].draw();
        } // call the draw method to draw the object
    
    
    if((ofGetMouseX() > bxpos) &&
       (ofGetMouseX() < (bxpos + 502) &&
        (ofGetMouseY() > bypos))){
           
           inside.setVolume(.9);
           outside.setVolume(.2);
           news.setVolume(.25);
           
           
       } else {
           inside.setVolume(.2);
           outside.setVolume(0.5);
           news.setVolume(0);
       }
    
    
    image.draw(bxpos, bypos);
    
    
    
    
        


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    for(int i = 0; i < NBALLS; i++){
        groupOfBalls[i].keyPressed(key);
    }
    
    if(key == '1'){
        ofSetColor(255);
        windows.draw(bxpos,bypos);
    }
    
   
    
    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    // some extra keyboard commands:
    
    if (key == 'f') {
        
        // press f to toggle fullscreen / window mode
        ofToggleFullscreen();
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


