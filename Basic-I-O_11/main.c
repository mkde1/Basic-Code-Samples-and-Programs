/*English: Takes tree figures a,b, and c then creates a new number as "a" at hundreds digit, "b" at tens digit and "c" at units digit, abc
Tek haneli �� say� olan a,b ve c'yi girdi olarak alan ve y�zler basama�� a,onlar basama�� b
ve birler basama�� c olan n say�s�n�(n=100*a+10*b+c) hesaplayan bir C program�*/
#include <stdio.h>
int main(void) {
	int a=0,b=0,c=0,n=0;
	printf("Hundreds digit - Yuzler basamagi: ");
	scanf("%d",&a);
	printf("Tens digit - Onlar basamagi: ");
	scanf("%d",&b);
	printf("Units digit - Birler basamagi: ");
	scanf("%d",&c);
	n=100*a+b*10+c;
	printf("new 'n' number is: %d - n sayisi: %d",n);
	return 0;
}
