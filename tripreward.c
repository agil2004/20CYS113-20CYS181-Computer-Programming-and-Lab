#include<stdio.h>
#define a 10
int main()
{
	double beginkm,endingkm,reward;
	printf("Enter the starting km:");
	scanf("%lf",&beginkm);
	printf("Enter the km after completing the journey:");
	scanf("%lf",&endingkm);
	reward=(endingkm-beginkm)*a;
	if (endingkm>beginkm)
	printf ("Amonut given to the driver:%lf",reward);
	else 
	printf ("Invalid input given by the user");
	return 0;
}

