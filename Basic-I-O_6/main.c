/*English commentary: This program takes the area of a room and calculates the cost of acquiring a carpet including the service fee  
Odanýn metrekaresini girdi olarak alan ve halýcýya ödenmesi gereken toplam tutarý hesaplayan bir C programý*/
#include <stdio.h>
#define HMK 35//Halýnýn metrekare fiyatý-TL cinsinden
#define SF 100//Hali döþeme ücreti
int main(void) {
	float mk=0.0;//mk=square meter of the room-halý ile döþenmesi istenen odanýn metrekaresi
	float c=0.0;//Total cost-Odenmesi gereken ucret
	printf("Enter the square meter of the room-Salonun metrekaresini giriniz: ");
	scanf("%f",&mk);
	c=(HMK*mk)+SF;
	printf("Total cost-Odenmesi gereken ucret: %.2f",c);
	return 0;
}
