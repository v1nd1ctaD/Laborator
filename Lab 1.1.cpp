#include <iostream>

// Функция B
void B()
{
    std::cout << "called B" << std::endl;
}

// Функция C
void C()
{
    std::cout << "called C" << std::endl;
}

// Функция A вызывает B и C
void A()
{
    std::cout << "called A" << std::endl;
    B();
    C();
}

int main()
{
    std::cout << "Jello" << std::endl; // Печатаем Jello

    A(); // вызываем A

    return 0;
}
