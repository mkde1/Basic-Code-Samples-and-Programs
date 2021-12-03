/*English: Takes the hours spent on the road between Istanbul and Ankara then calculates the average speed of the vehicle
Bir araban�n Ankara'dan �stanbul'a var�� zaman�n� saat cinsinden girdi olarak alan
ve araban�n ortalama h�z�n� hesaplayan bir C program�*/
#include <stdio.h>
#define U 453//Distance between Ankara and Istanbul in kilometers - Ankara-�stanbul aras� uzakl�k(km cinsinden)
int main(void) {
	float s=0.0,oH=0.0;//s= spent hours-var�� zaman�, oH=average speed (km/hour) - ortalama h�z (km/saat)
	printf("Time spent between Ankara-Istanbul (hours)  - Ankara-�stanbul varis zamani(saat): ");
	scanf("%f",&s);
	oH=U/s;
	printf("Vehicle's average speed - Arabanin ortalama hizi: %.4f",oH);
	return 0;
}
