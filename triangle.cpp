#include <TXLib.h>
#include <math.h>
#include <assert.h>

int main()
{
    int data [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k=0;
    int a = 1;
    for (int i = 0; i < 4; i++)
    {  
        for (int j =0; j < a; j++)
        {
            printf ("%d ", data[k]);
            k++;
        }
        printf ("\n");
        a++;    
    }


}