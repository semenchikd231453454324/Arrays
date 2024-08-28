#include <TXLib.h>
#include <math.h>
#include <assert.h>
#include "Print.h"

int main()
{   
    int const size_of_int = 4;
    //int nRow;
    //printf ("Enter number of rows: \n");
    //scanf ("%d", &nRow);
    int vertsize = 0, gorizontsize = 0;
    scanf ("%d %d", &vertsize, &gorizontsize);

    int* data = (int*) calloc(x*y, size_of_int);
    if (!data)
    {
        return 1;
    }

    Print(data, gorizontsize, vertsize);

    free (data);
    data = NULL;
    
}   
