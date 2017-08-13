//
//  Points.cpp
//  wall
//
//  Created by 増田麻耶 on 2017/08/10.
//
//

#include "points.hpp"
#include "ofMath.h"


Points::Points(){


}


void Points::draw(){

  speed=ofVec3f(100,1,1);
//    x=x+speed.x;
//    y=y+speed.y;
//    z=z+speed.z;
//
    s=s+speed.x;

     int  r = ofRandom(0,7);

    if(r == 0){
        s = ofRandom(0, PI/4);
    }
    if(r >= 1 && r <= 5) {
        s = ofRandom(PI/4, 3*PI/4);
    }
    if(r == 6)  {
        s = ofRandom(3*PI/4, PI);
    }

    t = ofRandom(0,PI*2);
    x = radius * sin(s) * cos(t);
    y = radius * cos(s);
    z = radius * sin(s) * sin(t);
    radius=270;

     std::cout <<s<<std::endl;
    ofDrawCircle(x,y,z,0.75);
  //ofPoint(x,y,z);
   }

void Points::setradius(float _radius){
    radius=_radius;

}

void Points::getradius(){         //ofPoint could be ofVec2f
    return radius;
}


