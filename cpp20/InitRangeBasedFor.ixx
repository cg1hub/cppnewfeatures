module;
#include <iostream>
#include <vector>

export module InitRangeBasedFor;

using namespace std;

struct A {
  int x;
  auto operator <=>(const A&) const = default; 
};

export class InitRangeBasedFor {
    static auto getVector(int n) noexcept
    {
        std::vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i);
        }
        return v;
    }

    static void printArrayIndexUsingRangeBasedFor() noexcept
    {
        std::cout << "Running Range Based For and getting index" << std::endl;
       for (auto index{0}; auto i : getVector(10))
       {
           std::cout << "array index: " << index << " array value is "<< i << std::endl;
           ++index;
       }
    }

public:
    static void Run()
    {
        std::cout << "-----------------InitRangeBasedFor------------------" << std::endl;
        printArrayIndexUsingRangeBasedFor();
    }
};

