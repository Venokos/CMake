 #ifndef COLORFUL_HELLO_H
 #define COLORFUL_HELLO_H
 #include <iostream>
 #include <opencv2/opencv.hpp>
 // 如果opencv这个头文件会报错可以换成 #include <opencv4/opencv.hpp> 或者 
#include <opencv2/opencv.hpp>
class ColorfulHello {
 public: 
    ColorfulHello() = default; 
void blue_hello(); 
void red_hello(); 
void green_hello(); 
}; 
#endif // COLORFUL_HELLO_H
