//�@���}�C:��ƱƧ�,�èD������
#include <iostream.h>
#include <stdlib.h>
main()
{
  int x=0,i,j,t;
  float sum=0.0;
  int a[26];                         //�}�Ca�s���J���C�ӼƦr
  cout<<"�N��J���Ʀr�ƧǡA�èD���ƥ�����\n";
  cout<<"�п�J�@��Ʀr(�ܦh26��)�G";
  for(x=0;x<26;x++)
  {
    cin>>a[x];
    if(a[x]==0) break;               //��J�Ʀr,�Y��0�h���Xfor�j��
  }

  // Bubble sort ��w�ƧǪk
  for(i=0;i<x;i++)                   //�~�j��:�]�w��Ƥ�j�p���e�@�Ӽ�
  {
    for(j=i+1;j<x;j++)               //���j��:�]�w��Ƥ�j�p����@�Ӽ�
    {
      if (a[i]>a[j])                 //�ƧǮɱN�̤p�ȩ��e��
      {
       t=a[i];                       //�Y�e�@���j���@��,�ha[i],a[j]��ƹ��
       a[i]=a[j];
       a[j]=t;
      }
    }
  }
  cout<<"\n�Ƨǫ᪺���G��:\n";
  for(i=0;i<x;i++)                   //�L�X�Ƨǫᤧ�}�Ca���
  {
    cout<<a[i]<<"\n";
    sum=sum+a[i];
  }  
  cout<<"��ƥ����Ƭ�:"<<(sum/x)<<"\n";
  system("pause");
  return 0;
}
