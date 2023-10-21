#include <iostream>
#include <string>

using namespace std;

string s("some string");



int main()
{
    /*
    if (s.begin() != s.end())
    {
        auto it = s.begin();
        *it = toupper(*it);
        cout << s << endl;
    }
*/
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    *it = toupper(*it);
    cout << s << endl;
    return 0;
}
/*
int main()
{
    cout << "please type in your name:";
    getline(cin,name);
    cout << "Hello,"<< name;
    //判断是否为空：

    return 0;
}*/