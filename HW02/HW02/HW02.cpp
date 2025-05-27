// HW02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Zoo.h"
#include <cstdlib>
#include <ctime>

using namespace std;

// 랜덤 동물을 생성하는 함수
    // - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
    // - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
    // - 입력 매개변수: 없음
    // - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* createRandomAnimal()
{
    int random = rand() % 3; // 난수 생성

    switch (random)
    {
    case 0:
        return new Dog();
        break;
    case 1:
        return new Cat();
        break;
    case 2:
        return new Cow();
        break;

    default:
        break;
    }

    return nullptr;
}

int main()
{
    /*
    Dog* ADog = new Dog();
    Cat* ACat = new Cat();
    Cow* ACow = new Cow();

    Animal* Animals[3] = { ADog,ACat,ACow };

    //Animals[0] = new Dog();
    //Animals[1] = new Cat();
    //Animals[2] = new Cow();

    for (int i = 0; i < 3; i++)
    {
        Animals[i]->MakeSound();
        delete Animals[i];
        cout << "\n";
    }
   
    delete ADog;
    delete ACat;
    delete ACow;
    */

    srand(static_cast<unsigned int>(time(nullptr))); // 시드 설정

    Zoo* Z = new Zoo();

    for (int i = 0; i < 10; i++)
    {
        Z->addAnimal(createRandomAnimal());
    }

    Z->performActions();

    delete Z;

    return 0;
}

