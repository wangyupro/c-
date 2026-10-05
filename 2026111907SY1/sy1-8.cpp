#include <stdio.h>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstring>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 5928
    printf("2026111907王钰\n");

    // 变量声明
    int input;
    char str[20];

    // 步骤1：读取一个整数。
    scanf("%d", &input);

    // 步骤2：将整数转换为字符串并反转字符顺序。
    snprintf(str, sizeof(str), "%d", input);
    // 字符串内容方向取反
    std::reverse(str, str + std::strlen(str));
    // 步骤3：输出反转后的字符串。
    printf("字符串: %s\n", str);

    return 0;
}