# CMake简单使用

1. Ubuntu 基础命令
   - mkdir 创建文件夹 *make directory*
   - touch 创建文件 *本义为**更新一个文件或目录的访问和修改时间戳***
   - cd 改变工作目录 *change directory*
   - pwd 浏览当前工作目录 *print working directory*
   - sudo 以超级用户身份执行 *SuperUser Do*
   - cp 复制 *copy*
   - mv 移动 *move*
   - rm 移除 *remove*
   - 在shell中 `. `表示当前目录，` .. `表示上一级目录
  2. 一般使用方法
     1. 在<u>项目根目录</u>中创建文件
         ```
         mkdir cmake_example
        cd cmake_example
        touch main.cpp CMakeLists.txt
         ```
     2. 在main.cpp[^1]和CMakeLists.txt[^2]中写入代码
        
     3. 命令行执行  `cmake .` *确保工作目录为<u>项目根目录</u>*
      此时会出现这些文件：
         ```
         CMakeCache.txt 
         CMakeFiles 
         cmake_install.cmake 
         Makefile
         ````
        *Makefile详见[^3]*
     4. 输入`make -j4`  *-j4 表示最多允许使用4个cpu核心* 
      运行后会在当前目录生成一个==可执行文件==`cmake_expamle`[^4]
     5. 执行该可执行文件 
        `./cmake_expamle`
     6. 若输出成功 则成功用cmake编译运行了一个cpp程序



















[^1]:写cpp要在  `.cpp, .h, .hpp ` 等⽂件中写
[^2]:`CMakeLists.txt`是CMake的配置⽂件，⽤于描述项⽬的构建流程，⽐如源⽂件的路径，编译选项，依赖库，⽣成器，测试，安装等等
[^3]: `Makefile`是CMake根据`CMakeLists.txt`⽣成的编译⽂件，此时执⾏ `make` 命令即可编译
[^4]:这里可能是代码中打错字了，导致生成的可处理文件是expamle而不是example
