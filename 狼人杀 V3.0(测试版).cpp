#include"bits/stdc++.h"
using namespace std;
int main()
{
int a,b,c[100]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,},b1,c1,d=1,j=1,x,s=0,i,sl=0,sb=0,d1,j1,d2,j2,d3,d4,s1,l,l1,k=1,cs;
char v[100],n;
do
{
cout<<"--------------------狼人杀--------------------"<<endl<<endl<<"Be Carful!自制小游戏，有可能不按常规哦！"<<endl<<"          --------By Ender_Wish "<<endl<<endl<<"     3.0 (测试版)   始于2023.7.12"<<endl<<"作者制作不易，支持为我们续命！=w="<<endl<<endl<<"更新透剧：加入成就，删除惊喜，人数可选7人,可以评论了！"<<endl<<"----------------------------------------------"<<endl; 
system("pause");
system("cls");
cout<<"游戏开始！"<<endl<<"请选择人数： 5人（1键） 7人（2键） 10人（3键）(可选人数：5人和7人)(注意:输入错误会自动结束)"<<endl;
cin>>x;
if(x==1)
{
srand(time(0));
a=rand()%5+1;
while(sl==0&&sb==0)
{
system("pause");
system("cls");
cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"你的身份是：";
if(a==1)
{
cout<<"狼人"<<endl<<"你的任务是：杀掉其他人"<<endl;
 } 
 else
 {
if(a==2)
{
cout<<"女巫"<<endl<<"你的任务是：救人或杀人（毒药和解药只能用一次）"<<endl;
 } 
 else
 {
if(a==3)
{
cout<<"小丑"<<endl<<"你的任务是：被投出局（Be carful!我命由程序不由我！）"<<endl;
 } 
 else
 {
 	if(a==4)
 	{
 cout<<"猎人"<<endl<<"你的任务是：死后能带走一个人"<<endl;	
	 }
	 else
	 {
cout<<"平民"<<endl<<"你的任务是：顽强地活下去！&任人宰割"<<endl;	
	 }
 }
 }
 }    //分配身份 
 cout<<"第"<<k<<"局"<<endl;
 system("pause");
 system("cls");
 cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"天黑请闭眼！"<<endl<<"狼人请睁眼！请选择你要杀的人(1~5)"<<endl;
if(a==1)
{
cin>>b;
if(b>=1&&b<=5)
{
c[b-1]=0;
}
else
{
cout<<"输入错误！视为放弃！"<<endl;
}
}     //狼人执行(玩家) 
 else
 {
cout<<"你不能动！I am looking you!";
b1=rand()%5+1;
c[b1-1]=0;
 }     //狼人执行(系统) 
cout<<"狼人请闭眼！"<<endl;
system("pause");
system("cls");
cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"女巫请睁眼"<<endl ;

for(i=1;i<=5;i++)
{
if(c[i-1]==0)
{
s=i;
}
 }     //判断有无死人 
if(a==2)
{
if(j==0)
{
cout<<"解药：0"<<endl;
}
else
{
cout<<"解药：1"<<endl;
}
if(d==0)
{
cout<<"毒药：0"<<endl;
}
else
{
cout<<"毒药：1"<<endl;
}    //显示解药与毒药瓶数 
if(s==0)
{
cout<<"昨晚没死人"<<endl;
}
else
{
cout<<"昨晚死了一个人，是否用解药救人？ 要(1键)  不要(2键)(注意：解药只有1瓶)"<<endl;
if(j==1)
{
cin>>j1;
if(j1==1)
{
c[s-1]=1;
j=0;
}
else
{
if(j1!=1||j1!=2)
{
cout<<"输入错误，自动视为放弃！";
}
}
	}	
else
{
cout<<"解药没了！"<<endl; 
}
cout<<"是否用毒药杀人？ 要(1键)  不要(2键)(注意：毒药只有1瓶)"<<endl;
if(d==1)
{
cin>>d1;
if(d1==1)
{
cout<<"请问你要杀几号？(1~5)"<<endl;
cin>>d3;
if(d3>=1&&d3<=5)
{
c[d3-1]=0;
}
else
{
cout<<"输入错误，自动视为放弃！";
}
}
else
{
if(d1!=2)
{
cout<<"输入错误，自动视为放弃！";
}
}
}
else
{
cout<<"毒药没了！"<<endl;
}
}
}   //女巫执行(玩家) 
else
{
cout<<"你不能动！I am looking you!"<<endl;
j2=rand()%2+1;
if(j2==1)
{
c[s-1]=1;
}
d2=rand()%2+1;
if(d2==1)
{
d4=rand()%5+1;
c[d4-1]=0;
}
}    //女巫执行(系统) 
cout<<"女巫请闭眼"<<endl;
system("pause");
system("cls");
cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"天亮请睁眼！"<<endl;
for(i=0;i<5;i++)
{
if(c[i]==0)
{
	s1=1;
cout<<"昨晚死了 "<<i+1<<"号"<<endl; 
 } 
}
if(s1!=1)
{
cout<<"昨晚是平安夜，没有死人"<<endl;
}   //判断昨晚有无死人 
if(c[4]==0)
{
cout<<"猎人可带走一人(1,2,4,5)"<<endl;
if(a==4)
{
cin>>l;
if(l>=1&&l<=5)
{
c[l-1]=0;
}
else
{
cout<<"输入错误，自动视为放弃！"<<endl;
}
}  //猎人执行(玩家) 
else
{
cout<<"你不能动！I am looking you!"<<endl;
l1=rand()%2+1;
if(l1==1)
{
c[l1-1]=0;
}
}//猎人执行(系统) 
}
if(c[3]==0)
{
cout<<"小丑胜利！"<<endl;
if(a==3)
{
sl=1;
	cout<<endl<<"获得成就：自杀高手！"<<endl<<endl;
	cs=cs+1;
}
}    //小丑死亡，小丑胜利 
if(c[2]==0&&c[3]==0&&c[4]==0&&c[5]==0)
{
cout<<"狼人胜利！"<<endl;
if(a==1)
{
cout<<endl<<"获得成就:杀人犯！判刑3年！"<<endl<<endl;
cs++;
sl=1;
}
}   //狼人杀死其他所有人(除小丑外)，狼人胜利 
if(c[1]==0)
{
cout<<"平民胜利！"<<endl;
if(a!=1)
{
cout<<endl<<"获得成就:推理侦探!"<<endl<<endl;
cs+=1;
sl=1;
}
}   //如果狼人死亡，平民胜利 
if(c[a-1]==0&&a!=3)
{
cout<<"你死了，游戏失败！"<<endl<<endl<<"获得成就：花式死亡"<<endl<<endl;
cs++;
sb=1;
}  //除小丑外玩家死亡，玩家失败 
if(sl==0&&sb==0)
{
k+=1;
}  //如果既没胜利也没失败，局数加1 
}
}          //5人 
if(x==2)
{
srand(time(0));
a=rand()%7+1;
while(sl==0&&sb==0)
{
system("pause");
system("cls");
cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"你的身份是：";
if(a==1)
{
cout<<"狼人"<<endl<<"你的任务是：杀掉其他人"<<endl;
 } 
 else
 {
if(a==2)
{
cout<<"女巫"<<endl<<"你的任务是：救人或杀人（毒药和解药只能用一次）"<<endl;
 } 
 else
 {
if(a==3)
{
cout<<"小丑"<<endl<<"你的任务是：被投出局（Be carful!我命由程序不由我！）"<<endl;
 } 
 else
 {
 	if(a==4)
 	{
 cout<<"猎人"<<endl<<"你的任务是：死后能带走一个人"<<endl;	
	 }
	 else
	 {
	 	if(a==5)
	 	{
cout<<"平民1"<<endl<<"你的任务是：顽强地活下去！&任人宰割"<<endl;		 	
		 }
else
{
if(a==6)
{
cout<<"平民2"<<endl<<"你的任务是:顽强地活下去！&任人宰割"<<endl;
}
else
{
cout<<"旁观者"<<endl<<"你的任务是：吃瓜！"<<endl;
}
}
	 }
 }
 }
 }    //分配身份 
 cout<<"第"<<k<<"局"<<endl;
 system("pause");
 system("cls");
 cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"天黑请闭眼！"<<endl<<"狼人请睁眼！请选择你要杀的人(1~7)"<<endl;
if(a==1)
{
cin>>b;
if(b>=1&&b<=7)
{
c[b-1]=0;
}
else
{
cout<<"输入错误！视为放弃！"<<endl;
}
}     //狼人执行(玩家) 
 else
 {
cout<<"你不能动！I am looking you!";
b1=rand()%5+1;
c[b1-1]=0;
 }     //狼人执行(系统) 
cout<<"狼人请闭眼！"<<endl;
system("pause");
system("cls");
cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"女巫请睁眼"<<endl ;

for(i=1;i<=7;i++)
{
if(c[i-1]==0)
{
s=i;
}
 }     //判断有无死人 
if(a==2)
{
if(j==0)
{
cout<<"解药：0"<<endl;
}
else
{
cout<<"解药：1"<<endl;
}
if(d==0)
{
cout<<"毒药：0"<<endl;
}
else
{
cout<<"毒药：1"<<endl;
}    //显示解药与毒药瓶数 
if(s==0)
{
cout<<"昨晚没死人"<<endl;
}
else
{
cout<<"昨晚死了一个人，是否用解药救人？ 要(1键)  不要(2键)(注意：解药只有1瓶)"<<endl;
if(j==1)
{
cin>>j1;
if(j1==1)
{
c[s-1]=1;
j=0;
}
else
{
if(j1!=1||j1!=2)
{
cout<<"输入错误，自动视为放弃！";
}
}
	}	
else
{
cout<<"解药没了！"<<endl; 
}
cout<<"是否用毒药杀人？ 要(1键)  不要(2键)(注意：毒药只有1瓶)"<<endl;
if(d==1)
{
cin>>d1;
if(d1==1)
{
cout<<"请问你要杀几号？(1~7)"<<endl;
cin>>d3;
if(d3>=1&&d3<=7)
{
c[d3-1]=0;
}
else
{
cout<<"输入错误，自动视为放弃！";
}
}
else
{
if(d1!=2)
{
cout<<"输入错误，自动视为放弃！";
}
}
}
else
{
cout<<"毒药没了！"<<endl;
}
}
}   //女巫执行(玩家) 
else
{
cout<<"你不能动！I am looking you!"<<endl;
j2=rand()%2+1;
if(j2==1)
{
c[s-1]=1;
}
d2=rand()%2+1;
if(d2==1)
{
d4=rand()%5+1;
c[d4-1]=0;
}
}    //女巫执行(系统) 
cout<<"女巫请闭眼"<<endl;
system("pause");
system("cls");
cout<<"               狼人杀"<<endl<<"-----------------------------------"<<endl;
cout<<"天亮请睁眼！"<<endl;
for(i=0;i<5;i++)
{
if(c[i]==0)
{
	s1=1;
cout<<"昨晚死了 "<<i+1<<"号"<<endl; 
 } 
}
if(s1!=1)
{
cout<<"昨晚是平安夜，没有死人"<<endl;
}   //判断昨晚有无死人 
if(c[4]==0)
{
cout<<"猎人可带走一人(1,2,4,5,6,7)"<<endl;
if(a==4)
{
cin>>l;
if(l>=1&&l<=7)
{
c[l-1]=0;
}
else
{
cout<<"输入错误，自动视为放弃！"<<endl;
}
}  //猎人执行(玩家) 
else
{
cout<<"你不能动！I am looking you!"<<endl;
l1=rand()%2+1;
if(l1==1)
{
c[l1-1]=0;
}
}//猎人执行(系统) 
}
if(c[3]==0)
{
cout<<"小丑胜利！"<<endl;
if(a==3)
{
	cout<<endl<<"获得成就：自杀高手！"<<endl<<endl;
	cs=cs+1;
sl=1;
}
}    //小丑死亡，小丑胜利 
if(c[2]==0&&c[3]==0&&c[4]==0&&c[5]==0)
{
cout<<"狼人胜利！"<<endl;
if(a==1)
{
sl=1;
cout<<endl<<"获得成就:杀人犯！判刑3年！"<<endl<<endl;
cs++;
}
}   //狼人杀死其他所有人(除小丑外)，狼人胜利 
if(c[1]==0)
{
cout<<"平民胜利！"<<endl;
if(a!=1&&a!=7)
{
sl=1;
cout<<endl<<"获得成就:推理侦探!"<<endl<<endl;
cs++;
}
}   //如果狼人死亡，平民胜利 
if(c[a-1]==0&&a!=3)
{
cout<<"你死了，游戏失败！"<<endl<<endl<<"获得成就：花式死亡"<<endl<<endl;
cs+=1;
sb=1;
}  //除小丑外玩家死亡，玩家失败 
if(sl==0&&sb==0)
{
k+=1;
}  //如果既没胜利也没失败，局数加1 
}
}    //7人 
cout<<"继续？(y/n):";
cin>>n;
}
while(n=='y');
system("pause");
system("cls");
cout<<"--------------------狼人杀--------------------"<<endl<<"          --------By Ender_Wish "<<endl<<endl<<"     3.0 (测试版)   始于2023.7.12"<<endl<<"----------------------------------------------"<<endl;
cout<<"鸣谢："<<endl<<"程序猿：Ender Wish"<<endl<<"总监：Ender Wish"<<endl<<"组织：MC.Fun工作室"<<endl<<"以及各位玩家"<<endl<<endl<<endl;
cout<<"|-------|"<<endl<<"|工 |作 |"<<endl<<"|-------|"<<"                MC.Fun工作室"<<endl<<"|室 |MC.|"<<endl<<"|---|Fun|"<<endl<<endl<<endl<<"GOODBYE! qwq";//如果胜利或失败，鸣谢  
cout<<"--------------------狼人杀--------------------"<<endl<<"          --------By Ender_Wish "<<endl<<endl<<"     3.0 (测试版)   始于2022.7.12"<<endl<<"欢迎加作者QQ：2134769886或加入QQ群Minecraft聊天群和作者聊天，群号：127451629 致电QQ邮箱号 2134769886@qq.com  也行."<<endl<<"----------------------------------------------"<<endl<<endl<<endl<<endl;
system("pause");
cout<<endl<<"快来看看你今天成绩吧！" <<"获得"<<cs<<"个成就，";
if(cs==0)
{
cout<<endl<<"小白上路！"<<endl<<endl;
}
if(cs>=1&&cs<=3)
{
cout<<endl<<"萌新升级！"<<endl<<endl;
}
if(cs>3&&x==5)
{
cout<<endl<<"咸鱼翻身！"<<endl<<endl;
}
if(cs>3&&cs<5&&x==7)
{
cout<<endl<<"苦力怕爆炸！"<<endl<<endl;
}
if(cs>=5&&x==7)
{
cout<<endl<<"咸鱼翻身！"<<endl<<endl;
}
system("pause");
cout<<endl<<"留言栏"<<endl<<"留下你对我们的评论吧！(必须>=20字，不可以用空格代替,打满后敲回车确认)"<<endl<<"                    |<--此处为20字"<<endl;
for(i=0;i<20;i++)
{
cin>>v[i];
}
cout<<endl<<endl<<"感谢你的评论，我们会更新的！"<<endl<<endl;
system("pause");
cout<<"                    修复日志"<<endl<<endl<<endl<<"2022.12.12  开始编写V2.0(测试版)"<<endl<<endl<<"2023.7.12  完成V2.0(测试版)(但仍有bug)"<<endl<<endl<<"2023.7.12  开始编写V3.0(测试版)"<<endl<<endl<<"2023.8.7  着手修正V2.0(测试版)的bug";
}   
