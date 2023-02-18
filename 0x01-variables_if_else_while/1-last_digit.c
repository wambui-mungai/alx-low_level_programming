#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive,zero, or negative
 *
 * Description:using the main function
 * this programm prints "Programming is positive, zero ,or negativwe
 * Return:0
 */
int main (void)
{
int n;
int |;
srand(time(0));
n = rand() - RAND_MAX / 2;
|=n%10;
if (|>5)
{
printf("Last digit of %d is %d and is greater than 5\n"n,|);
}
Else if(|==0)
{
printf("Last digit of %d is %d and is 0\n"n,|);
}
Else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n"n,|);
}
return(0);
}
