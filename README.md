# C-programming
write a function power(a,b) to calculate the value of a raised to b 
#include<stdio.h>
float power(float,int);
int main()
{
	float a,pow;
	int b;
	printf("\n Enter two numbers:");
	scanf("%f %d",&a,&b);
	pow=power(a,b);
	printf("%f to the power %d=%f \n",a,b,pow);
	return 0;
}
 float power(float a,int b)
 {
 	int i;
 	float p=1;
 	for(i=1;i<=b;i++)
 	 p=p*a;
 	 return(p);
 }
