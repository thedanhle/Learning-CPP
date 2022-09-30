#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

// This is our Employee class. Remember, everything in a class is private by default.
// Private: not accessible from outside the class
// Public: accessible from outside the class
// Protected: Inheritence

class Employee : AbstractEmployee
{
private: // cant access these properties outside of our class
    string Name;
    string Company;
    int Age;

public:
    // getters and setters
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
    // end getters and setters

    // introducing yourself function
    void introduceYourself()
    {
        std::cout << "Age - " << Age << std::endl;
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
    }

    // our constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    // asking for promotion
    void AskForPromotion()
    {
        std::cout << "hello" << std::endl;
    }
};

// Our main function
int main()
{
    Employee employee1("Danh Le", "CAE", 23);
    employee1.introduceYourself();

    return 0;
}