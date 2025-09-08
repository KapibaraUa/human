#pragma once
class Human
{
private:
	char* name;
	char* surname;
	int age;

public:
	Human();
	Human(const char* n, const char* s, int a);
	~Human();
	void input(const char* n, const char* s, int a);
	void print();

	char* GetName();
	char* GetSurname();
	int GatAge();

	void SetName(const char* n);
	void SetSurname(const char* s);
	void SetAge(int a);
};

