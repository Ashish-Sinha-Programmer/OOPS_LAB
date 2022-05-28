#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string name;
    int weight;
    Animal(){};
    Animal(string n, int w)
    {
        name = n;
        weight = w;
    };
};
class Pet
{
public:
    Animal Dog;
    void petHelth()
    {
        cout << "Enter the Name of the pet " << endl;
        getline(cin, Dog.name);
        cout << "Enter the weight of pet " << endl;
        cin >> Dog.weight;
    };
    void Display()
    {
        cout << "Name of the Pet is  " << Dog.name << endl;
        cout << "The weight of the pet is  " << Dog.weight << endl;
    };
};
int main(int argc, char const *argv[])
{
    Pet mypet;
    mypet.petHelth();
    mypet.Display();

    return 0;
}