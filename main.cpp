#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    if (!(std::cin >> age) || age < 0)
    {
        std::cerr << "Invalid age input.\n";
        return 1;
    }

    std::cout << "Hello, " << name << "! You are " << age << " years old.\n";
    return 0;
}