#include <stdio.h>
void hisobla(long long n, int *yig, int *soni, long long *teskari)
{
	if (n<0)
	    n=-n;
	*yig=0;
	*soni=0;
	*teskari=0;
	do{
	   int raqam = n %10;
	   *yig=*yig+raqam;
	   *soni=*soni+1;
	   *teskari=*teskari*10+raqam;
	   n=n/10;
	} while (n!=0);
}
int main(void)
{
	long long n;
	int yig, soni;
	long long teskari;
	printf("butun sonni kiriting: ");
	if (scanf("%lld", &n) !=1) {
	    printf("BUTUN SON KIRIT!\n");
	    return 1;
	}
	hisobla(n, &yig, &soni, &teskari);
	printf("yig'indi: %d\n", yig);
	printf("raqamlar soni: %d\n", soni);
	printf("teskari son: %lld\n", teskari);
	return 0;
}
