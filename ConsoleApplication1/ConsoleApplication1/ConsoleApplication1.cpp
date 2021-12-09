#include <iostream>
using namespace std;
class Cat
{
	int mass;
	char* name;
	char* color;
public:
	Cat()
	{
		this->mass;
		this->color;
		this->name;
	}
	Cat(int mass, char* name, char* color)
	{
		this->mass = mass;
		this->name - name;
		this->color = color;
	}
	void print()
	{
		cout << "Mass: " << mass << endl << "Color: " << color << endl << "Name: " << name << endl;
	}
	char* get_name()
	{
		return this->name;
	}
	char* get_color()
	{
		return this->color;
	}
	int get_mass()
	{
		return this->mass;
	}
};
int main()
{
	int mass;
	char name[15];
	char color[15];
	cout << "Enter mass: "<<endl;
	cin >> mass;
	cout << "Enter name: " << endl;
	gets_s(name);
	cout << "Enter color: " << endl;
	gets_s(color);
	Cat point = Cat(mass, name, color);
}
