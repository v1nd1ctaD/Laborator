#include <string.h>
#include <iostream>

struct TwoInts
{
    int a;
    int b;
};

struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // Создаём структуру TwoInts и инициализируем нулями
    TwoInts i2 = { };
    i2.a = 5; // записываем значение в поле a
    i2.b = 7; // записываем значение в поле b

    std::cout << i2.a << std::endl; // выводим 5
    std::cout << i2.b << std::endl; // выводим 7
    
    // Создали новую структуру с массивом
    StructWithArray s = { };
    s.arr[0] = 10; // записали 10 в первый элемент массива

    StructWithArray s1 = { };
    s1.arr[0] = 15; // записали 15 в первый элемент массива другой структуры

    // Указатель на структуру s
    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20; // меняем arr[0] структуры s на 20 через указатель

    std::cout << s.arr[0] << std::endl; // выводит 20
    s.arr[0] = 25;                      // меняем вручную на 25
    std::cout << s.arr[0] << std::endl; // выводит 25
    sPointer->arr[0] = 30;              // снова меняем через указатель → 30
    std::cout << s.arr[0] << std::endl; // выводит 30

    // Перенастраиваем указатель на другую структуру
    sPointer = &s1;
    sPointer->arr[0] = 35; // теперь меняется arr[0] структуры s1
    std::cout << s.arr[0] << std::endl;  // структура s не изменялась → 30
    std::cout << s1.arr[0] << std::endl; // структура s1 получила 35

    // Создаём массив из двух структур
    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;                  // записали 77 в arr[3] первой структуры
    structArray[1].someNumber = &structArray[0].arr[3]; // указатель у второй структуры указывает на arr[3] первой структуры

    sPointer = &s;
    int* pointer = &sPointer->arr[3]; // указатель на arr[3] структуры s

    s.arr[3] = 72; // записали 72 в s.arr[3]
    std::cout << *pointer; // выводит 72, т.к. pointer указывает туда же

    // Создаём структуру и обнуляем всю её память
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray)); // заполняем память нулями

    return 0;
}
