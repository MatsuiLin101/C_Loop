#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x=101,y=1,z=0;
    cout<<"此程式可判斷出101-200內的質數\n";
    cout<<"質數有:\n";
    while (x>=101&&x<=200)
    {while (x>=y)
         {if (x%y==0)
         {z++;
          y++;}
          else
          {y++;}}
     if (z==2)
     {cout<<x<<"\n";
      y=1;
      z=0;
      x++;}
     else
     {y=1;
      z=0;
      x++;}}
     cout<<"\n"; 
     system("PAUSE");
     return 0;
}      
