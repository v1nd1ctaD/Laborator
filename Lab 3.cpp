#include <array>

// Тип: структура Leg
// Поле length — объект типа int (будет частью каждого объекта Leg)
struct Leg
{
    int length;
};

// Тип: структура Arm
// Поле power — объект типа int (будет частью каждого объекта Arm)
struct Arm
{
    int power;
};

// Тип: структура Person
// legs — объект типа std::array<Leg, 2>
// arms — массив из 2 объектов типа Arm
struct Person
{
    std::array<Leg, 2> legs; // создаёт 2 объекта Leg внутри Person: legs[0], legs[1]
    Arm arms[2];             // создаёт 2 объекта Arm: arms[0], arms[1]
};

int main()
{
    Person person; 
    // ↑ здесь создаётся объект person типа Person

    // Внутри person автоматически созданы объекты:
    // person.legs          — объект типа std::array<Leg, 2>
    // person.legs[0]       — объект типа Leg
    // person.legs[1]       — объект типа Leg
    // person.arms          — массив из 2 Arm
    // person.arms[0]       — объект типа Arm
    // person.arms[1]       — объект типа Arm

    return 0;
}
