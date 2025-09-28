#define _c 4.0f/3.0f//定义常量
#include<stdio.h>
int main()
{ int x = 1, y = 2;
    printf("-%9.3d\n", x + y);//%9表示占9个字符宽度，.3表示至少3位数，不足补0
    printf("%-9.3d\n", x + y);//%-表示→对齐，默认左对齐
    
    return 0;
}