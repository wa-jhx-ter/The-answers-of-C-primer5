//The usage of assign, find and append must be present.
#include <iostream>
#include <string>

using std::cin,std::cout,std::endl;
using std::string;

//locate the space
int space;
string first_name,last_name,name,i;

int main()
{
    cout << "Please input your full name:";
    getline(cin, name);
   /*
            water jia
   */

    //first name
    for (int m = 0;m < name.size(); ++m)
    {
        i = name[m];        
        first_name.append(i);
        if (i == " ")
        {
            space = m + 1;
            break;
        }
    }
    
    //last name
    if (name.find(" "))
        for (int n = 0; n < name.size(); ++n)
            last_name.assign(name.begin() + space,name.end());

    cout << "First name:" << first_name << endl;
    cout << "Last name:" << last_name << endl;
    cout << "Initials:" << first_name[0] << last_name[0] << endl;
    
    return 0;
}