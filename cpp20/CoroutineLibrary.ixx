module;
#include <cstdlib>
#include <iostream>
#ifdef __cpp_lib_generator
#include <generator>
#endif

export module CoroutineLibrary;

using namespace std;

export class CoroutineLibrary {
#ifdef __cpp_lib_generator
    static auto generateRandom(int randomNumbers) noexcept
    {
        std::cout << "Generating random numbers" << std::endl;
        for (int i = 0; i < randomNumbers; i++)
        {
            co_yield rand();
        }
    }
#endif

    static void generateRandoms() noexcept
    {
#ifdef __cpp_lib_generator
        std::cout << "Running Coroutine Library" << std::endl;
        std::cout << "Coroutine Library is available" << std::endl;
        for (auto i : generateRandom(10))
        {
            std::cout << "Random number is " << i << std::endl;
        }
#else
        std::cout << "Coroutine Library is not available" << std::endl;
        return;
#endif
    }
public:
    static void Run()
    {
        std::cout << "-------------------CoroutineLibrary----------------" << std::endl;
        generateRandoms();
    }
};

