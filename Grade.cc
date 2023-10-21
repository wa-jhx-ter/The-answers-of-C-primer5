#include <iostream>
#include <string>
#include <vector>

using std::cin,std::cout,std::endl;
using std::string;
using std::vector;

int a;
int b = 0,c = 0,d = 0;
/*
int main()
{
    while (cin >> a)
    {
    if (a >= 81 && a <= 100)
        b += 1;
    else if (a >= 61 && a <= 80)
        c += 1;
    else if (a >= 0 && a <= 60)
        d += 1;
    //你可以输入-1使程序结束(不需要，Ctrl+D)
    else
        return 0;
    }
    
    cout << "A:" << b << endl;
    cout << "B:" << c << endl;
    cout << "C:" << d << endl;

    return 0;

}*/

int n = 10;

int main()
{
    vector<unsigned> scores (11, 0);
    vector<string> grade_class = {"J:","I:","H:","G:","F:","E:","D:","C:","B:","A:","X:"};
    unsigned grade;
    cout << "Please input numbers of student's scores(you could use 'Ctrl+D' to tell that you have finished inputing numbers):";
    while (cin >> grade)
        if (grade <= 100)
            ++scores[grade/10];
    
        
    for (unsigned n = 10; n < scores.size(); --n)
            cout << grade_class.at(n) << scores.at(n) << " ";

        
    
   return 0; 
}
    
