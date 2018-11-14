#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingStudent
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(ModuleTitle)
		{
			//Arrange
			Module m("Maths", "Com432", 100, 70);
			std::string expected{ "Maths" };
			std::string actual{};
			//Act
			actual = m.getModuleTitle();
			//Assert
			Assert::AreEqual(expected, actual);
			

		}
		TEST_METHOD(MoudleCode)
		{
			Module m("Maths", "Com432", 100, 70);
			std::string expected{ "Com432" };
			std::string actual{};
			//Act
			actual = m.getModuleCode();
			//Assert
			Assert::AreEqual(expected, actual);
		}

	};
}
namespace TestingArray
{
	TEST_CLASS(UnitTest2)
	{
	public:
		TEST_METHOD(Test)
		{
			Module m("Maths", "Com432", 100, 70);
		}

	};
}