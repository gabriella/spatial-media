//
//  smObject.cpp
//  spatialMediaTest
//
//  Created by Jared Schiffman on 2/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "smObject.h"
using namespace std;

smObject::smObject( int _ID )
{
    ID = _ID;
    pixelCount = 0;
    left=0;
    right=0;
    top=0;
    bottom=0;
}

void    smObject::acceptPixel( int x, int y )
{  
    pixelCount++;
    
    if(x<left){
        x=left;
    }
    if(x>right){
        x=right;
    }
    if(y<top){
        y=top;
    }
    if(y>bottom){
        y=bottom;
    }
//    if(x<left
//    
//    1. Extend the smObject class so that it counts all the pixels in the object. 
//    This is effectively the area of object. Print out the pixel count for every 
//        object in the source image
    
    // process incoming pixels here
    
//    for(int i=0;i<ID.width;i++){
//        for(int j=0;j<ID.height;j++){
//            
//        }
//        
//    }
//    int boxSize = (x+y)/2;
//    //no - find the minimum and the maximum
//    cout<<boxSize;
//    cout<<x<<" "<<y;
    
       
   // make something that is left(left, right, top bottom);  
    //set min and max... 
       
       
       
    
}








