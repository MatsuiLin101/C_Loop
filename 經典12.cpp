#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i=1,j,sum,z=0;
  cout<<"���{���i�C�L�X1000�H�������ơA�p�G�@�ӼƵ���ӼƦ]�l���M�A���ƴN�O���ơC�Ҧp6=1+2+3�C\n";
  cout<<"1000�������Ʀ�:\n";
  while(z<=5)
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
     z++;
     }
    if (z>=3&&z<=5)
    {
     printf("%d\n",i);
     }
     i++;
     }
  system("PAUSE");
  return 0;
}
