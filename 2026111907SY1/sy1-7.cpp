#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰\n");
    // 测试案例
    // 2,2.5,3.1415926,8
    // 声明变量
    int a;
    float b;
    double  c;
    char d[20];
    // 步骤1：按逗号分隔读取整数、浮点数、双精度数和字符串。
    if (scanf("%d,%f,%lf,%19s", &a, &b, &c, d) != 4) {
        return 1;
    }
    // 步骤2：输出各项，并将 d 首字符的 ASCII 码值计入总和。
    printf("a = %d\nb = %g\nc = %.7f\nd = %s\nsum = %.7f", a, b, c, d, a + b + c + (unsigned char)d[0]);
    return 0;
}