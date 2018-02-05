#include <iostream>
#include <string>
#include <vector>

//exclude using namespace std for now

int main()
{
    std::vector<char> letters;
    std::string input = "";

    std::cout << "--Storing letters in a vector--\n";
    std::cout << "Enter a word to store\n";

    getline(std::cin, input);
    std::cout << "You entered: " << input << std::endl;

    // iterate through string
    for (unsigned int i = 0; i < input.length(); i++) {
        char c = input[i];
        letters.push_back(c);
        //printf("%c\n", c);
    }

    printf("The vector is %lu in length\n", letters.size());

}
