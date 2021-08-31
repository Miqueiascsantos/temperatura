#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int celsius=0;
	int fahrenheit=0;
	int r=0;
	
	
	printf(" Digite a temperatura em celsius: ");
	scanf("%i", &celsius);
	
	r= (9 * celsius + 160) / 5;
	
	printf("temperatura em fahrenheit: %i graus\n", r);
	
	system("pause");
	
	return 0;
}
