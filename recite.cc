#include <iostream>
#include <string>
#include <vector>

using std::cin,std::cout,std::endl;
using std::string,std::vector;

string answer;
string project = {"In general, a temporary endeavor undertaken to create a unique product or service"};
int main()
{
    cout << "project definition:";
    cin >> answer;

    if (answer == project)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}