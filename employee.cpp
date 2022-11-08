#include <iostream>
using std::string;

// employee class - attributes (and behaviours) of employees

class AbstractEmployee
{
    virtual void AskForPromotionn() = 0;
};

class Employee
{
private:
    string Name;
    string Company;
    int Age;
    string Occupation;

public:
    void setName(string name) {}
    string getName() {}
    void setCompany(string Company) {}
    string getCompany() {}
    void setAge(int age) {}
    int getAge() {}

    // function

    void IntroduceYourself()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;
        std::cout << "Occupation: " << Occupation << std::endl;
    }

    // store attributes in constructor
    Employee(string name, string company, int age, string occupation)
    {
        Name = name;
        Company = company;
        Age = age;
        Occupation = occupation;
    }
};

// Inheritance
class Developer : Employee
{
public:
    string FavProgramLan;
    Developer(string name, string company, int age, string occupation, string favProgramLan)
    //Base class
    :Employee(name, company, age, occupation) 
    {
       FavProgramLan = favProgramLan;
    }

    //method
    void fixBug() {
        std::cout << getName() << " fixed bug using " << FavProgramLan  << std::endl;
    }
};

// execute function

int main()
{
    Employee employee1 = Employee("Jones", "UofT", 52, "Professor");
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Aman", "UofT", 29, "TA");
    employee2.IntroduceYourself();

    Developer developer = Developer("Wayne", "UofT", 42, "IT Technician", "C++");
    developer.fixBug();
};