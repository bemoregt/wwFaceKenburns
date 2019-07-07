#include "ofApp.h"

using namespace ofxCv;
using namespace cv;

//--------------------------------------------------------------
void ofApp::setup(){
    img1.load("/Users/mun/Desktop/lena512.png");
    
    rect1= ofRectangle(0, 0, 1024, 768);
    rect2= ofRectangle(100, 100, 102, 77);
    
    t=1;
    
    xx= 1;
    yy= 1;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    //ofSleepMillis(30);
    img1.update();
    
    
    ss= 1 + t * 0.001;
    
    t += 1;
    if(t > 9500) t = 0;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(75);
    
    ofSetColor(255, 255, 255);
    //ofScale(4.0f, 4.0f, 1.0f);
    ofScale(ss);
    img1.draw(xx-t*0.05, yy-t*0.05);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
