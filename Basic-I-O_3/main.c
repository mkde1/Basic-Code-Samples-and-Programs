/* English: This program takes a real number from the user and prints whole and decimal part of a number separately
Turkish: Kullan�c�dan bir reel say� alan ve bu reel
say�n�n tam ve ondal�k k�smlar�n� bularak ekranda g�steren program*/
#include <stdio.h>
int main() {
	float sayi=0.0;//Tam ve ondal�k k�sm�n�n ayr�lmas� istenen say�
	printf("Please enter a real number/Lutfen bir reel sayi giriniz:");//Demanding a real number, Kullan�c�dan say� talep edilir
	scanf("%f",&sayi);//User enters a real number , Kullan�c� say�y� programa girer
	printf("Whole Part (Tam kisim):%d\nDecimal Part(Ondalik kisim):%f",((int)sayi),(sayi-((int)sayi)));//2 ayr� sat�rda, programa girilen 
	//say�n�n tam ve ondal�k k�s�mlar� g�sterilir. 
	return 0;
}
