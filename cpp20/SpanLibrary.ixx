// Good intro video https://www.youtube.com/watch?v=SYLgG7Q5Zws&ab_channel=CppCon
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
        constexpr char greeting[] = {'H','e','l','l','o','w','o','r','l','d','!'};
        auto span = std::span{greeting}; // span is a view of the array

        for (auto c : span)
        {
            std::cout << std::format("{}",c);
        }
        std::cout << std::endl;

        // This does not compile
        // constexpr std::array<char, 10> greeting1 = {'H','e','l','l','o','w','o','r','l','d'};
        // auto span1 = std::span{greeting1};

        //  for (auto c : span1)
        // {
        //     std::cout << std::format("{}",c);
        // }
        // std::cout << std::endl;
   }

public:
    static void Run()
    {
        std::cout << "-----------------SpanLibrary------------------" << std::endl;
        RunSpans();
    }
};

