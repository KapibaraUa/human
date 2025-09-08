

#include <iostream>
#include "Human.h"
using namespace std;
int main()
{
    cout << "є котакбасіна  куда ты встал" << endl;
}

Human::Human()
{
    name = nullptr;
    surname = nullptr;
    age = 0;
}

Human::Human(const char* n, const char* s, int a)
{
    if (name != nullptr)
    {
		delete[] name;
    }
    if (surname != nullptr)
	{   
        delete[] surname;
	}   
    
    name = new char[strlen(n) + 1];
    strcpy(name, n);

    surname = new char[strlen(s) + 1];
    strcpy(surname, s);

    age = a;

}

Human::~Human()
{
	delete[] name;
	delete[] surname;
}

void Human::input(const char* n,const char* s,int a)
{
    char buf[100];
    cout << "Name: ";
    cin >> buf;
    SetName(buf);

    cout << "Surname: ";
    cin >> buf;
    SetSurname(buf);

    cout << "Age: ";
    int a;
    cin >> a;
    SetAge(a);
}

void Human::print()
{
	cout << "Name: " << GetName() << endl;
	cout << "Surname: " << GetSurname() << endl;
	cout << "Age: " << GatAge() << endl;
}

char* Human::GetName()
{
    return nullptr;
}

char* Human::GetSurname()
{
    return nullptr;
}

int Human::GatAge()
{
    return 0;
}

void Human::SetName(const char* n)
{
    if (name != nullptr)
    {
		delete[] name;
    }
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

void Human::SetSurname(const char* s)
{


    if (surname != nullptr)
    {
		delete[] surname;
    }
	surname = new char[strlen(s) + 1];
	strcpy(surname, s);
}

void Human::SetAge(int a)
{
	age = a;
}
