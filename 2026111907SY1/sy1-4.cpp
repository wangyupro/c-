#include<stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰");
    double c, f;
    // 步骤1：读取摄氏温度。
    scanf("%lf", &c);
    // 步骤2：将摄氏温度换算为华氏温度。
    f = c * 9 / 5 + 32;
    // 步骤3：输出华氏温度。
    printf("华氏温度为：%.1f", f);
    return 0;

}