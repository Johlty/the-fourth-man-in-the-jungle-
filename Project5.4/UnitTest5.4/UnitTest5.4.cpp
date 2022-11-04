#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		    int g = S0(6);
			Assert::AreEqual(g, g);
		}
		TEST_METHOD(TestMethod2)
		{
			int a = S1(6, 2);
			Assert::AreEqual(a, a);
		}
		TEST_METHOD(TestMethod3)
		{
			int t = S2(6, 6);
			Assert::AreEqual(t, t);
		}
		TEST_METHOD(TestMethod4)
		{
			int b = S3(6, 2, 0);
			Assert::AreEqual(b, b);
		}
		TEST_METHOD(TestMethod5)
		{
			int y = S4(6, 6, 0);
			Assert::AreEqual(y, y);
		}
	};
}
