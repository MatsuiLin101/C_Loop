#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x,y=1;
    cout<<"���{���iŪ��7�Ӽ�(1-50)����ƭȡA�CŪ���@�ӭȡA�{�����L�X�ӭȭӼƪ�*";
    while (y<=7)
    {
          cout<<"\n�п�Jx=";
          cin>>x;
          y++;
          if (x>=1&&x<=50)
          {
                          while (x>0)
                          {
                                cout<<"*";
                                x--;
                                }
                                }
          else
          {
              cout<<"��J���~�A�Э��s��J!\n";
              y--;
              }
              }
  cout<<"\n�{������\n";                                         
  system("PAUSE");
  return 0;
}
