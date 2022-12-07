#include<iostream>
using namespace std;
class Person
{
public:
	char *name;
	char gender;
	int age;
	Person()
	{
		name = '\0';
		gender = '\0';
		age = 0;
	}
	Person(char *nm, char gen, int ag)
	{
		int size = strlen(nm);	//constructor for char pointer ,Deep copy
		name = new char[size + 1];
		for (int a = 0; a < size; a++)
		{
			name[a] = nm[a];
		}
		name[size] = '\0';

		gender = gen;
		age = ag;
	}
	void display()
	{
		name = "I am Tayyab ";
		gender = ' M ';
		age = 21;
		cout << name << gender << age << endl;
	}

};
class Employee: public Person
{
public:
	char *company;
	float salary;
	Employee()
	{
		company = '\0';
		salary = 0.0;
	}
	Employee(char *cm, float sal)
	{
		int size = strlen(cm);	//constructor for char pointer ,Deep copy
		company = new char[size + 1];
		for (int a = 0; a < size; a++)
		{
			company[a] = cm[a];
		}
		company[size] = '\0';

		salary = sal;
	}
	void display()
	{
		company = "UCP Lahore ";
		salary = 2500.70;
		cout << company << salary << endl;
	}

};
class Programmer : public Employee
{
protected:
	int count;
public:
	Programmer()
	{
		count = 0;
	}
	Programmer(int cn)
	{
		count = cn;
	}

	void display()
	{
		count = 3;
		cout << count << endl;
	}

};
int main()
{
	Person per;
	Employee emp;
	Programmer pro;
	per.display();
	emp.display();
	pro.display();

	system("pause");
	return 0;

}
