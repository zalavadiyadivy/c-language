#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Enter any number:");
    scanf("%d", &n);
    do
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    } while (i <= n);

    
}
