#include <iostream>
using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void introduceYourself()
    {
        std::cout << Age << std::endl;
        std::cout << Name << std::endl;
        std::cout << Company << std::endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    // std::cout << "Hello World" << std::endl;
    // int someNumber = 5;
    Employee employee1("Danh Le", "CAE", 23);

    employee1.introduceYourself();

    return 0;
}