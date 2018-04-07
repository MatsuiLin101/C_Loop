#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x,y,z,n,t,sum;
    cout<<"此程式可將4位數整數的每位數都加上5，然後用合除以10的餘數帶替該數字，再將第一位和第四位交換，第二位和第三位交換。";
    cout<<"\n請輸入欲加密的四位數整數:";
    cin>>x;
    if (x<=9999&&x>=1000)
    {
    y=x/1000;
    z=(x-y*1000)/100;
    n=(x-(y*1000)-(z*100))/10;
    t=(x-(y*1000)-(z*100)-(n*10));
    y=(y+5)%10;  
    z=(z+5)%10;
    n=(n+5)%10;
    t=(t+5)%10;
    sum=(t*1000)+(n*100)+(z*10)+y;
    cout<<"加密結果為:"<<sum<<"\n";  
}
    else 
    {
         cout<<"輸入錯誤，程式即將結束\n";
         }       
  system("PAUSE");
  return 0;
}
