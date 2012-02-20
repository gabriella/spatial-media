//  smImage.cpp
//  spatialMedia


#include <iostream>
#include "smImage.h"
#include "poSimpleDrawing.h"
#include "poApplication.h"
using namespace std;


smImage::smImage( const char* fileName, int W, int H )
{  
    // set the image width and height
    width = W;
    height = H;
    
    // load in the image data from file
    FILE* F = fopen( fileName, "rb" );                  // open a file
    if ( F==NULL )
    {
        printf("ERROR: can't find file: %s\n", fileName );
        exit(0);
    }
    imageData = new unsigned char [ width*height ];     // allocate memory for the image
    fread( imageData, 1, width*height, F );             // read file date into the memory
    fclose( F );                                        // close the file
    
    // used for fastDraw method
    imageAsTexture = new poTexture( width, height, imageData, poTextureConfig(GL_LUMINANCE) );
}

smImage::smImage( int W, int H )
{
    // set the image width and height
    width = W;
    height = H;
    
    // load in the image data from file
    imageData = new unsigned char [ width*height ];     // allocate memory for the image
    memset( imageData, 255, width*height );
    
    // used for fastDraw method
    imageAsTexture = new poTexture( width, height, imageData, poTextureConfig(GL_LUMINANCE) );
}

int     smImage::getPixel( int x, int y )
{
    int index = x + y*width;                    // calculate the pixel index
    if ( index < 0 || index >= width*height )
    {
        printf("ERROR: getPixel out of bounds: i:%i x:%i y:%i w:%i h:%i W*H:%i \n",index,x,y,width,height,width*height);
        return 0;
    }
    return imageData[index];                    // return the pixel
}

void    smImage::setPixel( int x, int y, int grayValue )
{
    int index = x + y*width;                    // calculate the pixel index
    if ( index < 0 || index >= width*height )
    {
        printf("ERROR: setPixel out of bounds\n");
        return 0;
    }
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

void    smImage::fastDraw( float x, float y )
{
    // replace the image data int the texture
    imageAsTexture->replace( imageData );
    // draw the texture
    po::drawTexturedRect( imageAsTexture, poRect(x+0,y+height,width,-height) );
}
//
bool smImage::somethingThere(int x0, int y0, int x1, int y1){
////    
    totalBlackPix = 0;
   // cout<<"x:"<<x0<<" y0:"<<y0<<" x1"<<x1<<" y1:"<<y1<<endl;
    
//    x1=width;
//    y1=height;
    
   po::setColor(1,0,0,1);
  // po::drawStrokedRect(x0, y0, x1-x0,y1-y0);
    // po::drawStrokedRect(x0,y0,x1-x0, y1-y0);
    po::drawStrokedRect(600+x0,450+y0,x1-x0,y1-y0);//
                        po::setColor(1,1,1,1);
  // for(int x=x0;x<width;x++){
   //    for(int y=y0;y<height;y++){
           
           
           
          // cout<<x<<" "<<y<<endl;

            for(int x=x0;x<x1;x++){
                for(int y=y0;y<y1;y++){
              //      po::setColor(0,0,1,1);

                //    po::drawStrokedRect(x0,y0,100,100);
                    
            float myVal = getPixel(x,y);
            if(myVal == 0){
                totalBlackPix++;
                
            }
        }
   }
    po::setColor(1,1,1,1);
    cout << "tbp " << totalBlackPix << endl;
    if(totalBlackPix>(100* 100)/2){
        po::setColor(1,0,0,0.5);
        // po::drawStrokedRect(x0, y0, x1-x0,y1-y0);
        // po::drawStrokedRect(x0,y0,x1-x0, y1-y0);
        po::drawFilledRect(600+x0,450+y0,x1-x0,y1-y0);//
        po::setColor(1,1,1,1);

        cout<<"i'm here";   
        return true;
    }
    //cout << totalBlackPix << endl;
    else {
        return false;
        cout<<"nothing is here";
    }
}
//how to do alpha channel
//why not drawing where i ask it to - 
//am i even doing this correctly










