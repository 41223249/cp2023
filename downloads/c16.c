/* ====================
switch - case 的範例 4.
印出 odd, 或 even.
==================== */
#include <stdio.h>
void main()
{
int i;
printf( "Input a number:" );
scanf( "%d", &i );
i = i % 2;
switch( i )
{
case 0:
printf("Even!");
break;
case 1:
printf("Odd!");
break;
}
}
