#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <map>

const std::string INPUT_FILE_NAME = "input2.txt";
const std::string SPELLED_NUMBERS[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    std::ifstream inputFile(INPUT_FILE_NAME);
    if (!inputFile.is_open()) {
        std::cout << "Could not open file" << std::endl;
        return 1;
    }

    std::string line;
    int sum = 0;
    while (std::getline(inputFile, line)) {
        std::vector<int> found_numbers;
        std::cout << line << std::endl;
        
        std::map<size_t, int> positions;
        int index = 0;
        for (const auto& str : SPELLED_NUMBERS) {
            size_t pos = line.find(str);
            while (pos != std::string::npos) {
                positions[pos] = index + 1;
                pos = line.find(str, pos + 1);
            }
            index++;
        }
        
        int first_digit = -1;
        int second_digit = -1;
        size_t pos = 0;
        for (char c : line) {
            if (std::isdigit(c)) {
                positions[pos] = c - '0';
            }
            pos++;
        }

        for (const auto& pair : positions) {
            found_numbers.push_back(pair.second);
        }
        
        first_digit = found_numbers[0];
        second_digit = found_numbers.back();

        for (const auto& num : found_numbers) {
            std::cout << num << ' ';
        }
        std::cout << first_digit << ' ' << second_digit << std::endl;

        int combined = first_digit * 10 + second_digit;
        sum += combined;
    }

    inputFile.close();

    std::cout << sum;

    return 0;
}
