/*English: Takes the travelled road in terms of miles and converts it to kilometers
Bir araban�n gitti�i yolu mil cinsinden girdi olarak alan ve bunu kilometreye �eviren bir C program�*/
#include <stdio.h>
int main(void) {
	float ym=0.0,yk=0.0;//ym=miles/mil cinsinden yol uzunlu�u, yk=kilometers/kilometre cinsinden yol uzunlu�u
	printf("Miles travelled-Arabanin gittigi yol(mil): ");
	scanf("%f",&ym);
	printf("Vehicle travelled %.5f km - Araba %.5f km. yol gitmistir",(ym*1.609344));
	return 0;
}
