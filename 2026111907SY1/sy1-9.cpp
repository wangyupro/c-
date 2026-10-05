#include<stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰\n");
    int x;
    // 步骤1：读取整数 x。
    scanf(" %d", &x);
    // 步骤2：计算并输出 x 的四倍。
    printf("%d", 4 * x);
    return 0;
}