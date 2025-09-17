#include <stdio.h>
int main()
{
    int a, b;
    float c, d;
    scanf("%d %d %f %f", &a, &b, &c, &d);//检测键盘输入
    printf("divide %d\n %f", a / b, c / d); // 1. a/b均为整数时代表余数除法 2. 显然%d/n有占位作用，将a/b结果占位
    return 0;
}