#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x=0,i,j,f;
  int a[10];
  cout<<"此程式可將10個正整數由小到大排列\n";
  cout<<"請輸入10個正整數:\n";
  for(x=0;x<10;x++)
  {cin>>a[x];}
  for(i=0;i<x;i++)
  {for(j=i+1;j<x;j++)
  {if (a[i]>a[j])
  {f=a[i];
   a[i]=a[j];
   a[j]=f;}}}
  cout<<"由小到大依序是:\n";
  for (i=0;i<x;i++)
  {cout<<a[i]<<"\n";}
  system("PAUSE");
  return 0;
}
