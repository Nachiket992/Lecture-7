#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    
    printf("Find the 'Minimum' value form the given three value.\n\n");
    printf("Enter the Number 1:- ");
    scanf("%d", &num1);
    printf("\nEnter the number 2:- ");
    scanf("%d", &num2);
    printf("\nEnter the number 3:- ");
    scanf("%d", &num3);
    if(num1 < num2) {
        if(num1 < num3) {
            printf("\nThe 'Minimum' value is 'Number 1:- %d'.\n\n", num1);
        }
        else {
            printf("The 'Minimum' value is 'Number 3:- %d.\n\n", num3);
        }
    }
    else {
        if(num2 < num3) {
            printf("\nThe 'Minimum' value is 'Number 2 :- %d.\n\n", num2);
        }
        else {
            printf("\nThe 'Minimum' value is 'Number 3:- %d.\n\n", num3);
        }
    }
    printf("Thank you.");

    return 0;
}