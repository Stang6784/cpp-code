#include <stdio.h>

main(){
	int menu;
	printf("-----------------Food menu-----------------\n");
	printf("1. Pepsi \t 20 bath \n");
	printf("2. Fanta \t 15 bath \n");
	printf("3. Singcha \t 65 bath \n");
	printf("4. Heineken \t 75 bath \n");
	printf("5. White Wine \t 350 bath \n");
	printf("--------------------------------------------\n");
	printf("Please Select Menu :");
	scanf("%d", &menu);
	switch (menu) {
		case 1:
			printf("Pepsi\n");
			break;
		case 2:
			printf("Fanta\n");
			break;
		case 3:
			printf("Singcha\n");
			break;
		case 4:
			printf("Heineken\n");
			break;
		case 5:
			printf("White Wine\n");
			break;
		default :
			printf("Please enter the correct one");
			break;
	}
}