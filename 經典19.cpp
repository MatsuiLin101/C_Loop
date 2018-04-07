#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i,j,f,sum,sum2,t1,t2;
  for(i=1;i<500;i++)
  {
   sum=0;
   sum2=0;
   t1=i;
   for(j=1;j<i;j++)
   {
    if (i%j==0)
    {
     sum=sum+j;
     }
     }
     if (sum!=i)
     {
      for(f=1;f<sum;f++)
      {
       if (sum%f==0)
       {
        sum2=sum2+f;
        }
        }
        }
        if (t1==sum2)
        {
         cout<<sum<<"©M"<<sum2<<"¬°friendly\n";
         }
         }
  system("PAUSE");
  return 0;
}
