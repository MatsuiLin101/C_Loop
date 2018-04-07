#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i=1,j,sum,z=0;
  cout<<"祘Α1000ずЧ计狦计单赣计ぇ㎝计碞琌Ч计ㄒ6=1+2+3\n";
  cout<<"1000ずЧ计Τ:\n";
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
