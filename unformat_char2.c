#include <stdio.h>
int main()
{
    char a;
    printf("Enter a letter : \n ");
    a = getch();  // take input getch but user enter input not show by ---getch---
    printf("A letter is : ");
    putch(a); // print direct output by putch : used for print ' ---putch--- '
    return 0;
}