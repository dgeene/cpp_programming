#include <iostream>
#include <string>
#include <vector>

//exclude using namespace std for now

int main()
{
    std::vector<int> letters;
    std::string input = "";

    std::cout << "--Storing letters in a vector--\n";
    std::cout << "Enter a word to store\n";

    getline(std::cin, input);
    std::cout << "You entered: " << input << std::endl;

}
