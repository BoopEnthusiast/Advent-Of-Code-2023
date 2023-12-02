#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

const std::string INPUT_FILE_NAME = "input.txt";

int main() {
    std::ifstream inputFile(INPUT_FILE_NAME);
    if (!inputFile.is_open()) {
        std::cout << "Couldn't open file" << std::endl;
        return 1;
    }

    int sum = 0;

    std::string line;
    int game_number = 1;
    while (std::getline(inputFile, line)) {
        line.erase(0, 8);

        bool cantBe = false;

        std::stringstream ss(line);
        std::string RGB;
        while (std::getline(ss, RGB, ';')) {
            int total_red = 0;
            int total_green = 0;
            int total_blue = 0;

            std::cout << RGB << " ||| ";

            std::stringstream colorss(RGB);
            std::string color;
            while (std::getline(colorss, color, ',')) {
                int num = 0;
                std::string number = "";
                
                for (char c : color) {
                    if (std::isdigit(c))
                        number += c;
                    else if (c == 'r') {
                        num = std::stoi(number);
                        total_red = num;
                        std::cout << color << " " << num << " | ";
                        break;
                    }
                    else if (c == 'g') {
                        num = std::stoi(number);
                        total_green = num;
                        std::cout << color << " " << num << " | ";
                        break;
                    }
                    else if (c == 'b') {
                        num = std::stoi(number);
                        total_blue = num;
                        std::cout << color << " " << num << " | ";
                        break;
                    }
                }
            }

            std::cout << " ||| " << total_red << " | " << total_green << " | " << total_blue << std::endl;

            if (total_red > 12 || total_green > 13 || total_blue > 14) {
                cantBe = true;
            }
        }
        if (cantBe == false) {
            sum += game_number;
        }

        game_number++;
    }

    std::cout << sum << std::endl;

    return 0;
}