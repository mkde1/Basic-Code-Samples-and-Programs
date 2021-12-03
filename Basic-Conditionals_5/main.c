/* English: Program takes four integers from the user. If the numbers are not ordered in any way, the program indicates that it is not sequential arrangement.

Kullanýcý tarafýndan girilen dört tamsayýnýn azalan sýrada veya artan sýrada olup
olmadýðýný belirleyecek bir C programý yazýnýz.Eðer sayýlar herhangi bir þekilde sýralý deðilse, program sayýlarýn 
sýralý olmadýðýný belirtmelidir.*/
#include <stdio.h>
int main(void) {
	int s1=0,s2=0,s3=0,s4=0;
	printf("Please enter four integers - Dort tam sayi giriniz: ");
	scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
	if((s1>=s2) && (s2>=s3) && (s3>=s4)){
		printf("Numbers in descending order - Azalan sirada sayilar.\n");
	}else if((s1<=s2) && (s2<=s3) && (s3<=s4)){
		printf("Numbers in ascending order - Artan sirada sayilar.\n");
	}else{
		printf("Numbers are not sequential - Sayilar sirali degil.\n");
	}
	return 0;
}
