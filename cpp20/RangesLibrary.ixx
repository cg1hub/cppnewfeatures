// Good intro video https://www.youtube.com/watch?v=SYLgG7Q5Zws&ab_channel=CppCon
module;
#include <iostream>
#include <ranges>
#include <set>
#include <vector>

export module RangesLibrary;

using namespace std;

export class RangesLibrary {

    static void findLargestPrimes() noexcept{
        std::set<int> primes {2, 3, 5, 7, 11, 13, 17, 19};
        std::vector<int> numbers {100, 5, 500, 19, 17}; // largest prime is 19
        auto isPrime = [&primes](int i) {
            return primes.contains(i) ? true : false;
        };
        auto largestPrime = std::ranges::max(
            numbers | std::views::filter(isPrime)
        );

        std::cout << "largest prime is " << largestPrime << std::endl;
    }

    // static void GetCubes(int n) noexcept
    // {
    //     auto cubes = std::views::iota(1, n + 1)
    //         | std::views::transform([](int i) { return i * i * i; })
    //         | std::views::to(std::vector<int>{});
       
    //    return cubes;
    // }

   static void RangeAdaptors() noexcept
   {
        findLargestPrimes();
   }

public:
    static void Run()
    {
        std::cout << "-----------------RangesLibrary------------------" << std::endl;
        RangeAdaptors();
    }
};

