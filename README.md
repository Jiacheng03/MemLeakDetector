这个目录下的东西，可用来检测是否存在内存泄露；

其中，win VS目录的是一个头文件MemLeakDetector.h，linux目录里的则是一个记录文档；

一、windows环境，使用VS进行检测

	MemLeakDetector.h包含了<crtdbg.h>, 做了必要的处理；
	
	使用时，只需要在项目中include MemLeakDetector.h就可以使用；
	
	相关代码会在main()被调用前，自动执行；
	
	另外，因为在MemLeakDetector.h中做了编译类型的判断，所以在linux项目中也不会影响运行，只是不起作用而已；
	

二、linux环境，使用valgrind工具进行检测

	在linux目录下的文档中，记录了安装和简单使用方法；