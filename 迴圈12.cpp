#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x,y,z,f;
  cout<<"此程式可將三個整數由小到大輸出\n";
  cout<<"請輸入第一個數:";
  cin>>x;
  cout<<"請輸入第二個數:";
  cin>>y;
  cout<<"請輸入第三個數:";
  cin>>z;
  
  if(x>y)
  {f=x;
   x=y;
   y=f;}
  if(x>z)
  {f=x;
   x=z;
   z=f;}
  if(y>z)
  {f=y;
   y=z;
   z=f;}  

  printf("最小的數:%d\n不大不小的數:%d\n最大的數:%d\n",x,y,z);                                    
    
  system("PAUSE");
  return 0;
}
