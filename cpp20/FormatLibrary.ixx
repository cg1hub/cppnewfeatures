// Great Resource to get started: https://www.youtube.com/watch?v=IdM0Z2a4fjU&ab_channel=CppCon
// format specifier specification: [[fill]align][sign][#][0][width][.precision][type]

module;
#include <format>
#include <iostream>

export module FormatLibrary;

using namespace std;

struct A {
  int x;
  auto operator <=>(const A&) const = default; 
};

export class FormatLibrary {

    static void widthAlignFormats() noexcept
    {
        std::cout << format("Outputting using library {}", 42) << std::endl;
        std::cout << format("Outputting using library - width 5 |{:5}|", 42) << std::endl;
        std::cout << format("Outputting using library - dyn width 10 |{:{}}|", 42, 10) << std::endl;
        std::cout << format("Outputting using library - placeholders {1}, {0}", 1, 2) << std::endl;
        std::cout << format("Outputting using library - center 10 |{:^{}}|", 42, 10) << std::endl;
        std::cout << format("Outputting using library - right align and fill  |{:*<{}}|", 42, 44) << std::endl;

        //Sign.
        // - displays sign only for -ve default.
        // + displays sign for both +ve and -ve.
        // space displays sign for -ve and space for +ve.
        std::cout << format("Outputting using library default [{:5}]", 42) << std::endl;
        std::cout << format("Outputting using library -ve sign [{:5}]", -42) << std::endl;
        std::cout << format("Outputting using library + [{:+5}]", 42) << std::endl;
        std::cout << format("Outputting using library space 42 [{: ^5}]", 42) << std::endl;
        std::cout << format("Outputting using library space-42 [{: ^5}]", -42) << std::endl;
    }

    static void typeFormats() noexcept
    {
        std::cout << format("decimal notation {:d}", 42) << std::endl;
        std::cout << format("decimal - width 10 |{:10d}|", 42) << std::endl;
        std::cout << format("binary- width 10 |{:10b}|", 42) << std::endl;
        std::cout << format("Alternate binary- width 10 |{:#10b}|", 42) << std::endl;

        std::cout << format("string format - width 10 fill char |{:p<15}|", "cars says ") << std::endl;

        // lone fill 0
        std::cout << format("decimal - width 10 |{:^-010d}|", -42) << std::endl; // weird not expected
        std::cout << format("decimal - width 10 |{:0<10d}|", 42) << std::endl; // weird not expected
    }

public:
    static void Run()
    {
        std::cout << "-----------------FormatLibrary------------------" << std::endl;
        widthAlignFormats();
        typeFormats();
    }
};

