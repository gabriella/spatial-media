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
    right=240;
    top=0;
    bottom=320;
}

void    smObject::acceptPixel( int x, int y )
{  
    pixelCount++;
    
    
    midPointX =0;//+=x;
    midPointY =0;//+=y;
    
    if(x>left){
        left=x;
    }
    if(x<right){
        right=x;
    }
    if(y>top){
        top=y;
    }
    if(y<bottom){
       bottom=y;
    }
    
  
}








