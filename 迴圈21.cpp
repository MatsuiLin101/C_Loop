#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x;
  cout<<"���{���i�N���Z>=90�����P�ǥ�A��ܡA60-89����B��ܡA60���H�U��C��ܡC\n";
  cout<<"�п�J�n�P�_����:";
  cin>>x;
  if (x<=100&&x>=0)
  {if (x>=90)
   {cout<<"���C��A\n";}
   else if (x<=89&&x>=60)
        {cout<<"���C��B\n";}
        else
        {cout<<"���C��C\n";}}  
  else
  {cout<<"��J���~\n";}
  system("PAUSE");
  return 0;
}
