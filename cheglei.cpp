#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n , high[30] , i , sum=0; 
    printf( "請輸入學生人數" );
    scanf( "%d" , &n );
    for( i = 0 ; i < n ; i++)
    {
       scanf ( "%d" , &high[i]);  //依序輸入每位同學的身高
       sum += high[i];  //每輸入一個就加總到sum裡面
    }
    printf( "%d\n" , sum );
    system("PAUSE");
}
