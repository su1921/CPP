#include <iostream>
using namespace std;

class person
{
    char name[100];
    int age;

public:
    void getData();
    void display();
};

void person :: getData()
{
    cout << "Enter name = ";
    cin >> name;
    cout << "Enter age = ";
    cin >> age;
}

void person :: display()
{
    cout << "Name = " << name << "\n";
    cout << "Age = " << age << "\n";
}

int main()
{
    person p;

    p.getData();
    p.display();

    return 0;
}
