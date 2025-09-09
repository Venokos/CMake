# 如果报错

1. 如果提示 不存在opencv：
    在`colorful_hello.h`中 把所有` <opencv/opencv.hpp> `替换为`<opencv2/opencv.hpp>`
2. 如果提示 类似:
   ```
   terminate called after throwing an instance of 'cv::Exception'
   what():  OpenCV(4.12.0) /home/venokos/Documents/opencv/modules/highgui/src/window.cpp:1301: error: (-2:Unspecified error) The function is not implemented. Rebuild the library with      Windows, GTK+ 2.x or Cocoa support. If you are on Ubuntu or Debian, install libgtk2.0-dev and pkg-config, then re-run cmake or configure script in function 'cvShowImage'

   Aborted (core dumped)
   ```
   
   解决方案：==重新安装OpenCV==
        1. 把opencv目录下build中的内容全部删掉
        2. 在build中输入 `cmake ..`
        3. 然后输入 `make -j4`
        4. 输入`sudo make install`
   
