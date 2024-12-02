#include <stdio.h>
#include <string.h>

struct Food{
	char dish[50];
	int price;
};
	
int main(){
	int menu;
	printf("-----------------Food menu-----------------\n");
	printf("1. Pepsi \t 20 bath \n");
 	printf("2. Fanta \t 15 bath \n");
 	printf("3. Singcha \t 65 bath \n");
	printf("4. Heineken \t 75 bath \n");
	printf("5. White Wine \t 350 bath \n");
	printf("--------------------------------------------\n");
	for (int i = 0; i < 50; i++){
		printf("Please Select Menu %d:", i + 1);
		scanf("%s",d[i].dish);
	}return 0;
}