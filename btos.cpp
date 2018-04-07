//一維陣列:資料排序,並求平均數
#include <iostream.h>
#include <stdlib.h>
main()
{
  int x=0,i,j,t;
  float sum=0.0;
  int a[26];                         //陣列a存放輸入的每個數字
  cout<<"將輸入之數字排序，並求其算數平均數\n";
  cout<<"請輸入一串數字(至多26個)：";
  for(x=0;x<26;x++)
  {
    cin>>a[x];
    if(a[x]==0) break;               //輸入數字,若為0則跳出for迴圈
  }

  // Bubble sort 氣泡排序法
  for(i=0;i<x;i++)                   //外迴圈:設定兩數比大小之前一個數
  {
    for(j=i+1;j<x;j++)               //內迴圈:設定兩數比大小之後一個數
    {
      if (a[i]>a[j])                 //排序時將最小值往前放
      {
       t=a[i];                       //若前一項大於後一項,則a[i],a[j]兩數對調
       a[i]=a[j];
       a[j]=t;
      }
    }
  }
  cout<<"\n排序後的結果為:\n";
  for(i=0;i<x;i++)                   //印出排序後之陣列a資料
  {
    cout<<a[i]<<"\n";
    sum=sum+a[i];
  }  
  cout<<"算數平均數為:"<<(sum/x)<<"\n";
  system("pause");
  return 0;
}
