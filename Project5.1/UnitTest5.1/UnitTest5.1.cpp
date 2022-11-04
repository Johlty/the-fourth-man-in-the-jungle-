#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1);
	};
	inline void UnitTest51::TestMethod1()
	{
		double rty = (h(5 * 5, 1 + 6) + h(1, 5 * 6)) / (1 + pow(h(5, 6), 2));
		Assert::AreEqual(rty, rty);
	}
}
