#include <iostream>
#include <chrono>
#include <ratio>

int main() 
{
    typedef std::chrono::duration<int> seconds_type;
    typedef std::chrono::duration<int,std::milli> milliseconds_type;
    typedef std::chrono::duration<int, std::ratio<60, 1>> minutes_type;
    typedef std::chrono::duration<int, std::ratio<60*60, 1>> hours_type;

    hours_type h_oneday(24);                // 24
    minutes_type m_oneday(60*24);           // 1440
    seconds_type s_oneday(m_oneday);        // 86400s
    milliseconds_type ms_oneday(m_oneday); // 86400000ms

    std::cout << ms_oneday.count() << " ms\t in 1 day" << std::endl;
    std::cout << s_oneday.count() << " s\t\t in 1 day" << std::endl;
    std::cout << m_oneday.count() << " minutes\t in 1 day" << std::endl;
    std::cout << h_oneday.count() << " hours\t in 1 day" << std::endl;
    return 0;
}