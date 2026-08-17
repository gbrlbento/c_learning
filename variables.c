#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int age = 25;
    float gpa = 3.5;
    double pi = 3.141592653589;
    char grade = 'A';
    char name[] = "Gabriel";
    bool isApproved = true;

    printf("Your age is %d\n", age);
    printf("Your gpa is %f\n", gpa);
    printf("The value of pi is %lf\n", pi);
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);
    
    if(isApproved) {
        printf("You are approved!\n");
    }
    else {
        printf("You are not approved!\n");
    }

    return 0;

}