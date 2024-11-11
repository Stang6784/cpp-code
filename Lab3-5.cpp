#include <stdio.h>

void sum(int col, int aff, int mid, int final);
void grade(int score);

int main(void){
	int col, aff, mid, final;
	printf("Enter you collect score: ");
	scanf("%d", &col);
	printf("Enter you affective score: ");
	scanf("%d", &aff);
	printf("Enter you midterm score: ");
	scanf("%d", &mid);
	printf("Enter you collect score: ");
	scanf("%d", &final);
	sum(col, aff, mid, final);
	return 0;
}

void sum(int col, int aff, int mid, int final){
	int score=col+aff+mid+final;
	grade(score);
}

void grade(int score){       
	if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
}          
                            
           
                                           