#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x,y=1;
    cout<<"此程式可讀取7個數(1-50)的整數值，每讀取一個值，程式打印出該值個數的*";
    while (y<=7)
    {
          cout<<"\n請輸入x=";
          cin>>x;
          y++;
          if (x>=1&&x<=50)
          {
                          while (x>0)
                          {
                                cout<<"*";
                                x--;
                                }
                                }
          else
          {
              cout<<"輸入錯誤，請重新輸入!\n";
              y--;
              }
              }
  cout<<"\n程式結束\n";                                         
  system("PAUSE");
  return 0;
}
