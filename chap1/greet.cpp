#include <iostream>
#include <string>

int main()
{
    // ask for the persons name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;
    std::cin >> name;

    // write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;

    const std::string exclam = "!";
    const std::string message = "Hello" + ", world" + exclam;
    std::cout << message << std::endl;
    return 0;
}
