// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include<string>
int main(){
    std::string name;
    std::cout << "Enter your name: " ;
    std::cin >> name;
    std::cout << "Hi " << name << "!, nice to meet you" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}