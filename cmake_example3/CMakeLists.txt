 # 指定所需的cmake的最低版本
cmake_minimum_required(VERSION 3.8) 
# 指定项目名称
project(cmake_expamle) 
# 查找opencv库并设置变量OpenCV_LIBS
 find_package(OpenCV 4 REQUIRED) 
# 递归查找src目录下的所有cpp文件并储存到变量src中
file(GLOB_RECURSE src "src/*.cpp") 
# 创建可执行文件目标
add_executable(cmake_expamle) 
# 指定构建cmake_example所需的源文件
target_sources(cmake_expamle  
    PRIVATE 
${src} 
) 
# 为cmake_example添加头文件目录
target_include_directories(cmake_expamle  
    PRIVATE 
        ./include 
) 
# 让目标链接外部库
target_link_libraries(cmake_expamle  
${OpenCV_LIBS} 
) 
