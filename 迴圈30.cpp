#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,x,y,z,n,t;
  cout<<"祘Α耞5计琌ゅ计ㄒ12321睦ゅ计籔窾籔\n";
  cout<<"叫块5计:";
  cin>>a;
  x=a/10000;
  y=(a-x*10000)/1000;
  z=(a-x*10000-y*1000)/100;
  n=(a-x*10000-y*1000-z*100)/10;
  t=(a-x*10000-y*1000-z*100-n*10);
  if(a<=99999&&a>=10000)
 {if(x==t&&y==n)
  {cout<<a<<"琌ゅ计\n";}
  else
  {cout<<a<<"ぃ琌ゅ计\n";}}
  if(a>99999||a<10000)
  {cout<<"块岿粇\n";}

  system("PAUSE");
  return 0;
}
