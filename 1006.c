#include <stdio.h>

int main () {	
	
	double nA = 2.0;
	double nB = 3.0;
	double nC = 5.0;
	double med = 0;
	
    scanf("%lf",&nA);
	scanf("%lf", &nB);
	scanf("%lf", &nC);
	med = ((nA*2.0)+(nB*3.0)+(nC*5.0))/10.0;
		printf("MEDIA = %.1lf\n", med);
		
	return 0;
	
}
