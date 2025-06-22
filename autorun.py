'''
Lab auto-execute script
=======================
If you're reading this, you wanna know what this does. It's the script that executes when you click "Run" on Replit, which lets you run a demo for a specific lab. It also shows the command I run for every build/execute in my workflow.

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

'''

import os

NUM_LABS = 9
lab_num = "A"

def is_valid(input: str):
  return input.isnumeric() and (int(input) >= 1 and int(input) <= NUM_LABS)

while not (is_valid(lab_num)):
  prompt = "Enter the number of the lab demo you want to run (1 - {lab_num}): ".format(lab_num = NUM_LABS)
  lab_num = input(prompt)

file = "Lab" + lab_num
# change dir, build, execute but quickly delete the executable
# in this house we love unix and its lack of file lock
cmd = "cd " + file + " && clang++ " + file.lower() + ".cpp && ./a.out; rm a.out"

print("\n>>", cmd)
os.system(cmd)