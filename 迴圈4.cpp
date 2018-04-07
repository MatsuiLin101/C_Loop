#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x,y,z=2,t,n=0;
  cout<<"此程式可求s=a+aa+aaa+aaaa+aa...a的值，其中a是一個數字。例如2+22+222+2222+22222(此時共有5個位數相加)幾個位數相加請自行輸入\n";
  cout<<"請輸入數字a=";
  cin>>x;
  cout<<"請輸入位數=";
  cin>>y;
  t=x;
  if (y>=z)
  {   while (y>=z)
     {
           x=x*10+t;
           z++;
           n=n+x;
           }
  
  cout<<"s="<<n+t<<"\n";         }
  else 
  {
  cout<<"s="<<x<<"\n";
}         
  system("PAUSE");
  return 0;
}

