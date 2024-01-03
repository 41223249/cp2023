/* ====================
 if 與 else 的範例 2.
==================== */
#include <stdio.h>
void main()
{
int i; 
printf( "input an integer:" );
 scanf( "%d", &i );
if( i < 100 )
{
printf( "i < 100" );
}
else
{
if( (i >= 100) && (i < 200) )
{
printf( "i >= 100 and i < 200'" );
}
else
{
printf("i >= 200");
}
}
}
