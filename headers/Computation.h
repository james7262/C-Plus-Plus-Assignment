// Pre-processor directives.
#include <iostream>

// Use C++ standard library namespace.
using namespace std;

// Computation class interface for use in the Statistician class.
class Computation {

    public:
        // Method declaration for computeLowest method.
        virtual void computeLowest() = 0;

        // Method declaration for computeHighest method.
        virtual void computeHighest() = 0;

        // Method declaration for computeSum method.
        virtual void computeSum() = 0;
};