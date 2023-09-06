#include <iostream>

//
// 02指针详解
//
int globalVariables_a = 1;
int globalVariables_b = 2;
int globalVariables_c = 3;  // 全局变量、static变量 堆在内存模型中是向上的

/*指针常量 常量指针*/
//c提供了两种常量方案进来：1.不允许改地址在内存中的数据，2.不允许修改地址
//指针常量，目的：固化地址，但是可以操作地址指向内部的内容
int test1(){
    int a,b;
    int* const p = &a;  // 指针常量
    *p = 9;// 操作成功
//    p = &b; // 操作错误
}
// 常量指针，目的：固化地址内部数据内容，但是可以操作地址
int test2(){
    int a,b;
    const int* p = &a;  // 常量指针
    p = &b; // 操作成功
//    *p = 9; // 操作错误
}

int main(){
    int local_a = 15;
    int local_b = 255;
    int local_c = 315;    // 局部变量 存放在栈中，栈在内存模型中是向下的
    printf("local_a:%d    ,local_b:%d    ,local_c:%d\n", &local_a, &local_b, &local_c);
    /*查看全局、局部变量的线性开辟*/
   /* printf("globalVariables_a:%d    ,globalVariables_b:%d    ,globalVariables_c:%d\n"
           , &globalVariables_a, &globalVariables_b, &globalVariables_c);    // 可以观察到是一个线性开辟的过程（int占4个字节）*/
   /* printf("local_a:%d    ,local_b:%d    ,local_c:%d\n", &local_a, &local_b, &local_c);    // 可以观察到是一个线性开辟的过程（int占4个字节）


    // 为了让我们进行间接对于值进行操作，能否让我们操作地址,所以给了一个运算符出来，取址运算符:&
    int *p = &local_a;    // int char等类型决定指针移动位置
    p = p - 2;
//    printf("local_a address:%d\n" , p);
    // 为了能够取到里面的值，又出来一个取值运算符:*
    printf("p value:%d\n" , *p);    // return 315，即c的值*/

   /*指针运算 *取值*/
   /*int *p = &local_b;
    printf("p :%d\n",p);
    printf("++p :%d\n",++p);
    *++p;    // 先移动，再取值 *（p++）
    printf("*++p :%d\n",*++p);
    printf("*++p :%d\n",*++p);
    *--p;    // 先移动，再取值 *（p--）
    printf("--p:%d\n",--p);
    printf("*--p:%d\n",*--p);
    *p--;    // 先取值，后移动
    printf("*p--:%d\n",*p--);
    *p++;    // 先取值，后移动
    printf("*p++:%d\n",*p++);
    ++*p;    // 先取值后运算
    printf("++*p:%d\n",++*p);
    --*p;    // 先取值后运算
    printf("--*p:%d\n",--*p);*/
   /*指针运算 减法  只会去计算它们的地址差额的个数*/
   /*char* p1= reinterpret_cast<char *>(&local_a);
   char* p2= reinterpret_cast<char *>(&local_c);
   int* p3 = reinterpret_cast<int *>(p1 - p2);  // 当p1,p2单位是char*时return8，因为local_a、local_c差两个int单位
   int v3 = p1-p2;
   printf("p1:%d\n" , p1);
    printf("*p1:%d\n" , *p1);
    printf("&p1:%d\n" , &p1);

    printf("p3 value:%dL\n" , p3);
    printf("v3 value:%dL\n" , v3);
*/


   /*地址0*/
   /*int* p5 = NULL;
   printf("p5 value:%d",p5);    // return 0 ，当malloc不够分配时*/

   /*空悬指针*/
   /*int i = 10;  // 定义了一个整型变量
   int* p = &i; // 定义了一个指针指向这个给变量
   int** p1 = &p;   // 定义了一个二级指针指向p指针
   int* c = reinterpret_cast<int *>(0x61fe08);  // c允许手动开辟，但业务上不推荐
   *c = 100;
   int d = 3;
   int* e = &d-1;
   *e = 99;
   int f;   // 特意于上一步先给下一个地址赋值了，此时新建出来的f被提前赋值了
   printf("i地址:%d,p值：%d,p地址：%d,p1值：%d,p1地址：%d,c：%d\n" , &i , p , &p , p1 ,&p1,c);
    printf("i地址:%d,p值：%d,p地址：%d,p1值：%d,p1地址：%d,c：%d\n" , &i , p , &p , p1 ,&p1,c);
    printf("d地址:%d,e指针指向的值:%d,f值:%d，f地址：%d\n",&d , e , f ,&f);*/


   /*malloc函数  手动内存分配*/
   /*long len = 128*1024*1024;
   char* p = static_cast<char *>(malloc(len));*/






    return 0;
}

