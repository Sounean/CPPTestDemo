#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

/*
 * 题目七
 * */
int countWanQuanshu(int x){
    int sum=0;
    for (int j = 1; j < x-1; ++j) {
        if(x%j == 0) sum=sum+j;
    }
    return sum;
}

int main1() {
/*
 * dowhile 循环课
 * */
/*题目1：while的写法   讲义1p102*/
//    int n,i,sum=0;
//    cin>>n;
//    i=1;sum=0;
//    do{
//        sum=sum+i;
//        i++;
//    }while (i<=n);
//    cout<<sum<<endl;

/*题目2：dowhile的写法*/
//    int i=1,n,sum=0;
//    cin>>n;
//    do {
//        sum=sum+i;
//        i++;
//    }while (i<=n);
//    cout<<sum<<endl;


// 题目3：随堂练习1  答案B
//    int x=0;
//    do{
//        x++;x=x*x;
//    }while (!x);

// 题目4：随堂练习2  答案C
//   int a=6;
//   do{
//       a=a-2;
//       printf("%d",a);
//   }while(--a);

// 题目5：随堂联系3  答案3
//        int a,num=16118,count=0;
//        do{
//            a=num%10;
//            if(a==1)count++;
//            num=num/10;
//        }
//            while (num);
//            printf("count=%d",count);

// 信奥编程一本通  题目6：1.求阶乘的和,如输入n，则计算n的阶乘，并输出。例子：（输入3，则阶乘为1*1+2*1+3*2*1）
/*int n;
long long s=0,t=1;
scanf("%d",&n);
  for( int i=1;i<=n;++i){
    t*=i;
    s+=t;
}
printf("%lld\n",s);*/


// 信奥编程一本通  题目7：2.求出e的值 利用公式e=1/(0!)+1/(1!)+1/(2!)+...+1/(n!)
/*int n;
long long t=1;
double e=1;
scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        t*=i;
        e+=1.0/t;
    }
    printf("%.10lf\n",e);   // lf 表示浮点数*/

// 信奥编程一本通  题目8：3.计算多项式的值,多项式格式为：x的n次方+x的n-1次方+...+x的0次方
/*int n;
float s=1,x,t=1;
scanf("%f%d",&x,&n);
for(int i=1;i<=n;++i){
    t*=x;
    s+=t;
}
printf("%.2f\n",s);*/

// 信奥编程一本通  题目9：4.与7无关的数,输入一个小于100的正整数n，计算从1到n中，a.没有在某一位上数字为7且b.不被7整除的数称为与7无关的数，求1到n建所有与7无关正整数的平方和.
/*int n;
long long s=0;
cin>>n;
for(int i;i<=n;++i){
    if (i%7!=0 && i/10!=7 && i%10!=7){
        s+=i*i;
    }
}
cout<<s<<endl;*/

// 信奥编程一本通  题目10：5.数1的个数 给定一个十进制的正整数n(1<=n<=10000),写下从1到n的所有整数，然后数一下其中出现的数字"1"的个数：
// 如写2：出现1，2,1个“1“，写12，有5个”1“
/*int n;// 输入的值
int s=0;    // 总出现次数
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=i;
    while (a!=0){
        int j=a%10; // 不断看最左边那位有没有1
        a=a/10;
        if (j==1)s++;
    };
}
printf("%d\n",s);*/

// 信奥编程一本通  题目11：7画矩形  根据4个参数(x,y,a,flag)画矩形：前两个分别代表矩形的宽高，第三个a表示输出的字符，第四个flag代表矩形是否实心（1表示实心，0表示空心）
/*char a; // 输出的字符
int x,y,flag;
cin>>x>>y>>a>>flag;
if(flag){   //实心
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cout<<a;
        }
        cout<<endl;
    }
} else {    // 空心
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(i!=1 && i!=x && j!=1 && j!=y){
                cout<<" ";
            } else{
                cout<<a;
            }
        }
        cout<<endl;
    }
}*/

/*
 * string字符串课
 * */

/*
 * 字符串专题
 * */
// 题目1：读入未知数目的string对象，每次输出对应的string对象编号和内容
/*string str;
int tot=0;
while(cin>>str){
    cout<<++tot<<""<<str<<endl;
}*/

// 题目2： 输入一串字符串中所有出现的大小写字母互换，大写变小写，小写变大写 ；最后输出   getline（cin,str）
/*string s;   //char[]
getline(cin,s);
//string s = "A b  ccdDD";
for(int i=0;i<s.size();++i){    // 遍历
    if(s[i] >= 'A' && s[i]<='Z'){
        s[i] += ('a'-'A');
    } else if (s[i]>='a' && s[i]<='z'){
        s[i] -= ('a'-'A');
    }
}
cout<<s<<endl;*/

// 题目3：输入两串字符串s1,s2，怎么让原来他们会相互比较的，变成忽略大小写？ 且答案输出>、<、=
// 思路：统一转换成小写/大写进行比较
/*string s1;
getline(cin,s1);
string s2;
getline(cin,s2);
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i]>='a' && s1[i]<='z'){
            s1[i] -= ('a'-'A');
        }
    }
    for (int i = 0; i < s2.size(); ++i) {
        if (s2[i]>='a' && s2[i]<='z'){
            s2[i] -= ('a'-'A');
        }
    }

    if(s1>s2){
        printf("<");
    } else if(s1==s2){
        printf("=");
    } else{
        printf(">");
    }*/

// 题目4：输入两串字符串s1,s2，怎么让原来他们会相互比较的，变成忽略大小写和空格？ 且答案输出>、<、=
/*string s1;
getline(cin,s1);
string s2;
getline(cin,s2);
string p="";
string q="";
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i]>='a' && s1[i]<='z'){
            s1[i] -= ('a'-'A');
        }
        if (s1[i]!=' ')p+=s1[i];
    }
    for (int i = 0; i < s2.size(); ++i) {
        if (s2[i]>='a' && s2[i]<='z'){
            s2[i] -= ('a'-'A');
        }
        if (s2[i]!=' ')q+=s2[i];

    }

    if(p>q){
        printf("<");
    } else if(p==q){
        printf("=");
    } else{
        printf(">");
    }*/

// 题目5：字符串移位问题：对一个字符串来说，将他的第一个字符移动到末尾形成新的字符串称为一次移位操作，判断两个输入的字符串s1,s2是否是移位后产生的
// abc    bc+a=bca      bca    cab
// 大字符串.find("需要被查找的子字符串' , 0);   aabcd   wwfwf -1
//新的字符串 = 大字符串.substr(起始索引，结束索引)     ”abcdefg“
// ，若是返回true，否则返回false.
//思路  find函数 substr函数
string s1,s2;
cin>>s1>>s2;
for(int i=0;i<=(s1.size()-1);++i){
    char z=s1[0];
    s1=s1.substr(1,(s1.size()-1));
    s1=s1+z;
    if(s1.find(s2,0) != -1){
        cout<<"true"<<endl;
        return 0;
    }
}
cout<<"false"<<endl;

// 题目六：输入一个字符串s，然后将其的所有a字符串都换成b字符串，最后输出。
/*string s,a,b;
getline(cin,s);s=" "+s+" ";
getline(cin,a);a=" "+a+" "; // 要被替换的
getline(cin,b);b=" "+b+" "; // 要换上的
int len = a.length();
int k=s.find(a,0);  // 找到a所在的字符串中的下标
while (k!=-1){
    s.erase(k,len); // 通过下标k删除a字符串
    s.insert(k,b);  // 加入b
    k=s.find(a,0);
}
cout<<s.substr(1,s.length()-1)<<endl;*/


/*函数*/
// 题目七：求正整数2和100之间的完全数
/*int num=6;
for(int i=num;i<=num;i++){
    if(countWanQuanshu(i) == num){
        cout<<i<<endl;
        return 0;
    }
}
    cout<<0<<endl;*/

// 题目八：求最大值：m = max(a,b,c)/max(a+b,b,c)*max(a,b,b+c)  他们的对大值。（书上）

// 讲实际工作中为什么要用到？



return 0;
}


