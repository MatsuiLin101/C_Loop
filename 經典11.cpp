#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x=1,j,i,f;
  cout<<"���{���i�p��X�Ҧ��p��10000���Ƹ̡A��Q7�ӡB9�ӡB3�Ӥ@�Ƭҩ�2���ơC";
  cout<<"�p�⵲�G���U�C:\n";
  while (x<10000)
  {
   i=x%7;
   j=x%9;
   f=x%3;
   if (x>9&&i==2&&i==j&&j==f)
   {
    cout<<x<<"\n";
    x++;
    }
   else
   {
    x++;
    }
    }
  system("PAUSE");
  return 0;
}
