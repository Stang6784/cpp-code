#include <stdio.h>


int main() {
	int dec, Original_dec;
	int bin[100];
    int i=0, j;
	printf("Enter the number: ");
	scanf("%d", &dec);
	Original_dec = dec;
	do {
		bin[i] = dec % 2;
		dec /= 2;
		i++;
	}while(dec >0);
	printf("The binary is : ");
	for(j=i-1; j>=0; j--){
		printf("%d",bin[j]);
	}
	printf("\n");
	printf("The octal is: %o\n", Original_dec);
	printf("The hexadecimel is: %x\n", Original_dec);
	return 0;
}	