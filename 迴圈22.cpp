#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i=1,a,b,ab;
  cout<<"���{���i�H�D�X2�ƪ��̤j���]�ƻP�̤p������\n";
  cout<<"�п�J��1�Ӽ�:";
  cin>>a;
  cout<<"�п�J��2�Ӽ�:";
  cin>>b;
  while (i<=a)
  {
        if (a%i==0&&b%i==0)
        ab=i;
        i++;
   }
  cout<<a<<"�P"<<b<<"���̤j���]�Ƭ�"<<ab<<"\n";
  cout<<a<<"�P"<<b<<"���̤p�����Ƭ�"<<a*b/ab<<"\n";
  system("PAUSE");
  return 0;
}  
