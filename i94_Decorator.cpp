// i94_Decorator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Espresso.h"
#include "Beverage.h"
#include "Mocha.h"

int main() {
    Beverage* beverage = new Espresso();
    beverage = new Mocha(beverage);
    beverage = new Mocha(beverage);
    cout << beverage->getDescription() << "\t" << beverage->cost() << "RUB" << endl;
    return 0;
}

