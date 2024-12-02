#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main() {
	struct Student st[2];
	
	strcpy(st[0].name, "Stang");
	st[0].age = 16;
	st[0].grade = 3.95;
	
	strcpy(st[1].name,"Boss");
	st[1].age = 15;
	st[1].grade = 3.86;

for (int i = 0; i < 2; i++) {
	printf("Student %d\n", i + 1);
	printf("Name: %s\n",st[i].name);
	printf("Age: %d\n",st[i].age);
	printf("Grade: %.2f\n",st[i].grade);
	printf("\n");
}
	return 0;
}