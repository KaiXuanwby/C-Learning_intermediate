//内存分区模型
/*
代码区：存放函数的二进制代码，由操作系统进行管理的
全局区：存放全局变量和静态变量以及常量
栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
*/
//存在意义：不同区域存放的变量，赋予不同的生命周期，给我们更灵活更大的编程

/*
在程序编译后，生成了.exe可执行程序，未执行该程序前分为两个区域
代码区：
	 存放CPU执行的机器指令
	代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
	代码区是只读的，使其只读的原因在于防止程序意外的修改了它的指令
全局区：
	全局变量和静态变量以及常量存放在此
	该区域的数据在程序结束后由操作系统释放
*/