// inline namespace ns-name { declarations }
//Inline namespace definition for the namespace ns-name. Declarations inside ns-name will be visible in its enclosing namespace.
module;
#include <iostream>

export module NestedInlineNamespaces;

namespace A  // this is available since C++11
{
    inline namespace B 
    {
    constexpr int x = 1; // exposes x and y to A
    inline namespace C // exposes y to B
    {
        constexpr int y = 2;
    }
    }
}

namespace D :: inline E // you can use inline namespace in nested definitions
{
    constexpr int x1 = 1; // exposes x and y to A
    inline namespace F // exposes y to B
    {
        constexpr int y1 = 2;
    }
}

using namespace std;

export class InlineNamespaces {

    static void doInlineNamespaces() noexcept
    {
        std::cout << "Running Inline Namespaces" << std::endl;
        std::cout << "A::x is " << A::x << std::endl;
        std::cout << "A::y is " << A::y << std::endl;

        std::cout << "D::x1 is " << D::x1 << std::endl;
        std::cout << "D::y1 is " << D::y1 << std::endl;
    }

public:
    static void Run()
    {
        std::cout << "-------------------InlineNamespaces----------------" << std::endl;
        doInlineNamespaces();
    }
};

