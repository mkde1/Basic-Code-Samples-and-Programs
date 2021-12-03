/*English: User enters a,b, and c coefficients, program finds the roots of ax^2+bx+c=0 second degree polynomial function and prints the roots on the screen

Ýkinci dereceden ax^2+bx+c=0 polinom denkleminin reel köklerini bulan bir C programý yazýnýz.
Denklemin köklerini x1,2=(-b+-sqrt(b^2-4ac)/2a) formülünden yararlanarak bulabiliriz.Eðer, b^2-4ac>0 ise denklemin iki
eþit kökü vardýr. Eðer b^2-4ac<0 ise denklemin kökü yoktur. Yazacaðnýz programda polinomun katsayýlarý(a,b,c)
kullanýcý tarafýndan girilmeli ve "iki farklý kök","iki eþit kök" veya "kökü yoktur" mesajý yazdýrýlmalýdýr.
Örnek çýktý:
Denklemin katsayilarini giriniz: 1.0 -2.0 1.0
Iki esit kok:1.00
 */
#include <stdio.h>
#include <math.h>
int main(void) {
	float a=0.0,b=0.0,c=0.0,x1=0.0,x2=0.0;
	printf("Please enter the coefficients - Denklemin katsayilarini giriniz: ");
	scanf("%f %f %f",&a,&b,&c);
	if((b*b-4*a*c)<0){
		printf("There is no root - Koku yoktur\n");
	}else{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(x1==x2){
			printf("Roots are same - iki esit kok: %.2f\n",x1);
		}else{
			printf("Two different roots - iki farkli kok: %.2f %.2f\n",x1,x2);
		}
	}
	return 0;
}
