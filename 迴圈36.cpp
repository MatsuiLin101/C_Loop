#include <iostream.h>
#include <stdlib.h>
int main()
{
  int a,n;
  float sum=0;
  cout<<"祘ΑㄏN案计㊣ㄧ计―1/2+1/4+...+1/N讽N计㊣ㄧ计―1/1+1/3+...+1/N\n";
  cout<<"叫块计:";
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
  cout<<"挡狦:"<<sum<<"\n";
  
  system("PAUSE");
  return 0;
}
