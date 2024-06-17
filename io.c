#include<stdio.h>

int main () {
    
    char name[20]; // for taking variable size, [20] = means that each alpha taking 1 space so in this format use have space for taking 20 alpha.
    printf("Enter your name : "); // show what you can input.
    scanf("%s", name); // taking input from users !
    printf("your name is : %s", name); // output the given data !

    return 0;
}