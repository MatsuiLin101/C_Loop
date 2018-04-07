#include <math.h>
#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i,j,f;
  for(i=1;i<=4;i++)
  {
                   for(j=0;j<4-i;j++)
                   {cout<<" ";}
                   f=i*2-1;
                   while (f>=1)
                   {cout<<"*";
                    f--;}                                   
                    cout<<"\n";}
  for(i=3;i>=1;i--)
  {
                   for(j=1;j<=4-i;j++)
                   {cout<<" ";}
                   f=i*2-1;
                   while (f>=1)
                   {cout<<"*";
                    f--;}
                    cout<<"\n";}                  
                           
  system("PAUSE");
  return 0;
}                                     
