#include<stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰");
    double c, f;
    // 步骤1：读取华氏温度。
    scanf("%lf", &f);
    // 步骤2：将华氏温度换算为摄氏温度。
    c = (f - 32) * 5 / 9;
    // 步骤3：输出摄氏温度。
    printf("%.1f", c);
    return 0;

}