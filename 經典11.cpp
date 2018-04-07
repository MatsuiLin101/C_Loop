#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x=1,j,i,f;
  cout<<"此程式可計算出所有小於10000的數裡，能被7個、9個、3個一數皆於2的數。";
  cout<<"計算結果有下列:\n";
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
