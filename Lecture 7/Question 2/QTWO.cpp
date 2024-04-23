#include<stdio.h>

int num1;
int num2;
int num3;
int num4;

int main() {
    printf("Find the maximumu value from given 3 values.\n\n");
    printf("Enter the number 1:- ");
    scanf("%d", &num1);
    printf("\nEnter the number 2:- ");
    scanf("%d", &num2);
    printf("\nEnter the number 3:- ");
    scanf("%d", &num3);
    printf("\nEnter the number 4:- ");
    scanf("%d", &num4);
    if(num1 > num2) {
        if(num1 > num3) {
            if(num1 > num4) {
                printf("\nThe maximum value is number 1:- %d.\n\n", num1);
            }
        }
    }
    else if(num2 > num3) {
        if(num2 > num4) {
            printf("\nThe maximum value is numbe2 :- %d.\n\n", num2);
        }
    }
    else if(num3 > num4) {
        printf("\nThe maximum value is number 3:- %d.\n\n", num3);
    }
    else {
        printf("\nThe maximum value is number 4:- %d.\n\n", num4);
    }
    printf("Thank you.");
    
    return 0;
}