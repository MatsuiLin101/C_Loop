#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x=1,y=1,z=0;
    cout<<"此程式可判斷出100內的質數\n";
    cout<<"質數有:\n";
    while (x<=100)
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
