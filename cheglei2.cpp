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
       if ( a[i] >= 'a' && a[i] <= 'z' )  //�P�_�쥻��J���O�_�O�p�g�^��r��
         a[i] -= 32 ;
    }
    for( i = 0 ; i < 10 ; i++)
    {
       printf ( "%c" , a[i] ) ;
    }
    printf ( "\n" ) ;
    system("PAUSE");

}
