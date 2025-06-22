/*
Lab 6 Demo
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

// global variables for values that will not change as much,
// or that will stay constant
int ARRAY_SIZE = 100;


void print_array(int array[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        // if divisible by either 3 or 5
        if (array[i] % 3 == 0 || array[i] % 5 == 0) {
            // divisible by 3
            if (array[i] % 3 == 0)  {
                cout << "Fizz";
            } 
            // divisible by 5
            if (array[i] % 5 == 0) {
                cout << "Buzz";
            }
        } else {
            cout << array[i];
        }

        cout << endl;
    }
}

int main() {
    int numbers[ARRAY_SIZE];

    // creating an array with the numbers 1 to 100
    for (int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = i + 1; // loops through 0-99 but we need 1-100, so just add 1
    }

    print_array(numbers);

    return 0;
}
