#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main() {

    // int FirstNumber = 12;
    // int SecondNumber = 9;

    // int sum = FirstNumber + SecondNumber;
    // std::cout << "The sum of the two numbers is: " << sum << std::endl;

    int FirstNumber {13};    //Statement
    int SecondNumber {7};
    

    std::cout << "First number: " << FirstNumber << std::endl;  //13
    std::cout << "Second number: " << SecondNumber << std::endl;    //7

    int sum = FirstNumber + SecondNumber;
    std::cout << "Sum: " << sum << std::endl;   //20
    
    sum = addNumbers(25,7);
    std::cout << "Sum: " << sum << std::endl;   //32

    sum = addNumbers(30,55);
    std::cout << "Sum: " << sum << std::endl;   //85

    sum = addNumbers(-1, 5);
    std::cout << "Sum: " << sum << std::endl;   //4

    std::cout << "Sum: " << addNumbers(4,55) << std::endl;   //59

    return 0;

}