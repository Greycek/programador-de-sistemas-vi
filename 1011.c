#include<stdio.h>

int main ()
{
	double r = 0.0;
	double volume = 0.0;
	double pi = 0.0;
	
	
	pi = 3.14159;
	scanf("%lf",&r);
	volume = (4.0/3)*pi*(r*r*r);
	
	
	printf("VOLUME = %.3lf\n",volume);
	
	return 0;
}