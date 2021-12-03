/*English commentary: This program takes the area of a room and calculates the cost of acquiring a carpet including the service fee  
Odan�n metrekaresini girdi olarak alan ve hal�c�ya �denmesi gereken toplam tutar� hesaplayan bir C program�*/
#include <stdio.h>
#define HMK 35//Hal�n�n metrekare fiyat�-TL cinsinden
#define SF 100//Hali d��eme �creti
int main(void) {
	float mk=0.0;//mk=square meter of the room-hal� ile d��enmesi istenen odan�n metrekaresi
	float c=0.0;//Total cost-Odenmesi gereken ucret
	printf("Enter the square meter of the room-Salonun metrekaresini giriniz: ");
	scanf("%f",&mk);
	c=(HMK*mk)+SF;
	printf("Total cost-Odenmesi gereken ucret: %.2f",c);
	return 0;
}
