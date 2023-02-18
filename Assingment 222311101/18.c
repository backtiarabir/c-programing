#include <stdio.h>
#include <conio.h>
int main ()
{
    char upr, lwr; // declare variables
    int ascii;

    // convert in lower case
    printf (" Enter the Upper Case Character: ");
    scanf (" %c", &upr);
    ascii = upr + 32;
    printf (" %c character in Lower case is: %c", upr, ascii);

    // convert in upper case
    printf (" \n Enter the Lower Case Character: ");
    scanf (" %c", &lwr);
    ascii = lwr - 32;
    printf (" %c character in the Upper case is: %c", lwr, ascii);

    return 0;
}
