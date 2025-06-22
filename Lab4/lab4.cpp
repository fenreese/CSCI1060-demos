/*
Lab 4 Demo
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
#include <string>
#include <fstream>

using namespace std;

// don't copy this exactly, this is only because i'm lazy to keep writing it
const string FILENAME = "testtext";

// three examples of declaration and definition of function before main

// this will help for is<Number/UpperCase/LowerCase>
// it is up to you to modify this function to suit your needs :)
int checkASCII(char ch) {
    return (int)ch;
}

// here's one way to read an entire file
void readFileByLine() {
    string line;
    ifstream file;

    file.open(FILENAME);

    while (!file.eof()) {
        getline(file, line);
        cout << line << endl;
        
        // Demonstrating use of checkASCII function
        cout << "ASCII for character " << line[0] << " is " << checkASCII(line[0]) << endl;
        cout << "ASCII for character " << line[line.length() - 1] << " is " << checkASCII(line[line.length() - 1]) << endl;
        cout << endl;
    }

    file.close();
}

// here's another way to read a file. do this preferably
void readFileByChar() {
    char letter;
    ifstream file;

    file.open(FILENAME);

    // read file, one character at a time
    // noskipws: NO SKIPping WhiteSpace
    // doesn't skip spaces or newlines
    while (file /*>> noskipws*/ >> letter) {
        cout << letter;
    }

    // endl for neatness
    cout << endl;
    file.close();
}

// example of declaration of function before main...
void driver();

int main() {
    driver();
    return 0;
}

// ... and function definition after main
void driver() {
    cout << "Reading file " << FILENAME << ", character by character:" << endl;
    cout << "-----------------------" << endl;
    readFileByChar();
    cout << endl;

    cout << "Reading file " << FILENAME << ", line by line:" << endl;
    cout << "-----------------------" << endl;
    readFileByLine();
    cout << endl;
}
