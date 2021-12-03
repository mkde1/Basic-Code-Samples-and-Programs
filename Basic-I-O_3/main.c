/* English: This program takes a real number from the user and prints whole and decimal part of a number separately
Turkish: Kullanýcýdan bir reel sayý alan ve bu reel
sayýnýn tam ve ondalýk kýsmlarýný bularak ekranda gösteren program*/
#include <stdio.h>
int main() {
	float sayi=0.0;//Tam ve ondalýk kýsmýnýn ayrýlmasý istenen sayý
	printf("Please enter a real number/Lutfen bir reel sayi giriniz:");//Demanding a real number, Kullanýcýdan sayý talep edilir
	scanf("%f",&sayi);//User enters a real number , Kullanýcý sayýyý programa girer
	printf("Whole Part (Tam kisim):%d\nDecimal Part(Ondalik kisim):%f",((int)sayi),(sayi-((int)sayi)));//2 ayrý satýrda, programa girilen 
	//sayýnýn tam ve ondalýk kýsýmlarý gösterilir. 
	return 0;
}
