#include <stdio.h>
#include <string.h>

int main(void) {
	st:
    char usc[50] = "admin", passc[] = "1234";
    char usf[50], passf[50];
    printf("Enter Username: ");
    scanf("%s", usf);
    printf("Enter Password: ");
    scanf("%s", passf); 
    if (strcmp(usc, usf) == 0 && strcmp(passc, passf) == 0) {
        printf("Correct!\n");
    } else {
        printf("Error\n");
        goto st;
    }
    
    return (0);
}
