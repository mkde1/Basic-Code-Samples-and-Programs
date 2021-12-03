/*English: Takes the travelled road in terms of miles and converts it to kilometers
Bir arabanýn gittiði yolu mil cinsinden girdi olarak alan ve bunu kilometreye çeviren bir C programý*/
#include <stdio.h>
int main(void) {
	float ym=0.0,yk=0.0;//ym=miles/mil cinsinden yol uzunluðu, yk=kilometers/kilometre cinsinden yol uzunluðu
	printf("Miles travelled-Arabanin gittigi yol(mil): ");
	scanf("%f",&ym);
	printf("Vehicle travelled %.5f km - Araba %.5f km. yol gitmistir",(ym*1.609344));
	return 0;
}
