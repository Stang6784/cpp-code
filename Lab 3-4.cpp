#include <stdio.h>
#include <string.h>

void ac(void);
void square(int W, int L);
float circle(int r);

main() {
	st:
	int r;
    //ac();
    //square(5, 20);
    //square(50, 100);
    printf("Enter Radius: "); scanf("%d", &r);
    printf("Circle %.3f\n", circle(r));
    printf("-----------------------\n");
    goto st;
}

void ac(void) {
    printf("Hello World\n");
}

void square(int W, int L) {
    int ANS = W * L;
    printf("Answer = %d\n", ANS);
}

float circle(int r){
	float c = 3.141592653*r*r;
	return c;
}
