#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x,y,z=2,t,n=0;
  cout<<"���{���i�Ds=a+aa+aaa+aaaa+aa...a���ȡA�䤤a�O�@�ӼƦr�C�Ҧp2+22+222+2222+22222(���ɦ@��5�Ӧ�Ƭۥ[)�X�Ӧ�Ƭۥ[�Цۦ��J\n";
  cout<<"�п�J�Ʀra=";
  cin>>x;
  cout<<"�п�J���=";
  cin>>y;
  t=x;
  if (y>=z)
  {   while (y>=z)
     {
           x=x*10+t;
           z++;
           n=n+x;
           }
  
  cout<<"s="<<n+t<<"\n";         }
  else 
  {
  cout<<"s="<<x<<"\n";
}         
  system("PAUSE");
  return 0;
}

