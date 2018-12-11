#include <iostream>
// Program for illustration purposes only: It is bad style for a function
// to use a global variable and also define a local variable with the same name
int reused = 42; // reused has global scope
int main() {
    int unique = 0; // unique has block scope
// output #1: uses global reused; prints 42 0
    std::cout << reused << " " << unique << std::endl;
    int reused = 0; // new, local object named reused hides global reused
// output #2: uses local reused; prints 0 0
// the local reused is now in scope
    std::cout << reused << " " << unique << std::endl;
// output #3: explicitly requests the global reused; prints 42 0
    std::cout << ::reused << " " << unique << std::endl;
    return 0;
}

// use scope operator to override the default scoping rules
// The global scope has no name.
// Hence, when the scope operator has an empty left-hand side,
// it is a request to fetch the name on the right-hand side from the global scope.
