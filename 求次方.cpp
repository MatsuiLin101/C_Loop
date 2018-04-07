//以pow(x,n)次方函數，求x的n次方
#include <math.h>             //pow(x,n)函數定義於 math.h 標頭檔
#include <iostream.h>
#include <stdlib.h>
main()
{
   int x,n;
   double ans;                //設定pow()次方函數值為double
   cout<<"印出2的n次方\n";
   cout<<"輸入n值=";
   cin>>n;
   ans=pow(2,n);
   cout<<"2^"<<n<<"="<<ans<<"\n";
   system("PAUSE");
   return 0;
}
