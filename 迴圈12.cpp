#include <iostream.h>
#include <stdlib.h>
int main()
{
  int x,y,z,f;
  cout<<"���{���i�N�T�Ӿ�ƥѤp��j��X\n";
  cout<<"�п�J�Ĥ@�Ӽ�:";
  cin>>x;
  cout<<"�п�J�ĤG�Ӽ�:";
  cin>>y;
  cout<<"�п�J�ĤT�Ӽ�:";
  cin>>z;
  
  if(x>y)
  {f=x;
   x=y;
   y=f;}
  if(x>z)
  {f=x;
   x=z;
   z=f;}
  if(y>z)
  {f=y;
   y=z;
   z=f;}  

  printf("�̤p����:%d\n���j���p����:%d\n�̤j����:%d\n",x,y,z);                                    
    
  system("PAUSE");
  return 0;
}
