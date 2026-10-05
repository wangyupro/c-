#include<stdio.h>
#include <windows.h>
#define Pl 3.1415926
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰\n");
    int r;
    double c, s;
    // 步骤1：读取圆的半径。
    scanf("%d", &r);
    // 步骤2：计算圆周长和面积。
    c = 2 * Pl * r;
    s = Pl * r * r;
    // 步骤3：输出圆周长和面积。
    printf("%.4f %.4f", c, s);
    return 0;
}