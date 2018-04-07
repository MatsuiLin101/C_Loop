#include <stdio.h>
#include <stdlib.h>
int main()
{
     int i ;
    char a[10];
    for( i = 0 ; i < 10 ; i++)
    {
       scanf ( "%c" , &a[i]); 
    }
    for( i = 0 ; i < 10 ; i++)
    {
       if ( a[i] >= 'a' && a[i] <= 'z' )  //判斷原本輸入的是否是小寫英文字母
         a[i] -= 32 ;
    }
    for( i = 0 ; i < 10 ; i++)
    {
       printf ( "%c" , a[i] ) ;
    }
    printf ( "\n" ) ;
    system("PAUSE");

}
