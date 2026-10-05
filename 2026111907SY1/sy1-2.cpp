#include<stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰\n");
    double a, b;
    // 步骤1：读取输入值。
    scanf("请输入销售货款：%lf", &a);
    // 步骤2：按题目公式计算结果。
    b = 2000 + a * 0.18;
    // 步骤3：输出计算结果。
    printf("工资为：%.2f", b);
    return 0;

}