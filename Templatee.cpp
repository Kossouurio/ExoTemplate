#include <iostream>
#include <vector>
#include <list>
#include <set>

#include "inventory.h"
#include "Item.h"
#include "projectile.hpp"


template<typename T>
T min(T arg[], int size)
{
    T min = arg[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arg[i])
        {
            min = arg[i];
        }
    }
    return min;
};

template<typename T>
int addInt(std::vector<T>& arg, T element)
{
    arg.push_back(element);
    return arg.size();
};

template <typename T>
double moyenne(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

// Spécialisation pour les entiers
template <>
double moyenne(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}


/// Exo 4 bis <>
class Personnage
{
public:
    Personnage(float health, float damage, float defence) : health(health), damage(damage), defence(defence) {};

private:
    float health;
    float damage;
    float defence;
};

template<typename T>
double calculStat(T tab[], int size) {
    /// calcul variance
    float sum = 0.0f;
    for (int i = 0; i < size; i++)
    {
        sum += tab[i];
    }
    return static_cast<double>(sum);
}

template<>
double calculStat(float tab[], int size) {
    /// calcul variance
    float sum = 0.0f;
    for (int i = 0; i < size; i++)
    {
        sum += tab[i];
    }
    return static_cast<double>(sum) / size;
}

void generate(int n)
{
    ///
}


int main()
{
    std::cout << "-----------" << std::endl;
    std::cout << "---Exo 2---" << std::endl;
    std::cout << "-----------" << std::endl;
    /// Exo 2 <>
    Inventory inv = Inventory();
    Item pomme("pomme", 3);

    inv.addItem(&pomme);
    inv.addItem("patate", 25);
    inv.addItem("carotte", 2);
    inv.addItem("boule de demolition", 2500);

    inv.deleteItemByName("carotte");

    std::cout << "-----------" << std::endl;
    std::cout << "---Exo 3---" << std::endl;
    std::cout << "-----------" << std::endl;

    /// Exo 3 <>
    int tab1[3] = { 20, 10, 30 };
    float tab2[5] = { 10.3f, 20.67f, 30.73f, 2.5f, 7.8f};

    std::cout << min(tab1, 3) << std::endl;
    std::cout << min(tab2, 5) << std::endl;

    std::cout << "-----" << std::endl;

    std::vector<int> vect1 = { 20, 10, 30 };
    std::vector<float> vect2 = { 10.3f, 20.67f, 30.73f, 2.5f, 7.8f };

    std::cout << addInt(vect1, 1) << std::endl;
    std::cout << addInt(vect2, 3.3f) << std::endl;


    std::cout << "-----------" << std::endl;
    std::cout << "---Exo 4---" << std::endl;
    std::cout << "-----------" << std::endl;

    /// Exo 4 <>

    float position1[] = { 3.0f, 5.0f };
    float direction1[] = { -4.0f, 7.0f };
    Projectile<int> arrow(2.5f, 10, position1, direction1);

    float position2[] = { -8.4f, 2.8f };
    float direction2[] = { 6.33f, -8.1f };
    Projectile<float> lazer(2.5f, 10.0f, position2, direction2);

    arrow.ispiercing(true);
    std::cout << "[" << arrow.getPosition(0) << ", " << arrow.getPosition(1) << "]" << std::endl;
    arrow.move();
    std::cout << "[" << arrow.getPosition(0) << ", " << arrow.getPosition(1) << "]" << std::endl;

    std::cout << "-----" << std::endl;

    lazer.ispiercing(false);
    lazer.setSizeDamage(13.2f);
    std::cout << "[" << lazer.getPosition(0) << ", " << lazer.getPosition(1) << "]" << std::endl;
    lazer.move();
    std::cout << "[" << lazer.getPosition(0) << ", " << lazer.getPosition(1) << "]" << std::endl;


    std::cout << "-----------" << std::endl;
    std::cout << "-Exo 4 bis-" << std::endl;
    std::cout << "-----------" << std::endl;

    /// Exo 4 bis <>

    Personnage fighter(50.0f, 9.0f, 53.0f);
    Personnage healer(20.0f, 2.0f, 15.0f);


    float stats[5] = { -8, 2, 5, 9, 53 };
    int stattss[5] = { -8.f, 2.f, 5.f, 9.f, 53.f };

    std::cout << calculStat(stattss, 5) << std::endl;
    std::cout << calculStat(stats, 5) << std::endl;

    return 0;
}
