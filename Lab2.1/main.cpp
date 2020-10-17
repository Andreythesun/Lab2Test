#include <iostream>
#include "Lab2.1.h"
#include "Lab2.1.cpp"

int main()
{
	int i, j = 0;
	char strin[200], strout[200];
	printf("Input a sentence:\n");
	fgets(strin, 199, stdin);
	for (i = 0; strin[i] != '\n'; i++) {
		if (isLetter(strin[i]) == 0 && strin[i] != '\n')
			strin[i] = ' ';
	}
	puts(strin);
	for (i = 0; strin[i] != '\n'; i++, j++) {
		strout[j] = strin[i];
		if (isLetter(strin[i + 1]) == 0 && isLetter(strout[j]) == 1) {
			if (vowcheck(strout[j]) != 1) {
				//strout[j] = '&';
				while (isLetter(strout[j]) == 1 && isLetter(strout[j - 1]) == 1)
				{
					strout[j] = ' ';
					if (j != 0)
					{
						j--;
					}
				}
				strout[j] = ' ';
				j--;
				if (j > 0)
					j--;
			}
		}
	}
	strout[j] = 0;
	puts(strout);
	return 0;
}

