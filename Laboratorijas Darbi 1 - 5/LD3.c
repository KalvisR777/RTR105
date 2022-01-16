/Programa dod āra 1. un 2. funkcijas atvasinājuma vērtības.
Vērtības atvasinājumam tiek rēķinātas izvēlētajā apgabalā ar noteiktu delta vērtību./



#include <stdio.h>
#include <math.h>

double atvasinajums(double b, double delta_b)
{
	
	return (exp(-(b+delta_b))-exp(-b))/delta_b;
}

double atvasinajums2(double b, double delta_b)
{
	
	return (exp(-(b+delta_b))-exp(-b))/delta_b;
}

int main()
{
	
	double a, b, x, delta_x;
	
	printf("Ievadi a vertibu: ");
	scanf("%lf", &a);
	
	printf("Ievadi b vertibu: ");
	scanf("%lf", &b);
	
	printf("Ievadi delta_x vertibu: ");
	scanf("%lf", &delta_x);
	printf("\n\n");
	
	x = a;
	
	printf("   x\t\t  f(x)\t\tf'(x) anl.\t\tf'(x) skai.\tf''(x) anl.\tf''(x) skai.\n");
	
	while(x< b)
	{
		
		printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x, exp(-x), -exp(-x), atvasinajums(x, delta_x), exp(-x), atvasinajums2(x, delta_x));
		
		FILE * fpointer = fopen("derivative.txt", "a");
		
		fprintf(fpointer, "%lf %lf %lf %lf %lf %lf\n", x, exp(-x), -exp(-x), atvasinajums(x, delta_x), exp(-x), atvasinajums2(x, delta_x));
	
		fclose(fpointer);
		
		x += delta_x;
	}
	
}
