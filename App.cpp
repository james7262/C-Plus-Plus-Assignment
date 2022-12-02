// Include pre-processor directives
#include <iostream>
#include "./headers/Computation.h"
#include "./headers/Statistician.h"

// Use C++ standard library namespace.
using namespace std;

int main() {
    // create a Statistician object named s1 using its one-arg 
    // constructor giving it an argument of 3.5
    Statistician s1(3.5);

    // declare local variables that will be used when calling 
    // s1's getter method
    int num;
    int lowest;
    int highest;
    int sum;

    // call method on s1 that will display it to stdout
    s1.printStatistician();

    // call method on s1 that will add 5.2 to it
    s1.addNumber(5.2);

    // call method on s1 that will display it to stdout
    s1.printStatistician();

    // call method on s1 that will add -7.8 to it
    s1.addNumber(-7.8);

    // call method on s1 that will display it to stdout
    s1.printStatistician

    // call method on s1 that will get its field values
    // and store them in local variables
    s1.getStatistician(lowest, highest, sum);

    // display values in local variables to stdout
    stdout << lowest << " " << highest << " " << sum;

    // create a Statistician object named s2 using its no-arg
    // constructor
    Statistician s2();

    // call method on s2 that will display it to stdout
    

    // call method on s1 that will test if it is equal to s2
    // and display its return to stdout as false or true
    

    // call method on s2 that will add the double numbers to it 
    // that will cause it to be equal to s1
    

    // call method on s1 that will test if it is equal to s2
    // and display its return to stdout as false or true
    
}