#include"bits/stdc++.h"
using namespace std;
void mx()
{
cout<<"--------------------����ɱ--------------------"<<endl<<"          --------By Ender_Wish "<<endl<<endl<<"     3.0 (���԰�)   ʼ��2023.7.12"<<endl<<"----------------------------------------------"<<endl;
cout<<"��л��"<<endl<<"����Գ��Ender Wish"<<endl<<"�ܼࣺEnder Wish"<<endl<<"��֯��MC.Fun������"<<endl<<"�Լ���λ���(����:nnd)"<<endl<<endl<<endl;
cout<<"|-------|"<<endl<<"|�� |�� |"<<endl<<"|-------|"<<"                MC.Fun������"<<endl<<"|�� |MC.|"<<endl<<"|---|Fun|"<<endl<<"     ---"<<endl<<endl<<endl<<"GOODBYE! qwq"<<endl;//���ʤ����ʧ�ܣ���л  
cout<<"--------------------����ɱ--------------------"<<endl<<"          --------By Ender_Wish "<<endl<<endl<<"     3.0 (���԰�)   ʼ��2023.7.12"<<endl<<"��ӭ������QQ��2134769886�����QQȺMinecraft����Ⱥ����������(��Ȼû�и�ɶ����)��Ⱥ�ţ�127451629 �µ�QQ����� 2134769886@qq.com  Ҳ��."<<endl<<"----------------------------------------------"<<endl<<endl<<endl<<endl;
}
int main()
{
ofstream fout("run.txt");
ofstream eout("err.txt");
int a,b,c[100]={1,1,1,1,1,1,1,1,1,1,1,1},b1,c1,d1,i,x,j1,d2,j2,d3,d4,s1,l,l1,cs,l2,d,j,s,sl,sb,k,lun=0;
char n;
do
{
d=1;j=1;s=0;sl=0;sb=0;k=1;
lun+=1;
system("pause");
system("cls");
cout<<"--------------------����ɱ--------------------"<<endl<<endl<<"Be Carful!����С��Ϸ���п��ܲ�������Ŷ��"<<endl<<"          --------By Ender_Wish "<<endl<<endl<<"     3.0 (���԰�)   ʼ��2023.7.12"<<endl<<"�����������ף�֧��Ϊ����������=w="<<endl<<endl<<"����͸�磺����ɾ�,������־��ɾ����ϲ��������ѡ7���ˣ�"<<endl<<"----------------------------------------------"<<endl; 
system("pause");
system("cls");
fout<<"��"<<lun<<"��"<<endl<<endl;
cout<<"��Ϸ��ʼ��"<<endl<<"��ѡ�������� 5�ˣ�1���� 7�ˣ�2���� 10�ˣ�3����(��ѡ������5�˺�7��)(ע��:���������Զ�����)"<<endl;
cin>>x;
if(x==1)
{
fout<<endl<<"����:5��"<<endl<<endl;
srand(time(NULL));
a=rand()%5+1;
while(1)
{
system("pause");
system("cls");
cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"�������ǣ�";
if(a==1)
{
cout<<"����"<<endl<<"��������ǣ�ɱ��������"<<endl;
fout<<"������:����"<<endl; 
 } 
 else
 {
if(a==2)
{
cout<<"Ů��"<<endl<<"��������ǣ����˻�ɱ�ˣ���ҩ�ͽ�ҩֻ����һ�Σ�"<<endl;
fout<<"������:Ů��"<<endl; 
 } 
 else
 {
if(a==3)
{
cout<<"С��"<<endl<<"��������ǣ���Ͷ���֣�Be carful!�����ɳ������ң���"<<endl;
fout<<"������:С��"<<endl; 
 } 
 else
 {
 	if(a==4)
 	{
 cout<<"����"<<endl<<"��������ǣ������ܴ���һ����"<<endl;	
 fout<<"������:����"<<endl; 
	 }
	 else
	 {
cout<<"ƽ��"<<endl<<"��������ǣ���ǿ�ػ���ȥ��&�����׸�"<<endl;	
fout<<"������:ƽ��"<<endl; 
	 }
 }
 }
 }    //������� 
while(sl==0&&sb==0)
 {
cout<<"��"<<k<<"��"<<endl;
fout<<endl<<"��"<<k<<"��"<<endl;
 system("pause");
 system("cls");
 cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"�������ۣ�"<<endl<<"���������ۣ���ѡ����Ҫɱ����(1~5)"<<endl;
if(a==1)
{
cin>>b;
if(b>=1&&b<=5)
{
c[b-1]=0;
fout<<"���ɱ��"<<b<<"��"<<endl;
}
else
{
cout<<"���������Ϊ������"<<endl;
eout<<"[erro]����(���)�������!"<<endl;
}
}     //����ִ��(���) 
 else
 {
cout<<"�㲻�ܶ���I am looking you!";
srand(time(NULL));
b1=rand()%5+1;
c[b1-1]=0;
fout<<"ϵͳɱ��"<<b1<<"��"<<endl;
 }     //����ִ��(ϵͳ) 
cout<<"��������ۣ�"<<endl;
system("pause");
system("cls");
cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"Ů��������"<<endl ;

for(i=1;i<=5;i++)
{
if(c[i-1]==0)
{
s=i;
}
 }     //�ж��������� 
if(a==2) 
{
if(j==0)
{
cout<<"��ҩ��0"<<endl;
fout<<endl<<"��ҩ:0"<<endl;
}
else
{
cout<<"��ҩ��1"<<endl;
fout<<endl<<"��ҩ��1"<<endl;
}
if(d==0)
{
cout<<"��ҩ��0"<<endl;
fout<<"��ҩ��0"<<endl;
}
else
{
cout<<"��ҩ��1"<<endl;
fout<<"��ҩ��1"<<endl;
}    //��ʾ��ҩ�붾ҩƿ�� 
if(s==0)
{
cout<<"����û����"<<endl;
}
else
{
cout<<"��������һ���ˣ��Ƿ��ý�ҩ���ˣ� Ҫ(1��)  ��Ҫ(2��)(ע�⣺��ҩֻ��1ƿ)"<<endl;
if(j==1)
{
cin>>j1;
if(j1==1)
{
c[s-1]=1;
fout<<"��Ҿ���"<<s<<"��"<<endl; 
j=0;
}
else
{
if(j1!=1&&j1!=2)
{
cout<<"��������Զ���Ϊ������"<<endl;
eout<<"[erro]���(Ů��)�������"<<endl;
}
}
	}	
else
{
cout<<"��ҩû�ˣ�"<<endl; 
}
cout<<"�Ƿ��ö�ҩɱ�ˣ� Ҫ(1��)  ��Ҫ(2��)(ע�⣺��ҩֻ��1ƿ)"<<endl;
if(d==1)
{
cin>>d1;
if(d1==1)
{
cout<<"������Ҫɱ���ţ�(1~5)"<<endl;
cin>>d3;
if(d3>=1&&d3<=5)
{
c[d3-1]=0;
fout<<"���ɱ��"<<d3<<"��"<<endl;
d=0;
}
else
{
cout<<"��������Զ���Ϊ������";
eout<<"[erro]���(Ů��)�������"<<endl;
}
}
else
{
if(d1!=2&&d1!=1)
{
cout<<"��������Զ���Ϊ������";
eout<<"[erro]���(Ů��)�������"<<endl;
}
}
}
else
{
cout<<"��ҩû�ˣ�"<<endl;
}
}
}   //Ů��ִ��(���) 
else
{
cout<<"�㲻�ܶ���I am looking you!"<<endl;
j2=rand()%2+1;
if(j2==1&&j==1)
{
c[s-1]=1;
fout<<"ϵͳ����"<<s<<"��"<<endl;
j=0;
}
srand(time(NULL));
d2=rand()%2+1;
if(d2==1)
{
d4=rand()%5+1;
c[d4-1]=0;
fout<<"ϵͳɱ��"<<d4<<"��"<<endl;
d=0;
}
}    //Ů��ִ��(ϵͳ) 
cout<<"Ů�������"<<endl;
system("pause");
system("cls");
cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"���������ۣ�"<<endl;
for(i=0;i<5;i++)
{
if(c[i]==0)
{
	s1=1;
cout<<"�������� "<<i+1<<"��"<<endl; 
fout<<endl<<"��������"<<i+1<<"��"<<endl; 
 } 
}
if(s1!=1)
{
cout<<"������ƽ��ҹ��û������"<<endl;
fout<<endl<<"������ƽ��ҹ��û������"<<endl;
}   //�ж������������� 
if(c[4]==0)
{
cout<<"���˿ɴ���һ��(1,2,4,5)"<<endl;
if(a==4)
{
cin>>l;
if(l>=1&&l<=5)
{
c[l-1]=0;
fout<<endl<<"����(���)ɱ��"<<l<<"��"<<endl; 
}
else
{
cout<<"��������Զ���Ϊ������"<<endl;
eout<<"[erro]���(����)�������"<<endl;
}
}  //����ִ��(���) 
else
{
cout<<"�㲻�ܶ���I am looking you!"<<endl;
srand(time(NULL));
l1=rand()%2+1;
if(l1==1)
{
	srand(time(NULL));
	l2=rand()%5+1;
c[l2-1]=0;
fout<<endl<<"ϵͳ(����)ɱ��"<<l2<<"��"<<endl;
}
}//����ִ��(ϵͳ) 
}
if(c[3]==0)
{
cout<<"С��ʤ����"<<endl;
fout<<endl<<"[fin]С��ʤ����"<<endl;
if(a==3)
{
sl=1;
	cout<<endl<<"��óɾͣ���ɱ���֣�"<<endl<<endl;
	fout<<"[cj]��óɾͣ���ɱ���֣�"<<endl;
	cs=cs+1;
}
}    //С��������С��ʤ�� 
if(c[2]==0&&c[3]==0&&c[4]==0&&c[5]==0)
{
cout<<"����ʤ����"<<endl;
fout<<endl<<"[fin]����ʤ����"<<endl;
if(a==1)
{
cout<<endl<<"��óɾ�:ɱ�˷�������3�꣡"<<endl<<endl;
fout<<endl<<"[cj]��óɾ�:ɱ�˷�������3�꣡"<<endl;
cs++;
sl=1;
}
}   //����ɱ������������(��С����)������ʤ�� 
if(c[0]==0)
{
cout<<"ƽ��ʤ����"<<endl;
fout<<endl<<"[fin]ƽ��ʤ����"<<endl;
if(a!=1)
{
cout<<endl<<"��óɾ�:������̽!"<<endl<<endl;
fout<<endl<<"[cj]��óɾ�:������̽!"<<endl;
cs+=1;
sl=1;
}
}   //�������������ƽ��ʤ�� 
if(c[a-1]==0&&a!=3)
{
cout<<"�����ˣ���Ϸʧ�ܣ�"<<endl<<endl<<"��óɾͣ���ʽ����"<<endl<<endl;
fout<<endl<<"�����ˣ���Ϸʧ�ܣ�"<<endl;
fout<<endl<<"[cj]��óɾͣ���ʽ����"<<endl;
cs++;
sb=1;
}  //��С����������������ʧ�� 
if(sl==0&&sb==0)
{
k+=1;
}  //�����ûʤ��Ҳûʧ�ܣ�������1 
}
if(sl==1||sb==1)
{
	break;
}
}          //5�� 
}
if(x==2)
{
fout<<endl<<"����:7��"<<endl<<endl;
srand(time(0));
a=rand()%7+1;
while(1)
{
system("pause");
system("cls");
cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"�������ǣ�";
if(a==1)
{
cout<<"����"<<endl<<"��������ǣ�ɱ��������"<<endl;
fout<<"������:����"<<endl; 
 } 
 else
 {
if(a==2)
{
cout<<"Ů��"<<endl<<"��������ǣ����˻�ɱ�ˣ���ҩ�ͽ�ҩֻ����һ�Σ�"<<endl;
fout<<"������:Ů��"<<endl;
 } 
 else
 {
if(a==3)
{
cout<<"С��"<<endl<<"��������ǣ���Ͷ���֣�Be carful!�����ɳ������ң���"<<endl;
fout<<"������:С��"<<endl;
 } 
 else
 {
 	if(a==4)
 	{
 cout<<"����"<<endl<<"��������ǣ������ܴ���һ����"<<endl;	
 fout<<"������:����"<<endl;
	 }
	 else
	 {
	 	if(a==5)
	 	{
cout<<"ƽ��1"<<endl<<"��������ǣ���ǿ�ػ���ȥ��&�����׸�"<<endl;
fout<<"������:ƽ��1"<<endl;		 	
		 }
else
{
if(a==6)
{
cout<<"ƽ��2"<<endl<<"���������:��ǿ�ػ���ȥ��&�����׸�"<<endl;
fout<<"������:ƽ��2"<<endl;
}
else
{
cout<<"�Թ���"<<endl<<"��������ǣ��Թϣ�"<<endl;
fout<<"������:�Թ���"<<endl;
}
}
	 }
 }
 }
 }    //������� 
 cout<<"��"<<k<<"��"<<endl;
 fout<<endl<<"��"<<k<<"��"<<endl<<endl;
 system("pause");
 system("cls");
 cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"�������ۣ�"<<endl<<"���������ۣ���ѡ����Ҫɱ����(1~7)"<<endl;
if(a==1)
{
cin>>b;
if(b>=2&&b<=7)
{
fout<<"���(����)ɱ��"<<b<<"��"<<endl;
c[b-1]=0;
}
else
{
cout<<"���������Ϊ������"<<endl;
eout<<"[erro]���(����)�������"<<endl;
}
}     //����ִ��(���) 
 else
 {
cout<<"�㲻�ܶ���I am looking you!";
srand(time(NULL));
b1=rand()%7+1;
c[b1-1]=0;
fout<<"ϵͳ(����)ɱ��"<<b1<<"��"<<endl;
 }     //����ִ��(ϵͳ) 
cout<<"��������ۣ�"<<endl;
system("pause");
system("cls");
cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"Ů��������"<<endl ;

for(i=1;i<=7;i++)
{
if(c[i-1]==0)
{
s=i;
}
 }     //�ж��������� 
if(a==2)
{
if(j==0)
{
cout<<"��ҩ��0"<<endl;
fout<<"��ҩ��0"<<endl;
}
else
{
cout<<"��ҩ��1"<<endl;
fout<<"��ҩ��0"<<endl;
}
if(d==0)
{
cout<<"��ҩ��0"<<endl;
fout<<"��ҩ��0"<<endl;
}
else
{
cout<<"��ҩ��1"<<endl;
fout<<"��ҩ��0"<<endl;
}    //��ʾ��ҩ�붾ҩƿ�� 
if(s==0)
{
cout<<"������ƽ��ҹ��û������"<<endl;
fout<<endl<<"������ƽ��ҹ��û������"<<endl;
}
else
{
cout<<"��������һ���ˣ��Ƿ��ý�ҩ���ˣ� Ҫ(1��)  ��Ҫ(2��)(ע�⣺��ҩֻ��1ƿ)"<<endl;
if(j==1)
{
cin>>j1;
if(j1==1)
{
c[s-1]=1;
fout<<"���(Ů��)����"<<s<<"��"<<endl;
j=0;
}
else
{
if(j1!=1&&j1!=2)
{
cout<<"��������Զ���Ϊ������";
eout<<"[erro]���(Ů��)�������"<<endl;
}
}
	}	
else
{
cout<<"��ҩû�ˣ�"<<endl; 
}
cout<<"�Ƿ��ö�ҩɱ�ˣ� Ҫ(1��)  ��Ҫ(2��)(ע�⣺��ҩֻ��1ƿ)"<<endl;
if(d==1)
{
cin>>d1;
if(d1==1)
{
cout<<"������Ҫɱ���ţ�(1~7)"<<endl;
cin>>d3;
if(d3>=1&&d3<=7)
{
c[d3-1]=0;
}
else
{
cout<<"��������Զ���Ϊ������";
eout<<"[erro]���(Ů��)�������"<<endl;
}
}
else
{
if(d1!=2)
{
cout<<"��������Զ���Ϊ������";
eout<<"[erro]���(Ů��)�������"<<endl;
}
}
}
else
{
cout<<"��ҩû�ˣ�"<<endl;
}
}
}   //Ů��ִ��(���) 
else
{
cout<<"�㲻�ܶ���I am looking you!"<<endl;
srand(time(NULL));
j2=rand()%2+1;
if(j2==1)
{
c[s-1]=1;
fout<<"ϵͳ����"<<s<<"��"<<endl;
}
srand(time(NULL));
d2=rand()%2+1;
if(d2==1)
{
	srand(time(NULL));
d4=rand()%5+1;
c[d4-1]=0;
fout<<"ϵͳ(Ů��)ɱ��"<<d4<<"��"<<endl;
}
}    //Ů��ִ��(ϵͳ) 
cout<<"Ů�������"<<endl;
system("pause");
system("cls");
cout<<"               ����ɱ"<<endl<<"-----------------------------------"<<endl;
cout<<"���������ۣ�"<<endl;
for(i=0;i<5;i++)
{
if(c[i]==0)
{
	s1=1;
cout<<"�������� "<<i+1<<"��"<<endl; 
 } 
}
if(s1!=1)
{
cout<<"������ƽ��ҹ��û������"<<endl;
}   //�ж������������� 
if(c[4]==0)
{
cout<<"���˿ɴ���һ��(1,2,4,5,6,7)"<<endl;
if(a==4)
{
cin>>l;
if(l>=1&&l<=7)
{
c[l-1]=0;
fout<<"���(����)������"<<l<<"��"<<endl;
}
else
{
cout<<"��������Զ���Ϊ������"<<endl;
eout<<"[erro]���(����)�������"<<endl;
}
}  //����ִ��(���) 
else
{
cout<<"�㲻�ܶ���I am looking you!"<<endl;
srand(time(NULL));
l1=rand()%2+1;
if(l1==1)
{
	srand(time(NULL));
	l2=rand()%7+1;
c[l2-1]=0;
fout<<"ϵͳ(����)������"<<l2<<"��"<<endl;
}
}//����ִ��(ϵͳ) 
}
if(c[3]==0)
{
cout<<"С��ʤ����"<<endl;
fout<<endl<<"[fin]С��ʤ����"<<endl;
if(a==3)
{
	cout<<endl<<"��óɾͣ���ɱ���֣�"<<endl<<endl;
	fout<<endl<<"[cj]��óɾͣ���ɱ���֣�"<<endl;
	cs=cs+1;
sl=1;
}
}    //С��������С��ʤ�� 
if(c[1]==0&&c[3]==0&&c[4]==0&&c[5]==0)
{
cout<<"����ʤ����"<<endl;
fout<<endl<<"[fin]����ʤ����"<<endl;
if(a==1)
{
sl=1;
cout<<endl<<"��óɾ�:ɱ�˷�������3�꣡"<<endl<<endl;
fout<<endl<<"[cj]��óɾͣ�ɱ�˷�������3�꣡"<<endl;
cs++;
}
}   //����ɱ������������(��С����)������ʤ�� 
if(c[1]==0)
{
cout<<"ƽ��ʤ����"<<endl;
fout<<endl<<"[fin]ƽ��ʤ����"<<endl;

if(a!=1&&a!=7)
{
sl=1;
cout<<endl<<"��óɾ�:������̽!"<<endl<<endl;
fout<<endl<<"[cj]��óɾͣ�������̽��"<<endl;
cs++;
}
}   //�������������ƽ��ʤ�� 
for(i=0;i<a;i++)
{
if(c[i-1]==0&&i!=3)
{
cout<<"�����ˣ���Ϸʧ�ܣ�"<<endl<<endl<<"��óɾͣ���ʽ����"<<endl<<endl;
fout<<endl<<"[cj]��óɾͣ���ʽ����"<<endl;
cs+=1;
sb=1;   //��С����������������ʧ��
} 
}
if(sl==0&&sb==0)
{
k+=1;
}  //�����ûʤ��Ҳûʧ�ܣ�������1
if(sl==1||sb==1)
{
break;
}
}
}    //7�� 
cout<<"������(y�����������˳�):";
cin>>n;
}
while(n=='y');
system("pause");
system("cls");
cout<<endl<<endl;
mx();
system("pause");
cout<<endl<<"�������������ɼ��ɣ�" <<"���"<<cs<<"���ɾͣ�";
if(cs==0)
{
cout<<endl<<"С����·��"<<endl<<endl;
fout<<endl<<"[cj]�ɾ���:"<<cs<<endl;
fout<<"[cj]С����·��"<<endl;
}
if(cs>=1&&cs<=3)
{
cout<<endl<<"����������"<<endl<<endl;
fout<<endl<<"[cj]�ɾ���:"<<cs<<endl;
fout<<"[cj]����������"<<endl;
}
if(cs>3&&x==5)
{
cout<<endl<<"���㷭��"<<endl<<endl;
fout<<endl<<"[cj]�ɾ���:"<<cs<<endl;
fout<<"[cj]���㷭��"<<endl;
}
if(cs>3&&cs<5&&x==7)
{
cout<<endl<<"�����±�ը��"<<endl<<endl;
fout<<endl<<"[cj]�ɾ���:"<<cs<<endl;
fout<<"[cj]�����±�ը��"<<endl;
}
if(cs>=5&&x==7)
{
cout<<endl<<"���㷭��"<<endl<<endl;
fout<<endl<<"[cj]�ɾ���:"<<cs<<endl;
fout<<"[cj]���㷭��"<<endl;
}
system("pause");
cout<<"                    �޸���־"<<endl<<endl<<endl<<"2022.12.12  ��ʼ��дV2.0(���԰�)"<<endl<<endl<<"2023.7.12  ���V2.0(���԰�)(������bug)"<<endl<<endl<<"2023.7.12  ��ʼ��дV3.0(���԰�)"<<endl<<endl<<"2023.8.7  ��������V2.0(���԰�)��bug"<<endl<<endl<<"2024.4.20-5.27  ��дV3.1,V3.2,Y3.3,������־ϵͳ";
eout<<endl<<"�ļ�д������!";
fout<<endl<<"�ļ�д������!";
fout.close();
eout.close();
}   
