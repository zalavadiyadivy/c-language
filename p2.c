#include <stdio.h>

int main()
{
    int i,j;

    for (i = 0; i < 5; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%d ", 5 - j);
        }
        printf("\n");
    }
    
}
