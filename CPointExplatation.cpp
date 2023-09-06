//
// Created by Administrator on 2023/9/4.
//
#include <stdio.h>
#include <cstdlib>

int main(){
    // 0.开辟内存
//    int var1 = 10;  // 其实开辟了两块内存，一个放10，放在我们认知的内存中；还一个存地址

    //1.赋值
//    int *p; //定义指针变量
//    p=&var1;
//    printf("var1 value:%d |var1 address: %d\n",var1,p);
//
//    *p=250;
//    printf("vcar1 value:%d \n",var1);

    //3.数据类型的本质，实际上就是去固定要提取的容量大小
    // int4个字节
    char *pTmp = (char*)malloc(102400);
    // 所有的数据都是二进制
    // 提数据的单位是byte
    // 数据类型决定空间大小
    *pTmp = 100;
    printf("p length:%d",sizeof(int*));


//    // char 值变量
//    char a; // 栈区空间
//    // char* 指针变量类型（目的是为了去装地址），目的提取4/8
//    char* p;
//    int b;
//
//    //&去取 址
//    printf("a的值：,%d,a地址,%d,b地址,%d,c地址,%d\n" ,a, &a , &p , &b);
}
