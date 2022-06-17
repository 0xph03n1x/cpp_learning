#include <iostream>

int main() {

    //Compile time error - missing ';' at the end of the line
    std::cout << "Hell World!" << std::endl;

    //Run time error - compiles, but returns "Build finished with warning(s)." No run time error
    //int value = 7/0;
    //std::cout << "value: " << value << std::endl;
    return 0;

}