#include <cstdio>
#include <type_traits>
#include <iostream>
#include <string>
using namespace std;


void strDemo(){
    char* str = "I love China!" ;   // 直接输出str时，非输出地址值，是因为指针指向了字符串常量(结合内存管理来讲)去了，输出*str,也会是很小的值；所以会直接输出字符串常量而非指针本身的地址；非要输出常量地址，就得前面加一个(void*)
    char str2[] = "I love China!";
    printf("str:%s | *str:%d | (void*)str:%d| str2:%s | &str2:%d\n" , str ,*str, (void*)str , str2 , &str2 );

    int a = 99;
    int* p = &a;
    printf("p:%d\n" ,p);

    for (int i = 0; i < sizeof("I love China!"); ++i) {
        printf("下标为：%d result value:%c\n" , i,str[i]);   // 这个i，其实更确切的，是代表偏移量！！！
    }
    char* strP1 = &(*str);
    printf("*strP1:%c ,%c" , *strP1 , *(strP1+2));  // 此处就更能知道了！

}



// 字符数组与字符指针
int main(){
    strDemo();
    return 0;
}

