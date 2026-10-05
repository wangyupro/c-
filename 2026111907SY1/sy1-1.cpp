#include <cstdio>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 步骤1：输出学号和姓名。
    std::printf("2026111907王钰\n");

    // 步骤2：按行保存图案内容。
    const char* const matrix[] = {
        "y y          y y",
        " y y        y y ",
        "  y y      y y  ",
        "   y y    y y   ",
        "    y y  y y    ",
        "     y yy y     ",
        "       yy       ",
        "       yy       ",
        "       yy       ",
        "       yy       ",
        "       yy       ",
        "       yy       ",
        "       yy       ",
        "       yy       ",
        "       yy       ",
        "       yy       "
    };

    // 步骤3：逐行输出图案。
    constexpr int rows = sizeof(matrix) / sizeof(matrix[0]);
    for (int i = 0; i < rows; ++i) {
        std::printf("%s\n", matrix[i]);
    }

    return 0;
}