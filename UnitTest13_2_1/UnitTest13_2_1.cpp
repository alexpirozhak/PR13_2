#include "pch.h"
#include "CppUnitTest.h"
#include "../PR13_2/PR13_2.cpp"

#include "../PR13_2/macro.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 5;
			int y = 46;
			int e_maxim = 460;
			int x_kvadr = SQR(x);
			int maxim = MAX(x_kvadr + y + z, x * y * z);

			Assert::AreEqual(e_maxim, maxim);
		}
	};
}
