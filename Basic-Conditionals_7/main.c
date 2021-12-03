/* English:  This program takes the total cost of the transaction then calculates the discount. Prints the grand total after discount.

Discount rates per transaction

Cost								Discount Rate
0-100 $								%4
101-205 $							upto 100$ %5
									rest %7
251 and above						upto 100$ %6									
									100-250$ %8
									above 250$ %10 

Bir ma�aza m��terilerine yapt�klar� al��veri� tutar� �zerinden indirim yapmaktad�r. Bu ma�azan�n indirim
oranlar� a�a��daki gibidir.

Yap�lan al��veri� tutar�			�ndirim oran�
0-100 TL							%4
101-250 TL							100 TL'ye kadar %5
									100 TL'nin �st� i�in %7
251-�st� TL							100 Tl'ye kadar %6,
									100 TL'den 250 TL'ye kadar
									olan k�s�m i�in %8,
									250 TL'nin �st� i�in %10
M��terinin yapm�� oldu�u al��veri� tutat�r�n� girdi olarak alan ve indirimden sonra m��terinin �demesi gereken
miktar� hesaplay�p ekranda g�steren bir C program�									
*/
#include <stdio.h>
int main(void) {
	float tutar=0.0;//Total
	float indirim=0.0;//Discount
	printf("Please enter the total - Lutfen tutari giriniz: ");
	scanf("%f",&tutar);
	if(tutar<0){
		printf("Please enter a number bigger than zero - Lutfen 0'dan buyuk bir sayi giriniz.\n");
	}else{
		if(tutar<101)
			indirim=tutar*0.04;
		else if((101<=tutar) && (tutar<=250))
			indirim=100*0.05+(tutar-100)*0.07;
		else
			indirim=(100*0.06)+150*0.08+(tutar-250)*0.10;
	printf("Grand total - Odenmesi gereken miktar: %.2f\n",tutar-indirim);				
	}
	
	return 0;
}
