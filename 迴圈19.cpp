#include <math.h>
#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,x,y,z;
  double ans,ansx,ansy,ansz;
  cout<<"���{���i�C�X100-999���Ҧ������P��ơC\n";
  cout<<"���P��ƬO�@�ӤT��ơA��U��Ʀr�ߤ�M����ӼơC\n";
  cout<<"�Ҧp:153�O�@�Ӥ��P��ơA�]��153=1���T����+5���T����+3���T����C\n";
  for (a=100;a>=100&&a<=999;a++)
  {
      x=a/100;
      y=(a-x*100)/10;
      z=(a-x*100-y*10);
      ansx=pow(x,3);
      ansy=pow(y,3);
      ansz=pow(z,3);
      ans=ansx+ansy+ansz;
      if (ans==a)
      {
                 cout<<a<<"�O���P���\n";}}           
  system("PAUSE");
  return 0;
}
