#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <map>

const std::string INPUT_FILE_NAME = "input2.txt";

int main() {
    std::ifstream inputFile(INPUT_FILE_NAME);
    if (!inputFile.is_open()) {
        std::cout << "Failed to open file" << std::endl;
        return 1;
    }

    std::vector<std::vector<char>> charVec;
    std::vector<std::array<int, 2>> gears;
    std::string line;
    int index = 0;
    while (std::getline(inputFile, line)) {
        
        std::vector<char> lineVec;

        int charIndex = 0;
        for (char c : line) {
            lineVec.push_back(c);
            std::array<int, 2> position = {index, charIndex};
            if (c == '*') gears.push_back(position);
            charIndex++;
        }

        charVec.push_back(lineVec);
        index++;
    }

    int sum = 0;
    int first_num = 0;
    bool wasDigit = false;
    std::vector<std::array<int, 2>> digits;
    std::map<int, int> gearNumbers;
    for (int i = 0; i < charVec.size(); i++) {
        for (int o = 0; o < charVec.at(i).size(); o++) {
            char c = charVec.at(i).at(o);

            if (std::isdigit(c)) {
                wasDigit = true;
                std::array<int, 2> positions = {i, o};
                digits.push_back(positions);
            } 
            else if (wasDigit) {
                wasDigit = false;
                bool counts = false;
                std::string number = "";
                std::array<int, 2> gearPosition;
                for (std::array<int, 2> positions : digits) {
                    int j = positions[0];
                    int k = positions[1];

                    number += charVec.at(j).at(k);
                    
                    if (!counts) {
                        for (int x = -1; x <= 1; x++) {
                            for (int y = -1; y <= 1; y++) {

                                if (x == 0 && y == 0) continue;
                                try {

                                    char ch = charVec.at(j + x).at(k + y);

                                    if (ch == '*') {
                                        counts = true;
                                        gearPosition[0] = j + x;
                                        gearPosition[1] = k + y;
                                        break;
                                    }
                                } catch (std::out_of_range& e) {}
                            }
                            if (counts) break;
                        }
                    }
                } 
                if (counts) {
                    int num = std::stoi(number);
                    int index = 0;
                    for (std::array<int, 2> position : gears) {
                        std::cout << position[0] << ", " << position[1] << " | " << gearPosition[0] << ", " << gearPosition[1] << std::endl;
                        if (gearPosition == position) {
                            auto it = gearNumbers.find(index);
                            if (it != gearNumbers.end()) {
                                int value = it->second;
                                sum += num * value;
                                std::cout << "first!" << std::endl;
                            } 
                            else {
                                gearNumbers[index] = num;
                                std::cout << "second!" << std::endl;
                            }
                            break;
                        }
                        
                        index++;
                    }
                    std::cout << num << " | " << sum << std::endl;
                }
                
                digits.clear();
            }
        }
    }

    std::cout << sum << std::endl; 

    return 0;
}