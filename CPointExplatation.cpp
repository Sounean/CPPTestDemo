//
// Created by Administrator on 2023/9/4.
//
#include <stdio.h>
#include <cstdlib>

int main(){
    // 0.�����ڴ�
//    int var1 = 10;  // ��ʵ�����������ڴ棬һ����10������������֪���ڴ��У���һ�����ַ

    //1.��ֵ
//    int *p; //����ָ�����
//    p=&var1;
//    printf("var1 value:%d |var1 address: %d\n",var1,p);
//
//    *p=250;
//    printf("vcar1 value:%d \n",var1);

    //3.�������͵ı��ʣ�ʵ���Ͼ���ȥ�̶�Ҫ��ȡ��������С
    // int4���ֽ�
    char *pTmp = (char*)malloc(102400);
    // ���е����ݶ��Ƕ�����
    // �����ݵĵ�λ��byte
    // �������;����ռ��С
    *pTmp = 100;
    printf("p length:%d",sizeof(int*));


//    // char ֵ����
//    char a; // ջ���ռ�
//    // char* ָ��������ͣ�Ŀ����Ϊ��ȥװ��ַ����Ŀ����ȡ4/8
//    char* p;
//    int b;
//
//    //&ȥȡ ַ
//    printf("a��ֵ��,%d,a��ַ,%d,b��ַ,%d,c��ַ,%d\n" ,a, &a , &p , &b);
}
