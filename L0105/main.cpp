#include <iostream>

int main()
{
    std::cout << "Hello world!";

    std::cout << 4;

    int y{ 5 };
    std::cout << y;

    std::cout << "Hello" << " world!"<< std::endl;

    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)

    std::cout << "Enter a number: "; // ask user for a number

    int z{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> z; // get number from keyboard and store it in variable x

    std::cout << "You entered " << z << '\n';

    return 0;
}