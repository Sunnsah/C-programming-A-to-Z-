#include <stdio.h>
int main()
{
    char a;
    printf("Enter a letter : ");
    a = getchar();  // Show us Enter Letter and getchar work like scanf
    printf("A letter is : ");
    putchar(a); // Print our result in putchar
    return 0;
}