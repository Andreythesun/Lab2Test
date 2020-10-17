#include "pch.h"
#include "../Lab2.1/Lab2.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab2UnitTests {
	TEST(IsLetterTests, HandlesCapitals) {
		for (char i = 65; i <= 90; ++i) {
			EXPECT_EQ(lab2::isletter(i), 1);
		}
	}

	TEST(IsLetterTest, HandlesCapitals) {
		for (char i = 97; i <= 122; ++i) {
			EXPECT_EQ(lab2::isletter(i), 1);
		}
	}

	TEST(VowcheckTests, HandlesVowels) {
		char vow[] = { 'A','E','Y','U','I','O' };
		for (int i = 0; i <= 5; ++i) {
			EXPECT_EQ(lab2::vowcheck(vow[i]), 1);
			EXPECT_EQ(lab2::vowcheck(vow[i+32]), 1);
		}
	}

	TEST(VowcheckTests, HandlesVowels) {
		char vow[] = { 'B','C','D','X','K','S' };
		for (int i = 0; i <= 5; ++i) {
			EXPECT_NE(lab2::vowcheck(vow[i]), 1);
			EXPECT_NE(lab2::vowcheck(vow[i + 32]), 1);
		}
	}
}