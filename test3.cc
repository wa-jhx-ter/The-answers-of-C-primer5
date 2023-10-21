#include <iostream>
#include <string>

int main()
{
    std::string str = "hello";
    for (auto c : str)
    {
        //endl问题
    std::cout << c << "\n";
    }
    return 0;
}