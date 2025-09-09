#include <colorful_hello.h> 
void ColorfulHello::blue_hello(){ 
std::cout << "\033[34mHello CMake!\033[0m" << std::endl; 
} 
void ColorfulHello::red_hello(){ 
std::cout << "\033[31mHello CMake!\033[0m" << std::endl; 
} 
 void ColorfulHello::green_hello(){ 
std::cout << "\033[32mHello CMake!\033[0m" << std::endl; 
} 
