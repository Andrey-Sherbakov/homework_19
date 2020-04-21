
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void Voice()
    {
        cout << "Hi\n" ;
    }
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        cout << "Woof\n";
    }
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        cout << "Meow\n";
    }
};

class Snake : public Animal
{
public:
    void Voice() override
    {
        cout << "Tssss\n";
    }
};

int main()
{
    Animal* arr[3] = { new Dog, new Cat, new Snake };
    for (int i = 0; i < 3; i++)
    {
        arr[i]->Voice();
    }

}

