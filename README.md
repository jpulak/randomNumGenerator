# randomNumGenerator
2.6 Assignment 3 - Problem 2
Write a program that helps an elementary school student practice subtraction.

Your program will generate two random, one-digit integers. The larger number will be used as the minuend and the smaller number will be used as the subtrahend of a subtraction problem. Your program will display a problem like What is 9 - 2? and then take the student’s response and compare it to the correct difference. When the student’s answer is correct, your program will display a congratulatory message that tells them their answer is correct. When the student’s answer is incorrect, your program will display a message telling the student that the answer is incorrect. Make sure that your output for correct answers has the word 'correct' in it, and conversely the word 'incorrect' for incorrect output.

Regardless of whether the answer is correct or incorrect, display the original problem along with the correct answer on a line below the message. For example, for the problem What is 9 - 2? the last line of output should be:
```
9 - 2 = 7
```

Recall that you need to seed the random number generator once at the beginning of the program with code similar to:

```
unsigned int seed;

seed = time(0);
srand(seed);
```
Test your program in your IDE many times giving both correct and incorrect responses to the problems presented.

After your program is working correctly in your IDE, take out the code that seeds the random number generator (seed = time(0);). Replace that code with cin >> seed;. This is necessary for auto grading (we need repeatable number generation for grading). Zylabs will supply a first input that is the seed.
