#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n , high[30] , i , sum=0; 
    printf( "�п�J�ǥͤH��" );
    scanf( "%d" , &n );
    for( i = 0 ; i < n ; i++)
    {
       scanf ( "%d" , &high[i]);  //�̧ǿ�J�C��P�Ǫ�����
       sum += high[i];  //�C��J�@�ӴN�[�`��sum�̭�
    }
    printf( "%d\n" , sum );
    system("PAUSE");
}
