//
// Created by Administrator on 2023/9/4.
//
#include <stdio.h>
#include <malloc.h>

typedef struct {
    char *name; // 8
    int age;    //4
} Person;

int main(){

    // 值变量   int short long float double
    char a; // 栈区空间
    // 指针变量  目的是位了装地址
    char* p;
    int b;

    // &去取址
    // 每个变量都有一个地址，地址去找数据
    printf("a地址；%d,p地址:%d ,c地址:%d\n" , &a , &p , &b);


  /*  int len = sizeof(Person);
    Person *p = static_cast<Person *>(malloc(len));
    p->age = 18;
    char *address = (char *) &"zhangsan";
    printf("Person length: %d\n",len);  // 产生内存对齐
    printf("Person age: %d\n", p->age);*/

    return 0;
}

