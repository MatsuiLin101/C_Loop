#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,n;
  float sum=0;
  cout<<"���{���i��N�����ƮɡA�I�s��ƨD1/2+1/4+...+1/N�A��N���_�ƮɡA�I�s��ƨD1/1+1/3+...+1/N�C\n";
  cout<<"�п�J�@��:";
  cin>>a;
  if(a%2==0)
  {n=2;
            while (n<=a)
            {
                  sum=sum+1/n;
                  n=n+2;}}
  else                  
  {n=1;
                        while (n<=a)
                        {
                              sum=sum+1/n;
                              n=n+2;}}
  cout<<"���G��:"<<sum<<"\n";
  
  system("PAUSE");
  return 0;
}
