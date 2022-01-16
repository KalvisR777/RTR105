/Šī programma atrod izvēlētās x vērtības funkcijas vērtību funkcijas definīcijas apgabalā.
Tiek izmantotas teilora rindas, palielinot teilora rindu skaitu, funkcijas vērtība it tubāka orig. pētāmajai funkcijai ( y(x)=exp(-x) ) /

		/    Grafiks šim uzdevumam ir pieejams "Laboratorijas ~Darbi 1 - 5" folderī!!    /

#include <stdio.h>
#include <math.h>

long double summa_e (double x, int z)
{
	
	x = -x;
	double a, S;
	int k = 0;
	
	a = 1;
	S = a;
	
	while(k < z)
	{
		k++;
		a = (a*x)/(k*(1.0));
		S = S+a;		
	}
	return S;
}

int main(void)
{
	
	double x, y, yy;
	printf("funkcija ir defineta visiem realiem skaitliem\n\n");
	printf("Ievadi vertibu: ");
	scanf("%lf", &x);

	printf("%lf\n", x);
	y = exp(-x);
	printf("\nexp(-%lf) = %lf\n\n", x, y);
	yy = summa_e(x, 1000);
	
	double a1000 = summa_e(x, 1000)-summa_e(x, 999);
	double a999 = summa_e(x, 999)-summa_e(x, 998);
	
	printf("funkcijas vertiba caur summu: %.2f\n", yy);
	printf("a999 = %lf\n", a999);
	printf("a1000 = %lf\n\n\n", a1000);
	
	
	printf("               1000                      \n");
	printf("              _____                     \n");
	printf("              \\           k     k          \n");
	printf("               \\      (-1) *%.2f            \n", x);
	printf(" exp(-%.2f) =   >    _____________    \n", x);
	printf("               /                \n");
	printf("              /____       k!                 \n");
	printf("               k=0                      \n\n\n");
	
	printf("                           ");
	printf("-%.2f\n",x);
	printf(" rekurences reizinatajs: __________\n");
	printf("\n");
	printf("                             k\n");
	
}
