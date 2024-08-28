#include <TXLib.h>
#include <math.h>
#include <assert.h>
#include "Print.h"

int main()
{
    int data1 [4][3] =
    {
        {11, 12, 13},
        {21, 22, 23},
        {31, 32, 33},
        {41, 42, 43}
    };
    
      int data2 [4][3] =
    {
        {22, 24, 26},
        {42, 44, 46},
        {62, 64, 66},
        {82, 84, 86}
    };

      int datasum [4][3] =
    {
    //    {},
    //    {},
    //    {},
    //    {}
    };


    int sizeX = 0, sizeY = 0;

    sizeX = sizeof (data1 [0]) / sizeof (data1 [0][0]);
    sizeY = sizeof (data1) / sizeof (data1 [0]);

     for ( int y = 0; y < sizeY; y++)
    {
        for ( int x = 0; x < sizeX; x++)
        {
            datasum [y][x] =  data1 [y][x]  + data2 [y][x] ;
        }

    }

    Print(*datasum, sizeX, sizeY);

}
