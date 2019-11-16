// TestCommand.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <malloc.h>


int F1(int a)
{
	int b = 5;

	if(b == 5)
		b = F1(b);

	int c = 4;

	return c;
}


int _tmain(int argc, _TCHAR* argv[])
{
//	F1(3);

	int* p = new int[100];

	delete[] p;

	int* pp = (int*)malloc(100);

	 
	return 0;
}

