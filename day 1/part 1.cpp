#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cout << "Could not open file" << std::endl;
        return 1;
    }

    std::string line;
    int sum = 0;
    while (std::getline(inputFile, line)) {
        int first_digit = -1;
        int second_digit = -1;
        for (char c : line) {
            if (std::isdigit(c)) {
                if (first_digit != -1) {
                    second_digit = c - '0';
                } else {
                    first_digit = c - '0';
                    second_digit = c - '0';
                }
            }
        }
        int combined = first_digit * 10 + second_digit;
        sum += combined;
    }

    inputFile.close();

    std::cout << sum;

    return 0;
}
