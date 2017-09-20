// test1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "LegacyLib.h"
#include <Windows.h>

int RecvCb(char* p, int len)
{
	printf(p);

	return 0;
}

int main()
{
	int ret = ComOpen(RecvCb);
	
	while (1)
		Sleep(100);

	return 0;
}

