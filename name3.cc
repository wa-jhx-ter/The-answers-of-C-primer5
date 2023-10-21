/*
输入一串字符，判断其first name和last name
    忽视middle name

以空格为界限判断其输入的是否为first name和last name(位于首尾)
从第0位的字符开始循环并输入其中vector中
1.判断空格n数量，将n-1数量的中间名去掉
*/
#include <iostream>
#include <string>
#include <vector>

using std::cin,std::cout,std::endl;
using std::string;
using std::vector;

int count;                  //count times
vector<string> full_name,last_name;
string name,first_name,a,b;
string i,space;
int main()
{
    
    getline(cin, name);
    
    for (int n = 0; n < name.size();n+=1)
        if (name.find(" "))
            space = a[n];
    
   /*
            water jia
   */
    for (int n = 0;n < name.size(); n+=1)
    {
        i = name[n];        //顺便发现了空格的位置
        full_name.push_back(i);
    }

    //first name
    for (auto c = name.begin(); c != name.end() && !isspace(*c); ++c)
    {
        first_name.push_back(c);
    }



    cout << "First name:" << first_name.front() << endl;
    cout << "Last name:" << last_name.front() << endl;
    cout << "Initials:" << first_name.front() << last_name.back() << endl;
    
    return 0;
}