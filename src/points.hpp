//
//  Points.hpp
//  wall
//
//  Created by 増田麻耶 on 2017/08/10.
//
//

#ifndef points_hpp
#define points_hpp

#include <stdio.h>
#include "ofMain.h"
#include "ofxGui.h"
#include <iostream>
#include "ofMath.h"

class Points{
public:


    Points();
    float s,t;
    float x,y,z,radius,_radius,col;
    void draw();

    void setradius(float radius);
    void getradius();
    float hueColor;
    ofVec3f speed;

};


#endif /* Points_hpp */
