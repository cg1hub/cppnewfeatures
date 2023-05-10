// ConstInit - This specifies that the variable should be initialized at compile time rather than first pass.
// constexpr implies const constinit, however differs in that constexpr also requires constant destruction.
// also constinit only applies to statics.

module;
#include <iostream>

export module ConstInit;

consteval int getmeaningoflife1() noexcept
{
    return 42;
}

constexpr int getmeaningoflife2() noexcept
{
    return 42;
}

using namespace std;

export class ConstInit {

    static void doconstinit() noexcept
    {
        constexpr auto  meaningoflife1 = getmeaningoflife1();
        std::cout << "Meaning of life is constexpr " << meaningoflife1 << std::endl;
        constinit static auto  meaningoflife2 = getmeaningoflife2();
        constinit static auto  meaningoflife3 = getmeaningoflife1();
        std::cout << "Meaning of life is constinit " << meaningoflife2 << std::endl; //42

        // ++meaningoflife; error: increment of read-only variable 'meaningoflife'
        meaningoflife2 = meaningoflife2 + 1;

        std::cout << "Meaning of life is constinit after increment" << meaningoflife2 << std::endl; // 43

        std::cout << "Meaning of life is constinit with consteval" << meaningoflife3 << std::endl; // 42
    }

public:
    static void Run()
    {
        std::cout << "-------------------ConstInit----------------" << std::endl;
        doconstinit();
    }
};

