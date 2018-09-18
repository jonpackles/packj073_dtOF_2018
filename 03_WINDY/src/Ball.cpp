#include "Ball.hpp"

Ball::Ball(){
}

void Ball::setup(){
    x = ofRandom(0, ofGetWidth());      // give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);           // and random speed and direction
    speedY = ofRandom(0, 2);
    
    dim = 1;
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by addressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
    
    
}


void Ball::update(){
    
//    speedY+=vel;
    speedY+= .1;
    
    if(x < 0 ){
        x = 0;
        speedX *= -1;
        
        
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = -50;
        x = ofRandom(ofGetWidth());
//        speedY = ofRandom(-1, 1);
        speedY *= -1;
    }
    
    else if(
            (y > (ofGetHeight() - 251))
            && (x > (ofGetWidth()*.5 - 250))
            && (x < (ofGetWidth()*.5 +250))){
        
        speedY *= -.5;
        speedY+= acc;
       
    }
        
        
    
    
    // else if position = height of house AND between width values of the house... speedY *=-1
    
    x+=speedX;
    y+=speedY;
}


void Ball::draw(){
    ofSetColor(0,0,0);
    ofDrawCircle(x, y, dim);
}


void Ball::keyPressed(int key){
    if (key == 'o'){
        dim++;
    } else if (key == 'i'){
        dim--;
    } else if (key == 'a'){
        speedY++;
        speedX ++;
    } else if (key == 's'){
        speedY--;
        speedX --;
    }
    
}

