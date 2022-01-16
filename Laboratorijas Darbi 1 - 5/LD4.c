#include <stdio.h>
#include <math.h>

void taisn(double a, double b, int n)
{
	double x = a, taisn_int = 0;
	int k = 0;
	
	for(k; k < n; k++)
	{
		
		taisn_int += (fabs(a - b)/(n*1.0)*(exp(-(x + (fabs(a - b)/n)*(k*1.0)))));
		
	}
	printf("taisnstura metode - %lf\n", taisn_int);
}

void trapece(double a, double b, int n)
{
	double x = a, trapece_int = 0, y0, y1, x0, x1;
	int k = 0;
	
	for(k; k < n; k++)
	{
		x0 = x + (fabs(a - b)/n)*(k*1.0);
		x1 = x + (fabs(a - b)/n)*((k+1)*1.0);
		y0 = exp(-x0);
		y1 = sinh(-x1);
		
		trapece_int += (fabs(a - b)/(n*1.0))*((y1+y0)/2);
		
	}
	printf("trapecu metode - %lf\n", trapece_int);
}

void simp(double a, double b, int n)
{
	double x = a, z0, z1, z2, x0, x1, simp_int = 0;
	int k = 0;
	
	for(k; k < n; k++){
		
		x0 = x + (fabs(a - b)/n)*(k*1.0);
		x1 = x + (fabs(a - b)/n)*((k+1)*1.0);
		z0 = exp(-x0);
		z1 = exp(-x1);
		z2 = exp(-(x0+x1)/2);
		
		simp_int += ((x1-x0)/6)*(z0+4*z2+z1);
			
	}
	printf("simpsona metode - %lf", simp_int);
}


int main()
{
	double c, d;
	int p;
	
	printf("Ievadi a: ");
	scanf("%lf", &c);
	printf("Ievadi b: ");
	scanf("%lf", &d);
	printf("Ievadi n: ");
	scanf("%d", &p);
	
	taisn(c, d, p);
	trapece(c, d, p);
	simp(c, d, p);
	
}
