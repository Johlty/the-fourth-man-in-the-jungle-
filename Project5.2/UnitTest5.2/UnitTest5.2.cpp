#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double R = ((2 * 1 - 1) / (2 * 1 + 1)) * (pow(2 - 1, 2 * 1 + 1) / pow(2 - 1, 2 * 1 - 1)) * (pow(2 + 1, 2 * 1 + 1) / pow(2 + 1, 2 * 1 + 1));
			Assert::AreEqual(R, R);
		}
	};
}
