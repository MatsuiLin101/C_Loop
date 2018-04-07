#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x=1,y=1,sum=1;
  cout<<"猴子第一天摘了若干顆桃子，當即吃了一半又多一顆，第二天吃了剩下的一半又多一顆，此後每天早上都吃了前一天剩下的一半又多一顆，到了第10天早上想在吃時，見只剩一個桃子。\n";
  cout<<"此程式可算出第一天猴子摘了多少桃子\n";
  while (y<10)
  {
        sum=2*(sum+x);
        y++;}
  cout<<"猴子第一天共摘了"<<sum<<"顆桃子\n";
  system("PAUSE");
  return 0;
}         
