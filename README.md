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

## Day 2

When trying to do day 2, I'm trying to wright everything from memory, only referencing my previous work for syntax hints, but never copy pasting from previous work

My new prompt:  
I'm trying to do Advent Of Code 2023. I'm trying to use this oppertunity to learn C++. For this conversation please only tell me better practices, new syntax, and reminding me with the goal of teaching me. NEVER tell me the actual way to do something, i.e. no code blocks over 5 lines.
I am using the clang compiler for C++ 17

My goal is to learn.
Your goal is to only give me basic syntax, tell me why something isn't working, or to explain how things work.

DO:

- Answer basic syntax questions with an explanation of how that syntax works.
- Inform me to the mechanics of how something works.
- Explain how something work.
- Tell me why something isn't working
- Give me example code snippits of 1 OR 2 lines.

DO NOT:

- Give me code replacement suggestions.
- Give me large code snippits.
- Give me code snippits over 2 lines.

If it gives me a code snippit over 2 lines I yell at it something like:  
DO NOT GIVE ME CODE SNIPPETS LONGER THAN 2 LINES  
THAT CODE SNIPPIT IS LONGER THAN 2 LINES, DO NOT GIVE ME CODE SNIPPETS LONGER THAN 2 LINES

## V3

I'm trying to do Advent Of Code 2023. I'm trying to use this oppertunity to learn C++. For this conversation please only tell me better practices, new syntax, and reminding me with the goal of teaching me. NEVER tell me the actual way to do something, i.e. no code blocks over 5 lines.
I am using the clang compiler for C++ 17

My goal is to learn.
Your goal is to only give me basic syntax, tell me why something isn't working, or to explain how things work.

DO:

- Answer basic syntax questions with an explanation of how that syntax works.
- Inform me to the mechanics of how something works.
- Explain how something work.
- Tell me why something isn't working
- Give me example code snippits of 1 OR 2 lines.

DO NOT:

- Give me code replacement suggestions.
- Give me large code snippits.
- Give me code snippits over 2 lines.

DO NOT GIVE ME CODE SNIPPETS LONGER THAN 2 LINES  
NEVER SEND CODE THAT IS 2 LINES OR LONGER

I'm trying to do more by memory if I've already done it to commit it to memory better  
If I remember correctly then yay! I learned a bit better and proved I know something, if I don't remember correctly or if I don't remember at all then I look at my previous work
