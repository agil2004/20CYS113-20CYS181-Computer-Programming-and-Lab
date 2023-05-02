#include<stdio.h>
int main()
{
	double v,rate;
	printf("Enter the volume in packet (in ml):");
	scanf("%lf",&v);
	printf("Enter the time that is taken to infusion (in mins):");
	scanf("%lf",&rate);
	double hour,infusion;
	hour=rate/60;
	infusion=v/hour;
	printf("The volume to be infused:%lf\n",v);
	printf("The time of infusion;%lf\n",infusion);
	return 0;

}

