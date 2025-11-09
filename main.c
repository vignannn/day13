#include<stdio.h>
int main()
{
	int n, i=1, age, time;
	float distance, base, fare, total=0,high=0,low = 99999;
	char name[50];
	
	printf(" ~ SMART SRM BUS FARE CALCULATOR ~\n");
	printf(" Enter number of passengers: ");
	scanf("%d",&n);
	
	while (i<=n)
	 {
	 	printf("\n Enter Passenger %d Name :  ",i);
	 	scanf("%s",&name);
	 	printf(" Age:");
	 	scanf("%d",&age);
	 	printf(" Distance: ");
	 	scanf("%f",&distance);
	    printf(" Travel Time: ");
	    scanf("%d",&time);
	    
	    base = distance * 10;
	    fare = base;
	    
	    if(age<12) fare*=0.5;
	    else if (age>=60) fare *=0.7;
	    
	    if ((time >=8 && time <=10)  || (time >= 17 && time <= 20 ))
	    fare *=1.2 ;
	    
	    if(fare <20) fare=20;
	    
	    printf("%s | Base $%.0f | final $%.0f\n",name , base , fare);
	    
	    total += fare ;
	    if( fare > high) high = fare;
	    if (fare < low) low = fare;
	    i++;
	    
    }
    
    printf(" \n ~ DAILY SUMMERY ~\n",n);
    printf("Total Passengers: %d\nTotal Revenue: ₹%.0f
           \nHighest Fare: ₹%.0f\nLowest Fare: ₹%.0f\n", n, total, high, low);
    
    return 0;
}
