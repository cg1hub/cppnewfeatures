module;
#include <iostream>
#include <vector>

export module ConceptsLibrary;

using namespace std;

template <typename T, typename U>
concept Addable = requires (T a, U b) { a + b; };

struct Complex
{
    int real;
    int imaginary;
    Complex(int r, int i) : real(r), imaginary(i) {}
    Complex operator+(const Complex& c) const
    {
        return Complex(real + c.real, imaginary + c.imaginary);
    }
    friend ostream& operator<<(ostream& os, const Complex& c)
    {
        os << c.real << " + " << c.imaginary << "i";
        return os;
    }
};

export class ConceptsLibrary {

    template <typename T, typename U>
   static auto add(T a, U b) requires Addable<T, U>
   {
        return a + b;
   }

   static void add()
   {
        cout << "add(1, 2) is " << add(1, 2) << endl;
        cout << "add(1.0, 2.0) is " << add(1.0, 2.0) << endl;
        cout << "add(1, 2.0) is " << add(1, 2.0) << endl;
        cout << "add(Complex(2, 3), Complex(4, 33)) is " << add(Complex(2, 3), Complex(4, 33)) << endl;
   }

public:
    static void Run()
    {
        std::cout << "-----------------ConceptsLibrary------------------" << std::endl;
        add();
    }
};

