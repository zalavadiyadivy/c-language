
#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Enter The n:");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % 2 != 0) 
        {
            printf("%d \n", n);
        }
        n--;
    }
    
}
