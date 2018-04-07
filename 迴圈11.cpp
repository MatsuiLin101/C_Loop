#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x,y,z,n,sum=0;
    cout<<"請輸入年:";
    cin>>x;
    cout<<"請輸入月份:";
    cin>>y;
    cout<<"請輸入日期";
    cin>>z;
    n=y;    
    if (x%4==0&&y>2&&y<=12)
    {z=z+1;}
    if (y==2)
    {sum=sum+31;}
    if (y>2&&y<8)
    {sum=sum+59;}
    if (y>7)
    {sum=sum+181;}
    while (y>3&&y<=7)
    {
                  if (y%2==1)
                  {
                        sum=sum+30;
                        y--;
                        }
                        else
                        {
                            sum=sum+31;
                            y--;
                            }
                            }
    while (y>7&&y<=12)
    {
          if (y%2==0)
          {
                     sum=sum+30;
                     y--;
                     }
                     else
                     {
                         sum=sum+31;
                         y--;
                         }
                         }
    if ((y>12)||(y==1&&z>31)||(y==2&&z>28))
    {cout<<"輸入錯誤\n";
     system("PAUSE");
     return 0;}
    if (y>2&&y<=7)
    {if (y%2!=0&&z>31)
     {cout<<"輸入錯誤\n";
      system("PAUSE");
      return 0;}
     if (y%2==0&&z>30) 
     {cout<<"輸入錯誤\n";
      system("PAUSE");
      return 0;}}
    if (y>7&&y<=12)  
    {if (y%2==0&&z>31)
     {cout<<"輸入錯誤\n";
      system("PAUSE");
      return 0;}
     if (y%2!=0&&z>30) 
     {cout<<"輸入錯誤\n";
      system("PAUSE");
      return 0;}}
  cout<<x<<"年"<<n<<"月"<<z<<"日是"<<x<<"年的第"<<sum+z<<"天"<<"\n";                                                                                     
  system("PAUSE");
  return 0;
}      
          
