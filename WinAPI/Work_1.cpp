#include <windows.h>
#include <iostream>

void ConsoleRectangle()
{
    HWND hwnd = GetConsoleWindow();
    HDC dc = GetDC(hwnd);

    int i = 0;
    char c[1024];
    sprintf_s(c, "My super text!!!");
    do
    {
        i++;
        SelectObject(dc, GetStockObject(DC_BRUSH));
        SetDCBrushColor(dc, RGB(255, 255, 255));
        SelectObject(dc, GetStockObject(DC_PEN));
        SetDCPenColor(dc, RGB(255, 0, 255));
        Rectangle(dc, 0, 0, 640, 300);

        SelectObject(dc, GetStockObject(DC_BRUSH));
        SetDCBrushColor(dc, RGB(0, 255, 0));
        Rectangle(dc, 0 + i, 0, 100 + i, 100);

        TextOutA(dc, 20, 50, c, strlen(c) + 1);

        Sleep(10);
    }     while (GetKeyState(VK_ESCAPE) >= 0);

    std::cout << "\n\n\n\n\n";
}
