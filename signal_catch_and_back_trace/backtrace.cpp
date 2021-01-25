/*************************************************************************
 > File Name: backtrace.cpp
 > Author:  watercjr
 > Mail:    
 > Time:    20-08-04
 > Desc:    
 ************************************************************************/
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

/* 该函数用于获取当前线程的调用堆栈,获取的信息将会被存放在buffer中,
 * 它是一个指针列表。参数 size 用来指定buffer中可以保存多少个void* 元素。
 * 函数返回值是实际获取的指针个数,最大不超过size大小
**/
// int backtrace(void **buffer,int size);

/* backtrace_symbols将从backtrace函数获取的信息转化为一个字符串数组. 
 * 参数buffer应该是从backtrace函数获取的指针数组,
 * size是该数组中的元素个数(backtrace的返回值)
 * 函数返回值是一个指向字符串数组的指针,它的大小同buffer相同.
 * 每个字符串包含了一个相对于buffer中对应元素的可打印信息.它包括函数名，函数的偏移地址,和实际的返回地址
 * 该函数的返回值是通过malloc函数申请的空间,因此调用者必须使用free函数来释放指针.
 * 注意:如果不能为字符串获取足够的空间函数的返回值将会为NULL
**/
// char ** backtrace_symbols (void *const *buffer, int size)

/* backtrace_symbols_fd与backtrace_symbols 函数具有相同的功能,
 * 不同的是它不会给调用者返回字符串数组,而是将结果写入文件描述符为fd的文件中,
 * 每个函数对应一行.它不需要调用malloc函数,因此适用于有可能调用该函数会失败的情况。
**/
// void backtrace_symbols_fd (void *const *buffer, int size, int fd) 


// 编译事项：
// -g 选项是为了使用addr2line获取到文件的行数
// 你可能需要传递相应的符号给链接器,以能支持函数名功能 
// (比如,在使用GNU ld链接器的系统中,你需要传递(-rdynamic)，
// -rdynamic可用来通知链接器将所有符号添加到动态符号表中，如果你的链接器支持-rdynamic的话，建议将其加上！)

// 调试:
// 通过命令 addr2line
// addr2line 0x80487db(异常地址) -f -C -e main(执行文件)
// 获取文件名、函数名和源代码行数
// 参数： 
// -C --demangle[=style]：将低级别的符号名解码为用户级别的名字
// -f --functions：在显示文件名、行号输出信息的同时显示函数名信息。
// -e --exe=<executable>：指定需要转换地址的可执行文件名。
// -s --basenames：仅仅显示每个文件名的基址（即不显示文件的具体路径，只显示文件名）

void dump_backtrace()
{
    printf("--------------------------------------------------------------------------------\n");
    printf("Back Trace:\n");
    printf("--------------------------------------------------------------------------------\n");
    void *buffer[30] = {0}; // 指针数组
    size_t size = backtrace(buffer, 30); // 数组名表示数组首地址
    char **string = backtrace_symbols(buffer, size);
    if(string == NULL)
        return;

    for(size_t i = 0; i < size; i++)
        printf("%s\n", string[i]);

    printf("--------------------------------------------------------------------------------\n");

    free(string);

    exit(0);
}