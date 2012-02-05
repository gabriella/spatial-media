//  smImage.cpp
//  spatialMedia


#include <iostream>
#include "smImage.h"
#include "poSimpleDrawing.h"
#include "poApplication.h"
using namespace po;
using namespace std;


smImage::smImage( const char* fileName, int W, int H )
{  
    // set the image width and height
    width = W;
    height = H;
    int x=0;
    int y=0;
    
    //open the file, allocate memory for it, read through the image, put in image date
    
    
    // load in the image data from file
    FILE* F = fopen( fileName, "rb" );                  // open a file
    if(F==NULL){
        printf("ERROR: can't find file: %s\n", fileName );
        exit(0);
    
    }
    imageData = new unsigned char [ width*height ];     // allocate memory for the image
    fread( imageData, 1, width*height, F );             // read file date into the memory
    fclose( F );                                        // close the file
    
    // used for fastDraw method
    imageAsTexture = new poTexture( width, height, imageData, poTextureConfig(GL_LUMINANCE) );
    
    
}

int     smImage::getPixel( int x, int y )
{
    int index = x + y*width;                    // calculate the pixel index
    return imageData[index];                    // return the pixel
}

void    smImage::setPixel( int x, int y, int grayValue )
{
    int index = x + y*width;                    // calculate the pixel index
    imageData[index] = grayValue;               // set the pixel
}

void    smImage::draw()
{
    // this is an inefficent, but simple mode of drawing an image
    // we draw one rectangle for every pixel
    // use the fastDraw() method if you want something faster
    for( int x=0; x<width; x++ )
    {
        for( int y=0; y<height; y++ )
        {
            float grayValue = getPixel(x,y);            // get the gray value
            grayValue = grayValue / 255;                // convert from 0-255 to 0.0-1.0
            po::setColor( poColor( grayValue, grayValue, grayValue) );  // set the color
            po::drawFilledRect( x*5,y*5, 5, 5 );        // draw the "pixel" rectangle
        }
    }
}

void    smImage::fastDraw()
{
    // replace the image data int the texture
    imageAsTexture->replace( imageData );
    // draw the texture
    po::drawTexturedRect( imageAsTexture, poRect(0,500,500,-500) );
}

void smImage::invert()
{   
    for (int x=0;x<width;x++)
    {
        for(int y=0;y<height;y++){
            float brightness = getPixel(x,y);//variable for brightness
            
            brightness = 1/brightness;
            brightness = brightness*10;//WHY?!?!?!!??
            //cout<<brightness;
//            int index = x+y*width;
//            for (int i=0;i<500;i++){
//            cout<<imageData[index];
//            }      
            //how to debug what's going on
            
            //drawImage: 
            po::setColor( poColor( brightness, brightness, brightness) );  // set the color
            po::drawFilledRect( x*5,y*5, 5, 5 );        // draw the "pixel" rectangle
        }
    }
}
void smImage::flipVertical(){
    for (int x=0;x<width;x++)
    {
        for(int y=0;y<height;y++){
                       
          //mirrored  int index = (width-1-x)+y*width;
            int index = x+(height-1-y)*width;
       
            float col = imageData[index];
            //float col = getPixel(x,y);
        
            col = col/255;
            
            po::setColor(poColor(col, col, col));
            po::drawFilledRect(x*5,y*5, 5, 5);
            
        }
    } 
}

void smImage::blackAndWhite(){
  
    for(int x=0;x<width;x++){
        for(int y=0;y<height;y++){
            int newPixelCol = 0;
            float threshold = getPixel(x,y);
            if(threshold/255>0.5){
                newPixelCol=1;
            }
            else if(threshold/255<0/5){
                newPixelCol=0;
            }
            po::setColor(poColor(newPixelCol, newPixelCol, newPixelCol));
                         po::drawFilledRect(x*5, y*5, 5,5);
            }
        }
    }




//can i use set pixel



//i'm sorta doing this stupidly by drawing many 1x1 pixels. 
//why does this in flip vertical fuck everything up
//why am i confused how to use setpixel





