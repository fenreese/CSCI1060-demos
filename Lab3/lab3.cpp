/*
Lab 3 Demo
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

using namespace std;

const int NUMBERS_PER_LINE = 10;

void printNumbers(int maxNum, int numPerLine) {
  for (int i = 1; i <= maxNum; i++) {
    
    // print extra spaces for padding
    // I'm expecting 3-digit numbers which is why I pad as such
    // you can also use setw in the iomanip library to skip this check (google it)
    if (i < 10) { // single digit
      cout << "  ";
    } else if (i < 100) { // two digits
      cout << " ";
    }

    // space either way
    cout << i << " ";

    // after the "numPerLine"th element, print out a new line
    if (i % numPerLine == 0) {
      cout << endl;
    }
  }
  // new line 
  cout << endl;
}

int main() {
  int maxNum = 0;

  cout << ("How many numbers do you want to print? ");
  cin >> maxNum;

  printNumbers(maxNum, NUMBERS_PER_LINE);
}
