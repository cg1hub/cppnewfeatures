module;
#include <iostream>

export module threewaycomparision;

using namespace std;
struct A {
  int x;
  auto operator <=>(const A&) const = default; // from C++20
};

export class ThreeWayComparision {
    static void dothreewaycomparision(int a, int b) noexcept
    {
        if (auto result = a<=>b; result > 0)
        {
            std::cout << "a is greater than b" << std::endl;
        }
        else if (result < 0)
        {
            std::cout << "a is less than b" << std::endl;
        }
        else
        {
            std::cout << "a is equal to b" << std::endl;
        }
    }

    static void dothreewaycomparision() noexcept
    {
        dothreewaycomparision(1, 1);
        dothreewaycomparision(1, 2);
        dothreewaycomparision(2, 1);
    }

    static void checkthreewaycomparisiononObjects() noexcept
    {
        A a{1};
        A b{2};
        std::cout << "Comparision on objects using < " << " a is " << a.x << " b is " << b.x << std::endl;
        if (a < b)
        {
            std::cout << "a is less than b" << std::endl;
        }
        else if (a > b)
        {
            std::cout << "a is greater than b" << std::endl;
        }
        else
        {
            std::cout << "a is equal to b" << std::endl;
        }

        cout << "Comparision on objects using <=> " << " a is " << a.x << " b is " << b.x << endl;
         if (auto result = a <=> b; result < 0)
        {
            std::cout << "a is less than b" << std::endl;
        }
        else if (result > 0)
        {
            std::cout << "a is greater than b" << std::endl;
        }
        else
        {
            std::cout << "a is equal to b" << std::endl;
        }

    }

public:
    static void Run()
    {
        std::cout << "-------------------ThreeWayComparision----------------" << std::endl;
        dothreewaycomparision();
        checkthreewaycomparisiononObjects();
    }
};

