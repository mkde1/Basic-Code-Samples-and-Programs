/*This program will print the image below with a character that you would like to use
A�a��daki �ekli ekrana yazd�ran bir program
  *
*   *
*   *
*   *
  *
*/
#include <stdio.h>
int main(void) {
	char ch='*';//You can change the * character.- Ekrana yazd�r�lan karakteri daha sonra de�i�tirebilmek i�in tan�mlanan de�i�kene '*' karakteri atan�r.
	printf("%3c\n",ch);
	printf("%-3c%2c\n",ch,ch);
	printf("%-3c%2c\n",ch,ch);
	printf("%-3c%2c\n",ch,ch);
	printf("%3c",ch);	
	return 0;
}
