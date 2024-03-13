#include<stdio.h>
int main(){
	int no,count=0,fd ,ld, r=0;
	printf("\n enter no:");
	scanf("%d",&no);
	
	ld=no%10;
	fd = no;
	
	while(no>=10){
		
		no=no/10;
		
		
	    
	}
fd=no;
r=fd+ld;	
printf("/n sum of first and last digit: %d",r);	
}
