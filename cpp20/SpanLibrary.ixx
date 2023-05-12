// spans are non-owning views of contiguous sequences of objects.
// They are used to pass arrays to functions without losing the information about the size of the array.
// They are similar to string views though spans can also be used to modify the data.

module;
#include <array>
#include <iostream>
#include <format>
#include <ranges>
#include <set>
#include <vector>

export module SpanLibrary;

using namespace std;

export class SpanLibrary {
   static void RunSpans() noexcept
   {
        char greeting[] = {'H','e','l','l','o','w','o','r','l','d','!'};
        auto span = std::span{greeting}; // span is a view of the array that can change the data as well.

        std::cout << "printing the greeting via the span" << std::endl;
        for (auto c : span)
        {
            std::cout << std::format("{}",c);
        }
        std::cout << std::endl;

        std::cout << "Changing the greeting via the span" << std::endl;
        span.back() = '1';
        for (auto c : span)
        {
            std::cout << std::format("{}",c);
        }
   }

public:
    static void Run()
    {
        std::cout << "-----------------SpanLibrary------------------" << std::endl;
        RunSpans();
    }
};

