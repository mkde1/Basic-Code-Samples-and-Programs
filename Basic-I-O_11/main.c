/*English: Takes tree figures a,b, and c then creates a new number as "a" at hundreds digit, "b" at tens digit and "c" at units digit, abc
Tek haneli üç sayý olan a,b ve c'yi girdi olarak alan ve yüzler basamaðý a,onlar basamaðý b
ve birler basamaðý c olan n sayýsýný(n=100*a+10*b+c) hesaplayan bir C programý*/
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
