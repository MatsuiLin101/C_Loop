#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,x,y,z,n,t;
  cout<<"���{���i�P�_�@5��ƬO�_���^��ơC�Ҧp12321���^��ơA�Ӧ�P�U��ۦP�A�Q��P�d��ۦP�C\n";
  cout<<"�п�J�@5���:";
  cin>>a;
  x=a/10000;
  y=(a-x*10000)/1000;
  z=(a-x*10000-y*1000)/100;
  n=(a-x*10000-y*1000-z*100)/10;
  t=(a-x*10000-y*1000-z*100-n*10);
  if(a<=99999&&a>=10000)
 {if(x==t&&y==n)
  {cout<<a<<"�O�^���\n";}
  else
  {cout<<a<<"���O�^���\n";}}
  if(a>99999||a<10000)
  {cout<<"��J���~\n";}

  system("PAUSE");
  return 0;
}
