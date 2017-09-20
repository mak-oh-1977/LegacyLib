#include "stdafx.h"
#include "LegacyLib.h"

static func_p cb;


int ComOpen(func_p f)
{
	cb = f;

	cb("hello", 5);

	return 0;
}


int ComRecv(unsigned char buff, int len)
{
	return 0;
}

