#include <iostream>

//
// 02ָ�����
//
int globalVariables_a = 1;
int globalVariables_b = 2;
int globalVariables_c = 3;  // ȫ�ֱ�����static���� �����ڴ�ģ���������ϵ�

/*ָ�볣�� ����ָ��*/
//c�ṩ�����ֳ�������������1.������ĵ�ַ���ڴ��е����ݣ�2.�������޸ĵ�ַ
//ָ�볣����Ŀ�ģ��̻���ַ�����ǿ��Բ�����ַָ���ڲ�������
int test1(){
    int a,b;
    int* const p = &a;  // ָ�볣��
    *p = 9;// �����ɹ�
//    p = &b; // ��������
}
// ����ָ�룬Ŀ�ģ��̻���ַ�ڲ��������ݣ����ǿ��Բ�����ַ
int test2(){
    int a,b;
    const int* p = &a;  // ����ָ��
    p = &b; // �����ɹ�
//    *p = 9; // ��������
}

int main(){
    int local_a = 15;
    int local_b = 255;
    int local_c = 315;    // �ֲ����� �����ջ�У�ջ���ڴ�ģ���������µ�
    printf("local_a:%d    ,local_b:%d    ,local_c:%d\n", &local_a, &local_b, &local_c);
    /*�鿴ȫ�֡��ֲ����������Կ���*/
   /* printf("globalVariables_a:%d    ,globalVariables_b:%d    ,globalVariables_c:%d\n"
           , &globalVariables_a, &globalVariables_b, &globalVariables_c);    // ���Թ۲쵽��һ�����Կ��ٵĹ��̣�intռ4���ֽڣ�*/
   /* printf("local_a:%d    ,local_b:%d    ,local_c:%d\n", &local_a, &local_b, &local_c);    // ���Թ۲쵽��һ�����Կ��ٵĹ��̣�intռ4���ֽڣ�


    // Ϊ�������ǽ��м�Ӷ���ֵ���в������ܷ������ǲ�����ַ,���Ը���һ�������������ȡַ�����:&
    int *p = &local_a;    // int char�����;���ָ���ƶ�λ��
    p = p - 2;
//    printf("local_a address:%d\n" , p);
    // Ϊ���ܹ�ȡ�������ֵ���ֳ���һ��ȡֵ�����:*
    printf("p value:%d\n" , *p);    // return 315����c��ֵ*/

   /*ָ������ *ȡֵ*/
   /*int *p = &local_b;
    printf("p :%d\n",p);
    printf("++p :%d\n",++p);
    *++p;    // ���ƶ�����ȡֵ *��p++��
    printf("*++p :%d\n",*++p);
    printf("*++p :%d\n",*++p);
    *--p;    // ���ƶ�����ȡֵ *��p--��
    printf("--p:%d\n",--p);
    printf("*--p:%d\n",*--p);
    *p--;    // ��ȡֵ�����ƶ�
    printf("*p--:%d\n",*p--);
    *p++;    // ��ȡֵ�����ƶ�
    printf("*p++:%d\n",*p++);
    ++*p;    // ��ȡֵ������
    printf("++*p:%d\n",++*p);
    --*p;    // ��ȡֵ������
    printf("--*p:%d\n",--*p);*/
   /*ָ������ ����  ֻ��ȥ�������ǵĵ�ַ���ĸ���*/
   /*char* p1= reinterpret_cast<char *>(&local_a);
   char* p2= reinterpret_cast<char *>(&local_c);
   int* p3 = reinterpret_cast<int *>(p1 - p2);  // ��p1,p2��λ��char*ʱreturn8����Ϊlocal_a��local_c������int��λ
   int v3 = p1-p2;
   printf("p1:%d\n" , p1);
    printf("*p1:%d\n" , *p1);
    printf("&p1:%d\n" , &p1);

    printf("p3 value:%dL\n" , p3);
    printf("v3 value:%dL\n" , v3);
*/


   /*��ַ0*/
   /*int* p5 = NULL;
   printf("p5 value:%d",p5);    // return 0 ����malloc��������ʱ*/

   /*����ָ��*/
   /*int i = 10;  // ������һ�����ͱ���
   int* p = &i; // ������һ��ָ��ָ�����������
   int** p1 = &p;   // ������һ������ָ��ָ��pָ��
   int* c = reinterpret_cast<int *>(0x61fe08);  // c�����ֶ����٣���ҵ���ϲ��Ƽ�
   *c = 100;
   int d = 3;
   int* e = &d-1;
   *e = 99;
   int f;   // ��������һ���ȸ���һ����ַ��ֵ�ˣ���ʱ�½�������f����ǰ��ֵ��
   printf("i��ַ:%d,pֵ��%d,p��ַ��%d,p1ֵ��%d,p1��ַ��%d,c��%d\n" , &i , p , &p , p1 ,&p1,c);
    printf("i��ַ:%d,pֵ��%d,p��ַ��%d,p1ֵ��%d,p1��ַ��%d,c��%d\n" , &i , p , &p , p1 ,&p1,c);
    printf("d��ַ:%d,eָ��ָ���ֵ:%d,fֵ:%d��f��ַ��%d\n",&d , e , f ,&f);*/


   /*malloc����  �ֶ��ڴ����*/
   /*long len = 128*1024*1024;
   char* p = static_cast<char *>(malloc(len));*/






    return 0;
}

