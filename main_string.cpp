#include <cstdio>
#include <type_traits>
#include <iostream>
#include <string>
using namespace std;


void strDemo(){
    char* str = "I love China!" ;   // ֱ�����strʱ���������ֵַ������Ϊָ��ָ�����ַ�������(����ڴ��������)ȥ�ˣ����*str,Ҳ���Ǻ�С��ֵ�����Ի�ֱ������ַ�����������ָ�뱾��ĵ�ַ����Ҫ���������ַ���͵�ǰ���һ��(void*)
    char str2[] = "I love China!";
    printf("str:%s | *str:%d | (void*)str:%d| str2:%s | &str2:%d\n" , str ,*str, (void*)str , str2 , &str2 );

    int a = 99;
    int* p = &a;
    printf("p:%d\n" ,p);

    for (int i = 0; i < sizeof("I love China!"); ++i) {
        printf("�±�Ϊ��%d result value:%c\n" , i,str[i]);   // ���i����ʵ��ȷ�еģ��Ǵ���ƫ����������
    }
    char* strP1 = &(*str);
    printf("*strP1:%c ,%c" , *strP1 , *(strP1+2));  // �˴��͸���֪���ˣ�

}



// �ַ��������ַ�ָ��
int main(){
    strDemo();
    return 0;
}

