#include <stdio.h>

int main () {

	double nA = 0.0;
	double nB = 0.0;
	double med = 0;
	
	scanf("%lf",&nA);
	scanf("%lf", &nB);
	med = ((nA*3.5)+(nB*7.5))/11.0;
	
	printf("MEDIA = %.5lf\n", med);
	return 0;
	
}
