// 背景：程序执行过程中会遇到段错误（特别是概率性问题），
// 在缺少trace进行跟踪的情况下，我们可以使用backtrace接口
// 打印段错误时刻的函数调用栈，找到代码异常之处

#include <iostream>
#include <signal.h>
#include "backtrace.hpp"
#include <map>

using namespace std;

void OnSignalhandler(int signal);
void initSignal();
std::string signal_to_string(int signal);

std::map<int, string> SIGNAL_NAME= 
{
    {SIGKILL, "SIGKILL"},
    {SIGSTOP, "SIGSTOP"},
    {SIGTSTP, "SIGTSTP"},
    {SIGBUS,  "SIGBUS"},
    {SIGFPE,  "SIGFPE"},
    {SIGSTKFLT, "SIGSTKFLT"},
    {SIGABRT, "SIGABRT"},
    {SIGSEGV, "SIGSEGV"},
    {SIGINT, "SIGINT"},
    {SIGTERM, "SIGTERM"}
};

void test3()
{
    int *p = NULL;
    // int val = 3;
    // p = &val;
    *p = 2; // 对空指针赋值会导致段错误
}

void test2()
{
    test3();
}

void test1()
{
    test2();
}

int main()
{
    initSignal();
    test1();

    return 0;
}

void OnSignalhandler(int signal)
{
    printf("Get the Signal No. is [%d][%s]\n", signal, signal_to_string(signal).c_str());
    dump_backtrace();
}

void initSignal()
{
    // 信号捕捉函数
    signal(SIGKILL,     OnSignalhandler);
    signal(SIGSTOP,     OnSignalhandler);
    signal(SIGTSTP,     OnSignalhandler);
    signal(SIGBUS,      OnSignalhandler);
    signal(SIGFPE,      OnSignalhandler);
    signal(SIGSTKFLT,   OnSignalhandler);
    signal(SIGABRT,     OnSignalhandler);
    signal(SIGSEGV,     OnSignalhandler);
    signal(SIGINT,      OnSignalhandler);
    signal(SIGTERM,     OnSignalhandler);
}

std::string signal_to_string(int signal)
{
    const auto itr = SIGNAL_NAME.find(signal);
    if(itr != SIGNAL_NAME.end())
        return itr->second;
    else
        return "SIGUNKOWN";
}