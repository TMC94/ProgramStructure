#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 55

/*Prototypes:*/
int addThree(int);
void showMessage();

int main()
{
    checkRange(101);
}

/* int main()
{

    int num = 1;

    num = addThree(num);

    printf("%d", num);



    return 0;
} */

int addThree(int x)
{
    return x = x + 3;
}

void showMessage()
{
    printf("Value is out of range!\n");
}

void checkRange(int enteredValue)
{
    if (enteredValue > MAX || enteredValue < MIN)
    {
        showMessage();
    }
}
