#include <Windows.h>
#include <iostream>

int main()
{
	while (1) {
		HDC hdc = GetDC(0);
		int x = SM_CXSCREEN;
		int y = SM_CYSCREEN;
		int w = GetSystemMetrics(0);
		int h = GetSystemMetrics(1);
		BitBlt(hdc, rand() % 222, rand() % 222, w, h, hdc, rand() % 222, rand() % 222, SRCAND);
		Sleep(10);
		ReleaseDC(0, hdc);
	}
}