/*English: Takes the hours spent on the road between Istanbul and Ankara then calculates the average speed of the vehicle
Bir arabanýn Ankara'dan Ýstanbul'a varýþ zamanýný saat cinsinden girdi olarak alan
ve arabanýn ortalama hýzýný hesaplayan bir C programý*/
#include <stdio.h>
#define U 453//Distance between Ankara and Istanbul in kilometers - Ankara-Ýstanbul arasý uzaklýk(km cinsinden)
int main(void) {
	float s=0.0,oH=0.0;//s= spent hours-varýþ zamaný, oH=average speed (km/hour) - ortalama hýz (km/saat)
	printf("Time spent between Ankara-Istanbul (hours)  - Ankara-Ýstanbul varis zamani(saat): ");
	scanf("%f",&s);
	oH=U/s;
	printf("Vehicle's average speed - Arabanin ortalama hizi: %.4f",oH);
	return 0;
}
