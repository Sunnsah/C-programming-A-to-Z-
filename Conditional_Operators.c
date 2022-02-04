#include <stdio.h>
int main()
{
    int age;

    printf("Enter Your Age :  ");
    scanf("%d",&age);

    (age >= 18)? (printf("%d ,You are Eligiable for Voting \n",age)): (printf("You are Not Eligable for Voting Write Now at age : %d  \n",age));
    if (age<=18);
    printf("Come again After the complete of 18 ");

    return 0;
}