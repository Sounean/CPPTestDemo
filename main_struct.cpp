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

    // ֵ����   int short long float double
    char a; // ջ���ռ�
    // ָ�����  Ŀ����λ��װ��ַ
    char* p;
    int b;

    // &ȥȡַ
    // ÿ����������һ����ַ����ַȥ������
    printf("a��ַ��%d,p��ַ:%d ,c��ַ:%d\n" , &a , &p , &b);


  /*  int len = sizeof(Person);
    Person *p = static_cast<Person *>(malloc(len));
    p->age = 18;
    char *address = (char *) &"zhangsan";
    printf("Person length: %d\n",len);  // �����ڴ����
    printf("Person age: %d\n", p->age);*/

    return 0;
}

