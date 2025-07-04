#include<stdio.h>
void main() {
	float units ;
	printf("Enter the units you have consumed :");
	scanf("%f",&units);
	
	float total_bill =0;
	
	if(units<=50){
		total_bill=total_bill+ (units *30);
		
	}
	else if(units<=150) {
		total_bill=total_bill+(units*40);
	}
	else  {
		total_bill=total_bill+(units*50);
	}
	printf("Your electicity bill is: Rs %f\n",total_bill);
} 