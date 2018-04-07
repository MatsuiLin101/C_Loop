#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i=1,a,b,ab;
  cout<<"祘Α―2计程そ计籔程そ计\n";
  cout<<"叫块材1计:";
  cin>>a;
  cout<<"叫块材2计:";
  cin>>b;
  while (i<=a)
  {
        if (a%i==0&&b%i==0)
        ab=i;
        i++;
   }
  cout<<a<<"籔"<<b<<"程そ计"<<ab<<"\n";
  cout<<a<<"籔"<<b<<"程そ计"<<a*b/ab<<"\n";
  system("PAUSE");
  return 0;
}  
