#include<stdio.h>

int main ()
{
	int c1 = 0;
	int n1 = 0;
	float v1 = 0.0;
	int c2 = 0;
	int n2 = 0;
	float v2 = 0.0;
	float p = 0.0;
	
	scanf("%d",&c1);
	scanf("%d",&n1);
	scanf("%f",&v1);
	
	scanf("%d",&c2);
	scanf("%d",&n2);
	scanf("%f",&v2); 
	p = (n1*v1)+(n2*v2);
	
	printf("VALOR A PAGAR: R$ %.2f\n",p); 

return 0;
}	