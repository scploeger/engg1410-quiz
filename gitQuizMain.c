// TO DO: Add an "else" condition after line 12 which prints another message if the user does not enter "y"
#include <stdio.h>

int main(void)
{
    char val;
    printf("Enter 'y' and press enter if you know how to use Git!\n");
    scanf(" %c", &val);

    if(val == 'y'){
        printf("You know how to use Git!");
    }
    else if (val == 'n'){
        printf("You need to start working on your Git skills!");
    }
    else{
        printf("Invalid answer!")
    }

    printf("\n");

    return 0;
}