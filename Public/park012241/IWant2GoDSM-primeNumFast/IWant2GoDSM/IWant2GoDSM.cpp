// IWant2GoDSM.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	bool key = false;
	for (int i = 2; i < 50; i++)
	{
		key = false;
		for (int j = 2; j <= (i/2); j++)
		{
			if (i%j == 0) {
				key = true;
			}
		}
		if (!key)
		{
			printf("%4d\n", i);
		}
	}
    return 0;
}
