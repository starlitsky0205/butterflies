#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   ofBackground(21,22,128);
   ofSetCircleResolution(64);
   ofEnableBlendMode(OF_BLENDMODE_ADD);
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
       ofBackgroundGradient(ofColor(239,132,22),ofColor(222,252,249),OF_GRADIENT_LINEAR);
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
//
       for(int i=0;i<num;i=i+1){
           point[i].draw();
        for(int j=0;j<num;j=j+1){
               point[j].draw();
             for(int k=0;k<30;k=k+1){
                 // point[k].draw();
            if(ofDist(point[i].x,point[i].y,point[i].z,point[j].x,point[j].y,point[j].z)<80){
             if(ofDist(point[i].x,point[i].y,point[i].z,point[k].x,point[k].y,point[k].z)<80){


                    hueColor = int(ofRandom(255));
                    ofColor a=0;
                    ofFill();
                    a.setHsb(hueColor+ofRandom(60), ofRandom(100), ofRandom(40));
                    ofSetColor(a);
                ofBeginShape();
                ofSetPolyMode(OF_POLY_WINDING_NONZERO);
                ofVertex(point[i].x,point[i].y,point[i].z);
                ofVertex(point[j].x,point[j].y,point[j].z);
                ofVertex(point[k].x,point[k].y,point[k].z);
                ofEndShape();
//               ofSaveFrame();


                }
            }
                   }
               }
        }
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
