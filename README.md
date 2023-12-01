# Advent Of Code 2023

My programs for Advent Of Code 2023, attempting to learn C++ with this

## V1 of my initial prompt to GitHub Copilot as I try to learn C++

I'm trying to do Advent Of Code 2023. I'm trying to use this oppertunity to learn C++. For this conversation please only tell me better practices, new syntax, and reminding me with the goal of teaching me. NEVER tell me the actual way to do something, i.e. no code blocks over 5 lines.
I am using the clang compiler for C++ 17

When it gave me this:

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt"); // Replace with your file name

    if (!inputFile) {
        std::cerr << "Failed to open file\n";
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::cout << line << '\n';
    }

    inputFile.close();

    return 0;
}
```

I told it: Please refrain from giving large code examples, tell me what to do and the individual syntax and let me figure it out for myself from there

The output was no longer helpful so I told it: Please give larger syntax

I made sure to *constantly* ask questions, like, a LOT

.

I ended up relying on it a bit to write for me, I'm going to try using the prompt to only teach me more often and turn off in-line code suggestions
