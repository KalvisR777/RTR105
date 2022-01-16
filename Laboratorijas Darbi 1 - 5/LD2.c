/Programma atrod x vērtību noteiktā apgabalā ar noteiktu delta_x vērtību. Sakni meklē ar vērtības zīmju metodi/


#include <stdio.h>
#include <math.h>

int main()
{
	
	double a, b, c, x, delta_x, funkca, funkcb, funkcx;
	
	int k = 0;
	
	printf("Ievadi a, b un c vertibas:\n");
	scanf("%lf\n", &a);
	scanf("%lf\n", &b);
	scanf("%lf", &c);
	
	printf("Ievadi delta_x: ");
	scanf("%lf", &delta_x);
	
	funkca = exp(-a)-c;
	funkcb = exp(-b)-c;
	
	if(funkca*funkcb > 0)
	{
		printf("Intervala [%lf: %lf] exp(-x) = %lf funkcijai.", a, b, c);
		printf(" Saknu nav\n");
		return 0;
	}
	
	while((b-a) > delta_x)
	{
		
		k++;
		x = (a+b)/2;
		
		if(funkca*(exp(-x)-c) > 0)
		{
			a = x;
		}
		else
		{
			b = x;
		}
		printf("%d iteracija: exp(-%lf) = %lf\t", k, a, exp(-a));
		
		printf("exp(-%lf) = %lf\t", x, exp(-x));
		printf("exp(-%lf) = %lf\n", b, exp(-b));
	}
	
	printf("Sakne atrodas pie x=%lf, jo exp(-x) ir %lf\n", x, exp(-x));
	return 0; 
	
}
