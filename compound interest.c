/* Experiment 2: operators
3.write a c program to find simple interest and compound interest   */    
#include<stdio.h>
#include<math.h>
int main()
{
	float ci,r,p,t,t1,t2,t3,t4;
	printf("Enter principle");
	scanf("%f",&p);
	printf("Enter rate");
	scanf("%f",&r);
	printf("Enter time");
	scanf("%f",&t);
	t1=1+(r/100);
	t2=pow(t1,t);
	t3=p*t2;
	t4=t3-p;
	printf("%f",t4);

	return 0;
}
