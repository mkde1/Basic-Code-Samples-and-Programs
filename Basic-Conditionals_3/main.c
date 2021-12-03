/*English: User enters exam notes three times and the program calculets letter grade of a student.
%20 of first exam, %30 of second exam, and %50 percent of final exam
Letter grade>= 90     ->A
90> Letter grade >=80 ->B
80> Letter grade >=70 ->C
70> Letter grade >=60 ->D
60> Letter grade      ->F


��retmen bir ��rencinin harf notunu hesaplarken, birinci aras�nav notunun 
y�zde 20'sini,ikinci ara s�nav notunun y�zde 30'unu ve final notunun y�zde 50'sini alarak a��rl�kl� bir not 
bulmaktad�r. Daha sonra bu a��rl�kl� nota g�re harf notunu a�a��daki aral�klara g�re 
belirlemektedir.
A��rl�kl� not>= 90     ->A
90> A��rl�kl� not >=80 ->B
80> A��rl�kl� not >=70 ->C
70> A��rl�kl� not >=60 ->D
60> A��rl�kl� not      ->F 
��rencinin s�nav notlar�n� (100 �zerinden) girdi olarak alan ve harf notunu hesaplayan bir C program� yaz�n�z */
#include <stdio.h>
int main(void) {
	int ara_sinav1=0;//first exam - ilk s�nav
	int ara_sinav2=0;//second exam - ikinci s�nav
	int final=0;// final exam - final s�nav�
	float ortalama=0.0;// average note - ortalama not
	char harfnotu;//letter grade
	printf("Please enter the first exam's note (0-100)- Lutfen ilk ara sinav notunu(0 ile 100 arasinda-0 ve 100 dahil) giriniz: ");
	scanf("%d",&ara_sinav1);
	printf("Please enter the second exam's note (0-100)- Lutfen ikinci ara sinav notunu(0 ile 100 arasinda-0 ve 100 dahil) giriniz: ");
	scanf("%d",&ara_sinav2);
	printf("Please enter the final exam's note (0-100)- Lutfen final sinav notunu(0 ile 100 arasinda-0 ve 100 dahil) giriniz: ");
	scanf("%d",&final);
	ortalama=0.2*ara_sinav1+0.3*ara_sinav2+0.5*final;
	printf("Average - Ortalama= %.1f\n",ortalama);
	if(ortalama>=60){
		if(ortalama>=70){
			if(ortalama>=80){
				if(ortalama>=90){
					harfnotu='A';
				}else{
					harfnotu='B';
				}
			}else{
				harfnotu='C';
			}
		}else{
			harfnotu='D';
		}
	}else{
		harfnotu='F';
	}
	printf("Letter grade - Harf notu= %c\n",harfnotu);
	return 0;
}
