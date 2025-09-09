# 指定所需的cmake的最低版本
cmake_minimum_required(VERSION 3.8) 
# 指定项目名称
project(cmake_example) 
# 创建可执行文件目标
add_executable(cmake_expamle) 
# 指定构建cmake_example所需的源文件
target_sources(cmake_expamle  
    PRIVATE 
        main.cpp 
) 