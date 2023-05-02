#include<stdio.h>
int main()
{
	double t,T;
	printf("Enter the time need to be elapsed :");
	scanf("%lf",&t);
	T=(4*t*t)/((2*t)+2)-20u;
	printf("Temperature in celsius and hours:%lf",T);
	return 0;
}
