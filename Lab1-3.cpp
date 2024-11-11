#include <stdio.h>

main(){
	int base,high;
	float area;
	printf("Enter base");
	scanf("%d", &base);
	printf("Enter high");
	scanf("%d", &high);
	area = 0.5*base*high;
	printf("The area of Triangle is %.2f", area);
}