//�Hpow(x,n)�����ơA�Dx��n����
#include <math.h>             //pow(x,n)��Ʃw�q�� math.h ���Y��
#include <iostream.h>
#include <stdlib.h>
main()
{
   int x,n;
   double ans;                //�]�wpow()�����ƭȬ�double
   cout<<"�L�X2��n����\n";
   cout<<"��Jn��=";
   cin>>n;
   ans=pow(2,n);
   cout<<"2^"<<n<<"="<<ans<<"\n";
   system("PAUSE");
   return 0;
}
