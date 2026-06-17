#include<stdio.h>
int main() {
 
    int fun = 0;
    int numht = 0;
    double val =0;
	double sal=0;
	
    
 scanf("%d",&fun);
 scanf("%d",&numht);
 scanf("%lf",&val);
 
 sal=val*numht;
 
 printf("NUMBER = %d\n",fun);
 printf("SALARY = U$ %.2lf\n",sal);
     
 
    return 0;
}