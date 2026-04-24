#include "Base.hpp"
#include "Identify.hpp"

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        Base* p = generate();

        std::cout << "identify(Base*): ";
        identify(p);

        std::cout << "identify(Base&): ";
        identify(*p);

        std::cout << "------------------\n";

        delete p;
    }
    return 0;
}