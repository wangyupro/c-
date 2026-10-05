#include<stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰");
    double a, b, c;
    double x;
    // 步骤1：读取三个数。
    scanf("%lf %lf %lf", &a, &b, &c);
    // 步骤2：计算三个数的平均值。
    x = (a + b + c) / 3;
    // 步骤3：输出平均值。
    printf("平均数是：%.5f", x);
    return 0;

}
