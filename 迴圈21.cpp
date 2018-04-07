#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x;
  cout<<"此程式可將成績>=90分的同學用A表示，60-89分用B表示，60分以下用C表示。\n";
  cout<<"請輸入要判斷的數:";
  cin>>x;
  if (x<=100&&x>=0)
  {if (x>=90)
   {cout<<"分列為A\n";}
   else if (x<=89&&x>=60)
        {cout<<"分列為B\n";}
        else
        {cout<<"分列為C\n";}}  
  else
  {cout<<"輸入錯誤\n";}
  system("PAUSE");
  return 0;
}
