#include <iostream.h>
#include <stdlib.h>
int main()
{
    int x,y,z,n,t,sum;
    cout<<"���{���i�N4��ƾ�ƪ��C��Ƴ��[�W5�A�M��ΦX���H10���l�Ʊa���ӼƦr�A�A�N�Ĥ@��M�ĥ|��洫�A�ĤG��M�ĤT��洫�C";
    cout<<"\n�п�J���[�K���|��ƾ��:";
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
    cout<<"�[�K���G��:"<<sum<<"\n";  
}
    else 
    {
         cout<<"��J���~�A�{���Y�N����\n";
         }       
  system("PAUSE");
  return 0;
}
