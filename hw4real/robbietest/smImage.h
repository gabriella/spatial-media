
//  smImage.h
//  spatialMedia

#ifndef spatialMedia_smImage_h
#define spatialMedia_smImage_h

#include "poTexture.h"

class smImage
{
public:
    // the image constructor
    smImage( const char* fileName, int W, int H );
    smImage( int W, int H );
    
    // draw image methods
    void    draw();
    void    fastDraw( float x, float y );
    //void calcThresh1(smImage i1, smImage i2 );
    void thresh(float x, float y);
    bool somethingThere(int x0,int y0, int x1, int y1);
    
    // get and set pixel methods
    int     getPixel( int x, int y );
    void    setPixel( int x, int y, int grayValue );
    
   // bool seedFill(int x, int y, int label);
    
    // image data variables
    int             width, height;
    unsigned char*  imageData;

    
    // this poTexture is used for the fastDraw method
    poTexture*      imageAsTexture;
    
    //
    int totalBlackPix;//total number of pixels that are black
};


#endif
