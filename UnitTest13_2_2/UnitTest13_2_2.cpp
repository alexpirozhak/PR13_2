#include "pch.h"
#include "CppUnitTest.h"
#include "../PR13_2_task2/PR13_2_task2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1322
{
	TEST_CLASS(UnitTest1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[256] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. 2023.\nPhasellus facilisis felis dignissim, tempor risus in, varius massa. Donec tempus eleifend sapien, quis tempor eros laoreet vitae.";
			int alphas = 0, digits = 0, cntrls = 0, puncts = 0, spaces = 0;

			for (int i = 0; i < strlen(str); i++)
			{
				if (isalpha(str[i]))
					alphas++;
				if (isdigit(str[i]))
					digits++;
				if (iscntrl(str[i]))
					cntrls++;
				if (ispunct(str[i]))
					puncts++;
				if (isspace(str[i]))
					spaces++;
			}

			int e_a = 154, e_d = 4, e_c = 1, e_p = 8, e_s = 26;

			Assert::AreEqual(e_a, alphas);
			Assert::AreEqual(e_d, digits);
			Assert::AreEqual(e_c, cntrls);
			Assert::AreEqual(e_p, puncts);
			Assert::AreEqual(e_s, spaces);
		}
	};
}
