#include <math.h>
#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,b=10,r=0,x,y,z,n,t,s,m;
  double ans;
  cout<<"���{���i�P�_�@���h��5�쪺����ƬO��ơA�ðf�򥴥X�U��Ʀr\n";
  cout<<"�п�J�@��:";
  cin>>a;
  m=a;
  if (m<=99999&&m>=1)
  {
                     while (m>=1)
                     {
                           r++;
                           m=m/b;}
                     cout<<"�o�O"<<r<<"���\n";}
  else
  {
      cout<<"��J���~\n";
      system("PAUSE");
      return 0;}
  ans=pow(10,5-r);
  x=a/10000;
  y=(a-x*10000)/1000;
  z=(a-x*10000-y*1000)/100;
  n=(a-x*10000-y*1000-z*100)/10;
  t=(a-x*10000-y*1000-z*100-n*10);
  s=(t*10000+n*1000+z*100+y*10+x)/ans;  
  cout<<"���G��"<<s<<"\n";                              
  system("PAUSE");
  return 0;
}
