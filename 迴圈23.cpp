#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i,j,sum;
  cout<<"���{���i�C�L�X1000�H�������ơA�p�G�@�ӼƵ���ӼƦ]�l���M�A���ƴN�O���ơC�Ҧp6=1+2+3�C\n";
  cout<<"1000�������Ʀ�:\n";
  for(i=1;i<=1000;i++)
  {sum=0;
   for(j=1;j<i;j++)
   {
    if (i%j==0)
    {
     sum=sum+j;
     }
     }
    if (sum==i)
    {
     printf("%d\n",i);
     }
     }
  system("PAUSE");
  return 0;
}
