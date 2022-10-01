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
    string Company;
    int Age;

protected:
    string Name;

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
        if (Age > 30)
            std::cout << Name << " got promoted" << std::endl;
        else
            std::cout << Name << " did not get promoted" << std::endl;
    }

    virtual void Work()
    {
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

class Developer : public Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void fixBug()
    {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
    void Work()
    {
        std::cout << Name << " is writing " << FavProgrammingLanguage << " code" << std::endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson " << std::endl;
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work()
    {
        std::cout << Name << " is teaching " << Subject << std::endl;
    }
};

// Our main function
int main()
{
    Developer dev1 = Developer("Danh Le", "Google", 31, "Python");
    // dev1.fixBug();
    // dev1.AskForPromotion();
    // dev1.Work();

    Teacher teach1 = Teacher("Mack", "coder school", 35, "math");
    // teach1.PrepareLesson();
    // teach1.AskForPromotion();
    // teach1.Work();

    Employee *e1 = &dev1;
    Employee *e2 = &teach1;

    e1->Work();
    e2->Work();

    return 0;
}