#include<stdio.h>
/**
 * main -prints  all single digit numbers of base 10 starting from 0
 * Description:using the main function
 * prints  all single digit numbers of base 10 starting from 0
 * return:0
 *
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
