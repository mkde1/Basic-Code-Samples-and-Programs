/*English: Takes four real numbers from the user then calculates the arithmetic average of them
Kullan�c�dan d�rt reel say� alan ve bunlar�n aritmetik ortalamas�n� bulan C program�*/
#include <stdio.h>
int main(void) {
	float f1=0.0,f2=0.0,f3=0.0,f4=0.0;//f1:1.reel sayi,f2:2.reel sayi,f3:3.reel sayi,f4:4.reel sayi
	printf("Enter four real numbers- Dort reel sayi giriniz: ");
	scanf("%f %f %f %f",&f1,&f2,&f3,&f4);
	printf("Average - Ortalama: %.4f",(f1+f2+f3+f4)/4);
	return 0;
}
