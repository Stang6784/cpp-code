#include <stdio.h>

main(void) {
    float height_cm, height_m, weight, BMI;
    
    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);
    
    height_m = height_cm / 100.0;
    
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    
    BMI = weight / (height_m * height_m);
    printf("Your BMI is %.2f\n", BMI);
    
    if (BMI < 18.5) {
        printf("You are underweight.\n");
    } else if (BMI >= 18.5 && BMI < 24.9) {
        printf("You have a normal weight.\n");
    } else if (BMI >= 25 && BMI < 29.9) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
	}
}
