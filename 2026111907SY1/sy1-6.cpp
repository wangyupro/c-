#include <stdio.h>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstring>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("2026111907王钰\n");

    // 变量声明
    int input, a, b, c;
    char str[20];

    // 步骤1：读取一个整数。
    scanf("%d", &input);
    // 步骤2：分别取出百位、十位和个位。
    a = input / 100;
    b = input / 10 % 10;
    c = input % 10;
    // 步骤3：输出百位、十位和个位。
    // 取百位数
    printf("258的百位数是：%d\n", a);
    // 取十位数
    printf("258的十位数是：%d\n", b);
    // 取个位数
    printf("258的个位数是：%d\n", c);
    // 步骤4：将整数转成字符串并反转字符顺序。
    snprintf(str, sizeof(str), "%d", input);
    // 字符串内容方向取反
    std::reverse(str, str + std::strlen(str));
    printf("258的逆序数是: %s\n", str);
    // 步骤5：将反转后的字符串转回整数并输出其两倍。
    int value = std::stoi(str);
    printf("258的逆序数乘2是: %d\n", value * 2);

    // const std::string digits = std::to_string(input);
    // printf("%c\n", digits.c_str());
    // // 负号保留在开头，只反转数字部分
    // std::size_t i = digits.size();
    // while (i > (digits[0] == '-' ? 1u : 0u)) {
    //     std::printf("%c", digits[--i]);
    // }
    // std::printf("\n");

    return 0;
}