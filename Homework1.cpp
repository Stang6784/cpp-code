#include <stdio.h>
#define PI 3.141592653
main(void){
	float area, radius;
	printf("Enter your radius");
	scanf("%f", &radius);
	area = PI*radius*radius;
	printf("Your area is %.3f", area);	
}