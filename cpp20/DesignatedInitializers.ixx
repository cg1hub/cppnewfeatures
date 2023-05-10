module;
#include <iostream>

export module cv;

export struct A {
  int x;
  int y;
  int z = 123;
};

export A getDesignatedInitializer() noexcept
{
    std::cout << "Running Designated Initializers" << std::endl;
    std::cout << "Designated initializer using .x .y syntax when initialing aggregates" << std::endl;
    return A{.x = 1, .y = 2, .z = 3}; // C++20 designated initializers
}
