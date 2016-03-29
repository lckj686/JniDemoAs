# JniDemoAs
android  studio  jni demo

##内容介绍
1. jnidemo
整个工程主要就是介绍 jni 在 Android studio 上的使用。  
其中：  
com\_jni\_ForkNativeUtil.h 为用javah命令生成的jni头文件  
jniexport_method.h 为自己手写的jni头文件。 主要想表达自己手写也就那么一回事

2. 程序以调用linux中的fork 函数实现作为主要内容。在做android的进程守护中会用到fork一个进程 kill掉原来的进程使之成为孤儿进程 脱离控制终端进行守护  
ps：int pid =  fork() 如果得到两个返回值（一个0） 说明fork 异常了