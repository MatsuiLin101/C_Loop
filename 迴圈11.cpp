#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x,y,z,n,sum=0;
    cout<<"�п�J�~:";
    cin>>x;
    cout<<"�п�J���:";
    cin>>y;
    cout<<"�п�J���";
    cin>>z;
    n=y;    
    if (x%4==0&&y>2&&y<=12)
    {z=z+1;}
    if (y==2)
    {sum=sum+31;}
    if (y>2&&y<8)
    {sum=sum+59;}
    if (y>7)
    {sum=sum+181;}
    while (y>3&&y<=7)
    {
                  if (y%2==1)
                  {
                        sum=sum+30;
                        y--;
                        }
                        else
                        {
                            sum=sum+31;
                            y--;
                            }
                            }
    while (y>7&&y<=12)
    {
          if (y%2==0)
          {
                     sum=sum+30;
                     y--;
                     }
                     else
                     {
                         sum=sum+31;
                         y--;
                         }
                         }
    if ((y>12)||(y==1&&z>31)||(y==2&&z>28))
    {cout<<"��J���~\n";
     system("PAUSE");
     return 0;}
    if (y>2&&y<=7)
    {if (y%2!=0&&z>31)
     {cout<<"��J���~\n";
      system("PAUSE");
      return 0;}
     if (y%2==0&&z>30) 
     {cout<<"��J���~\n";
      system("PAUSE");
      return 0;}}
    if (y>7&&y<=12)  
    {if (y%2==0&&z>31)
     {cout<<"��J���~\n";
      system("PAUSE");
      return 0;}
     if (y%2!=0&&z>30) 
     {cout<<"��J���~\n";
      system("PAUSE");
      return 0;}}
  cout<<x<<"�~"<<n<<"��"<<z<<"��O"<<x<<"�~����"<<sum+z<<"��"<<"\n";                                                                                     
  system("PAUSE");
  return 0;
}      
          
