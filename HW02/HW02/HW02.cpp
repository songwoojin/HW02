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

// ���� ������ �����ϴ� �Լ�
    // - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
    // - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: Animal* (������ ���� ��ü�� ������)
Animal* createRandomAnimal()
{
    int random = rand() % 3; // ���� ����

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

    srand(static_cast<unsigned int>(time(nullptr))); // �õ� ����

    Zoo* Z = new Zoo();

    for (int i = 0; i < 10; i++)
    {
        Z->addAnimal(createRandomAnimal());
    }

    Z->performActions();

    delete Z;

    return 0;
}

