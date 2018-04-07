#include <iostream.h>
#include <stdlib.h>
int main()
{
    float n=100.0,x=0.0,s=0.0;
    cout<<"一球從100米高度自由落下，每次落地後反跳回原高度的一半；再落下，求它在";
    cout<<"第10次落地時，共經過多少米？第10次反彈多高？";
    while(x<=8)
    {
    s=s+n;
    n=n/2;
    x=x+1;
    }
    s=s+100;
    cout<<s<<"米";
    cout<<n/2<<"米";

system("PAUSE");
  return 0;
}
