#include<stdio.h>
int main(){
	char ch = 'a';
	do{
		printf("%c",ch+=4);
	}while(ch<='z');
} 
