
#include <stdio.h>

int main(void)
{
    //hi
    char val;
    printf("Enter 'y' and press enter if you know how to use Git!\n");
    scanf(" %c", &val);

    if(val == 'y'){
        printf("You know how to use Git!");
    }

    else(
        printf("Look at the modules and try this test again another time!");
    )
    printf("\n");

    return 0;
}