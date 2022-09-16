#include <iostream>
using std::string;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }

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
    std::cout << employee1.getName();
    employee1.setAge(50);
    std::cout << employee1.getAge();

    return 0;
}