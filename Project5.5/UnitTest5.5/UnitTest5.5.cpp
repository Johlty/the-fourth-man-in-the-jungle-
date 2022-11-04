#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = Sum(1, 2, 5);
			Assert::AreEqual(a, a);
		}
	};
}
