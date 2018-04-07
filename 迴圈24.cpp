#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i;
  float j=100.0,sum=100.0;
  cout<<"此程式可計算出一球從100米高落下，每次落地後反彈一半高度，第10次落地時經過多少米，和第10次反彈的高度。\n";
  for(i=1;i<=9;i++)
  {
   sum=sum+j;
   j=j/2;
   }
  cout<<"第10次落地時共經過:";
  cout<<sum<<"\n";
  cout<<"第10次反彈高度為:";
  cout<<j/2<<"\n";
  system("PAUSE");
  return 0;
}
