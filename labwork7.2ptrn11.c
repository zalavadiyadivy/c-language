#include <stdio.h>

int main() {
    int i,j,n;
    
    for (i=1;i<=5;i++) 
	{
        for (j=1;j<=5-i;j++) {
            printf("  ");
        }
        for (n=1;n<=2*i-1;n++) {
            printf("* ");
        }
        
        printf("\n");
    }
}
