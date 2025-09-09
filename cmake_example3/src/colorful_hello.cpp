 #include <colorful_hello.h> 
void ColorfulHello::blue_hello(){ 
cv::Mat white_canvas(500, 400, CV_8UC3, cv::Scalar(255, 255, 255)); 
    cv::putText(white_canvas, "Hello CMake", cv::Point(50, 40), 
        cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 0, 0), 2); 
    cv::imshow("blue", white_canvas); 
    cv::waitKey(1000); 
} 
void ColorfulHello::red_hello(){ 
cv::Mat white_canvas(500, 400, CV_8UC3, cv::Scalar(255, 255, 255)); 
    cv::putText(white_canvas, "Hello CMake", cv::Point(50, 40), 
        cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 0, 255), 2); 
    cv::imshow("red", white_canvas); 
    cv::waitKey(1000); 
} 
void ColorfulHello::green_hello(){ 
cv::Mat white_canvas(500, 400, CV_8UC3, cv::Scalar(255, 255, 255)); 
    cv::putText(white_canvas, "Hello CMake", cv::Point(50, 40), 
        cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 255, 0), 2); 
    cv::imshow("green", white_canvas); 
    cv::waitKey(1000); 
} 
