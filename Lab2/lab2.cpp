/*
Lab 2 Demo
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
#include <cstdlib>
#include <ctime> 

using namespace std;

const int DICE_SIDES = 20;

int main() {
  // initialize RNG with a seed
  // using time(NULL) means the seed will be different every second
  srand(time(NULL));
  
  int numRolls = -1;
  int roll;
  
  /*
    do-while loop: the code in the loop executes at least
    once (do), as it'll check after if the condition is true (while).
  */
  do {
    // Prompt user
    cout << "How many d20s do you want to roll? (Enter a negative number to stop rolling.) ";
    cin >> numRolls;
    
    /*
      for loop - works differently in C++ than Python.
      if you've worked with Java before, this should be familiar.
      
      for (initialization; loop condition; after loop) {
        code here
      }
    */
    for (int counter = 0; counter < numRolls; counter++) {
      /*
        % is the modulus operator - it's more or less
        the remainder of division. we use this to force a
        range on our random number generating.
        in this case, rand() % DICE_SIDES will give us a 
        random number between 0 and DICE_SIDES - 1, inclusive.
        because a decent dice doesn't have a 0, i add 1, so the
        range is between 1 and DICE_SIDES.
      */
      roll = (rand() % DICE_SIDES) + 1; 
      cout << "You rolled a " << roll << "! ";

      /*
        simple example of if/else. tells you your roll is 
        big if it's greater than/equal to 10, and tells you
        that you have bad luck otherwise.
      */
      if (roll >= 10) { 
        cout << "That's a big number!" << endl;  
      } else {
        cout << "RNG isn't on your side... " << endl;
      }

    }

    // the condition is checked after the end of the loop
  } while (numRolls > 0);

  return 0;
}
