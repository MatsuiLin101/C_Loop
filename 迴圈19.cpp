#include <math.h>
#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,x,y,z;
  double ans,ansx,ansy,ansz;
  cout<<"祘Α100-999い┮Τ计\n";
  cout<<"计琌计ㄤ计ミよ㎝单赣计\n";
  cout<<"ㄒ:153琌计153=1Ωよ+5Ωよ+3Ωよ\n";
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
                 cout<<a<<"琌计\n";}}           
  system("PAUSE");
  return 0;
}
