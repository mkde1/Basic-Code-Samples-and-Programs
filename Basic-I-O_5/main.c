/*English: This program takes the user enrty as the radius of a circle then calculates the circle's area and prints it.
Bir dairenin yar��ap�n� metre cinsinden girdi olarak alan ve bu dairenin alan�n� hesaplay�p ekranda
g�steren bir C program�*/
#include <stdio.h>
#define PI 3.14159
int main(void) {
	float r=0.0,a=0.0;//r=radius-yaricap(metre cinsinden), a=area-alan(metrekare cinsinden)
	printf("Please enter the radius-Dairenin yaricapini giriniz: ");
	scanf("%f",&r);
	a=PI*r*r;
	printf("Circle's area-Dairenin alani: %.3f",a);
	return 0;
}
