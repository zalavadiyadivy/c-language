#include<stdio.h>

int cube()
{
    int r;
    printf("Enter The R: ");
    scanf("%d",&r);
    return r*r*r;
}

int main()
{
    printf("\nCube is %d",cube());
}
