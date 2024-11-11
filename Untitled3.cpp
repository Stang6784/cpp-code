#include <stdio.h>
#define PI 3.141592653
void pi(void);

int main(void){
	printf("Hello World\n ");
	printf("Patarakarn Homkhajorn\n");
	printf("www.cdti.ac.th\n");
	pi();
	return 0;
}

void pi(void){
	printf("PI = %.3f", PI);
}