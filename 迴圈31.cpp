#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x=0,i,j,f;
  int a[10];
  cout<<"���{���i�N10�ӥ���ƥѤp��j�ƦC\n";
  cout<<"�п�J10�ӥ����:\n";
  for(x=0;x<10;x++)
  {cin>>a[x];}
  for(i=0;i<x;i++)
  {for(j=i+1;j<x;j++)
  {if (a[i]>a[j])
  {f=a[i];
   a[i]=a[j];
   a[j]=f;}}}
  cout<<"�Ѥp��j�̧ǬO:\n";
  for (i=0;i<x;i++)
  {cout<<a[i]<<"\n";}
  system("PAUSE");
  return 0;
}
