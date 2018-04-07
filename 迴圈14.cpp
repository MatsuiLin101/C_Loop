#include <math.h>
#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,b=10,r=0,x,y,z,n,t,s,m;
  double ans;
  cout<<"此程式可判斷一不多於5位的正整數是位數，並逆續打出各位數字\n";
  cout<<"請輸入一數:";
  cin>>a;
  m=a;
  if (m<=99999&&m>=1)
  {
                     while (m>=1)
                     {
                           r++;
                           m=m/b;}
                     cout<<"這是"<<r<<"位數\n";}
  else
  {
      cout<<"輸入錯誤\n";
      system("PAUSE");
      return 0;}
  ans=pow(10,5-r);
  x=a/10000;
  y=(a-x*10000)/1000;
  z=(a-x*10000-y*1000)/100;
  n=(a-x*10000-y*1000-z*100)/10;
  t=(a-x*10000-y*1000-z*100-n*10);
  s=(t*10000+n*1000+z*100+y*10+x)/ans;  
  cout<<"結果為"<<s<<"\n";                              
  system("PAUSE");
  return 0;
}
