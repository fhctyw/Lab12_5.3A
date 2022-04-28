#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab12_5.3A\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student s = { "name", 2, Spec::IT, 3, 4.5, 5 };
			Assert::AreEqual((int)avgMark(s), 4);
		}
	};
}
