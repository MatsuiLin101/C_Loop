#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x=1,y=1,z=0;
    cout<<"���{���i�P�_�X100�������\n";
    cout<<"��Ʀ�:\n";
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
