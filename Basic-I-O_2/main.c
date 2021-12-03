/*This program will print the image below with a character that you would like to use
Aþaðýdaki þekli ekrana yazdýran bir program
  *
*   *
*   *
*   *
  *
*/
#include <stdio.h>
int main(void) {
	char ch='*';//You can change the * character.- Ekrana yazdýrýlan karakteri daha sonra deðiþtirebilmek için tanýmlanan deðiþkene '*' karakteri atanýr.
	printf("%3c\n",ch);
	printf("%-3c%2c\n",ch,ch);
	printf("%-3c%2c\n",ch,ch);
	printf("%-3c%2c\n",ch,ch);
	printf("%3c",ch);	
	return 0;
}
