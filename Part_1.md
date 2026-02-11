# PART 1

```C++
#include <iostream>

void processData(int val, int* ptr) {
    val += 10;
    *ptr += 10;
}

int main() {
    int alpha = 20;
    int beta = 20;

    std::cout << "Before function call:" << std::endl;
    std::cout << "alpha = " << alpha << std::endl;
    std::cout << "beta = " << beta << std::endl;

    processData(alpha, &beta);

    std::cout << "\nAfter function call:" << std::endl;
    std::cout << "alpha = " << alpha << std::endl;
    std::cout << "beta = " << beta << std::endl;

    return 0;
}
```

1. The processData function takes two parameters: int val and int* ptr. Which of these is passed by value, and which is passed by reference?
   The parameter ```int val``` is passed by value and the parameter ```int* pts``` is passed by reference.
   
3. What will be the final value of alpha printed by the program? Why doesn't it change to 30?
   The final valuue of ```alpha``` will remain 20 as the variable ```val``` in the function is a copy of ```alpha``` and not the same variable.

5. What will be the final value of beta printed by the program? Why does its value change?
   The final value of ```beta``` will be 30 because the ```processData``` function takes in the address of ```beta``` by using a pointer ```pts``` and updates the value stored at that address
