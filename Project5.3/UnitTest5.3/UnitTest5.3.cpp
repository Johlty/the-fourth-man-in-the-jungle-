#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double y;
			y = s(2 * 2 + 1) + 2 * pow(s(1 - 2), 2) + s(1);
			Assert::AreEqual(y, y);
		}
	};
}
