#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
    TEST_CLASS(UnitTest4)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double a;
            A(1, 1, a);
            Assert::AreEqual(0., a);
        }
    };
}