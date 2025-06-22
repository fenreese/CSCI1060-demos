/*
Lab 1 Demo
============================
This is a demo, as such, PLEASE ONLY TAKE INSPIRATION AND BITS 
OF CODE FROM IT. DO NOT USE THIS AS A TEMPLATE. 

MIT License

Copyright (c) 2022 fenreese

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <iostream>
#include <iomanip>
#include <cstdio>

int main() {
  // Print out some text, and then a new line
  std::cout << "Here's some text on its own line!" << std::endl;

  // Print out some text without printing a new line
  // useful for prompts
  std::cout << "And here's some text that will not print a new line. Useful for prompts like this. Enter some text: ";

  // get next string/line
  std::string myLine;
  getline(std::cin, myLine);

  // print the line inputted
  std::cout << "Here's what you entered: \"" << myLine << "\"" << std::endl;

  // single word input
  std::cout << "Enter ONE word: ";
  
  std::string myWord;
  std::cin >> myWord; 
  
  // the difference between cin << myWord and getline(cin, myLine) is that 
  // cin gets one word, getline gets the entire line

  // repeating the word
  std::cout << "Your word is \"" << myWord << "\"" << std::endl;

  // demonstrating decimal formatting
  std::cout << "Enter a number with 3 or more decimal places: ";
  float myCoolNumber;
  std::cin >> myCoolNumber;

  // you can use C++ setprecision (with iomanip)
  std::cout << "That same decimal, to 2 decimal places: " << std::setprecision(2) << std::fixed << myCoolNumber << std::endl;
  
  // alternatively, you can use C-style formatting! (with cstdio)
  // printf("That same decimal, to 2 decimal places: %.2f\n", myCoolNumber);

  // char to ascii number
  std::cout << "Enter one character: ";
  char myChar;
  std::cin >> myChar;

  std::cout << "This character (" << myChar << ") as its ASCII integer: " << (int)myChar << std::endl;
}
