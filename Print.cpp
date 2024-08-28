#include <TXLib.h>
#include <math.h>
#include <assert.h>
#include "Print.h"


void Print(int* data,size_t sizeX,size_t sizeY )
{
    for ( int y = 0; y < sizeY; y++)
    {
        for ( int x = 0; x < sizeX; x++)
        {
            printf ("data[%d][%d]=%d ", y, x, *((int*)data + y*sizeX + x));
        }
        printf("\n");
    }
}

