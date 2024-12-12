// code for finding two nums and subtracting and finding if answer is right

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   
    // initializing variables
    
    unsigned int seed;  
    int num1, num2, temp; // used for swapping if needed
    int studentAnswer;    
    int correctAnswer;    

    // gather inputs
    
    cin >> seed;
    srand(seed);
    
    // Generate two random one-digit numbers
    
    num1 = rand() % 10;  
    num2 = rand() % 10;  

    // find largest number and swap if needed
    
    if (num1 < num2) 
    { 
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // display subtraction problem
    
    cout << "What is " << num1 << " - " << num2 << "? ";
    cin >> studentAnswer;

    // calculate correct answer
    
    correctAnswer = num1 - num2;

    // compare the student's answer with the correct answer
    
    if (studentAnswer == correctAnswer) 
    {
       
        //correct
        
        cout << "Congratulations! Your answer is correct." << endl;
    } 
    else 
    {
       
        // incorrect
        
        cout << "Sorry, that is incorrect." << endl;
    }

    // display  correct subtraction problem and answer
    
    cout << num1 << " - " << num2 << " = " << correctAnswer << endl;
    return 0;
}
