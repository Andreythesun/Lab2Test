#include "Lab2.1.h"

namespace lab2 {
	int vowcheck(char x)
	{
		char vow[] = { 'A','E','Y','U','I','O' };
		int j;
		for (j = 0; vow[j] != 0; j++) {
			if (x == vow[j] || x == vow[j] + 32) {
				return 1;
			}
		}
	}

	int isLetter(char x)
	{
		return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
	}
}