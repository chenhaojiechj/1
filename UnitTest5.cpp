﻿#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			//Assert::AreEqual(-1, example_function(3, 0, -1));
			//Assert::AreEqual(0, example_function(3, 1, 1));
			//Assert::AreEqual(-2, example_function(1, 0, -1));	
			Assert::AreEqual(1, example_function(1, 1, 1));
		}
		int example_function(int a, int b, int c) {
			if (a > 1 && b == 0) {
				c = c + 1;
			}
			if (a == 3 || c < 0) {
				c = c - 1;
			}
			return c;
		}
	};
}