#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x,sum=1;
  cout<<"此程式可計算一組數字的乘積，程式會在讀入0時停止\n";
  cout<<"請輸入一數:";
  cin>>x;
  while (x!=0)
  {
   sum=sum*x;
   cout<<"目前的乘積:"<<sum<<"\n";
   cout<<"請輸入一數:";
   cin>>x;
  }
  cout<<"輸入了0程式結束\n";
  system("PAUSE");
  return 0;
}
