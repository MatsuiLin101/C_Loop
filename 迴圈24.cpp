#include <iostream.h>
#include <stdlib.h>
int main()
{
  int i;
  float j=100.0,sum=100.0;
  cout<<"���{���i�p��X�@�y�q100�̰����U�A�C�����a��ϼu�@�b���סA��10�����a�ɸg�L�h�̡֦A�M��10���ϼu�����סC\n";
  for(i=1;i<=9;i++)
  {
   sum=sum+j;
   j=j/2;
   }
  cout<<"��10�����a�ɦ@�g�L:";
  cout<<sum<<"\n";
  cout<<"��10���ϼu���׬�:";
  cout<<j/2<<"\n";
  system("PAUSE");
  return 0;
}
