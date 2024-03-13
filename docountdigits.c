#include<stdio.h>
int main(){
	int no,count=0,r,sum=0,m=1;
	printf("\n enter no:");
	scanf("%d",&no);
	
	while(no>0){
		r=no%10;
		sum=sum+r;
		m=m*r;
		count++;
		no=no/10;
	}
	printf("\n no of digits are %d",count);
	printf("\n sum of digits are %d",sum);
	printf("\n multiply of digits are %d",m);
	
}
