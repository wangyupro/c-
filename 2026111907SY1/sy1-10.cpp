#include<stdio.h>
#include <cmath>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰\n");
    int x, y, z;
    double s;
    // 步骤1：读取三条边，输入不完整时结束程序。
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        return 1;
    }
    // 步骤2：判断三条边是否满足三角形两边之和大于第三边。
    if (x + y > z && x + z > y && y + z > x) {
        // 步骤3：计算半周长，并用海伦公式求面积。
        s = (x + y + z) / 2.0;
        printf("面积: %.2f\n", sqrt(s * (s - x) * (s - y) * (s - z)));
    } else {
        // 步骤4：不满足三角形条件时输出提示。
        printf("不能构成三角形\n");
    }
}