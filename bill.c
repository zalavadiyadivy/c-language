#include<stdio.h>
int main(){
	
	int unit, bill, finalbill;
	printf("enter unit:");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		bill = unit*0.50;
		
		
	}else if(unit>=51 && unit<=150)
	{
		  bill = 25+(unit-50)*0.75;
	}
	else if(unit>=151 && unit<=250)
	{
	bill = 100+(unit-150)*1.20;
	}else 
	{
		bill = 220+(unit-250)*1.50;
	}
     finalbill = bill + (bill*20/100);	
	 printf("electricity bill is %d", finalbill );
}
