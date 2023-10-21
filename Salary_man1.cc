//~~可以输入名字？name~~
//可以排名？做不到暂时
//~~可视化UI？~~     

#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;

int heart = 5,work = 0,day = 0;
char A,D;
string name;
vector<string> v1;
vector<int> v2;
int day1(),day2(),day3(),day4(),day5(),reference(),judge_heart(),final_judge(),record(),restart(),again(),rank();

//judge the heart point whether is less than 0


int judge_heart()
{
    if (heart < 0)
    {
    cout << "\nYour health is dying and \nGame Over!\n\n";
    rank();
    again();
    }
    return 0;
}

//judge the heart and work point whether are less than 0 in the end
int final_judge()
{
    if (heart < 0)
    {
        cout << "\nYour health is dying and \nGame Over!\nWhat a pity!";
        record();
        rank();
        again();
    }
    else if (work < 0)
    {
        cout << "\nYou are lazy in the working.You get fired! \nGame Over!";
        record();
        rank();
        again();
    }
    else
    {
    cout << "\nCongratulation!You finish the task.CAN YOU KEEP IT FOREVER?";
    record();
    rank();
    again();
    }
    return 0;
}

//reflect the value of heart and work at present
int record()
{
    cout << "\n\nheart value is:" << heart << "\n";
    cout << "work value is:" << work << "\n";
    return 0;
}

//description
int reference()
{
    cout << ".-------------.\n| Salary Man |\n'-------------'\n\n\n";
    cout << "Congratulations! You just got your first job, and the trial period starts today!\n\n"
    "You have got 5 health points and 0 work points.\n\n"
    "Every workday will consume you at least 1 point of health, the more activities you involved in the work,the more health points will be comsumed,and the more work points will be earned.\n"
    "If you got negative health points, you will be game over immediately. If you got negative work points, and it remains negative when it's day 5, you will be fired.\n"
    "Keep healthy and work hardly!\n\n";
    //"Please type in anything to start the game.XD\n";
    return 0;
}

//the primary progress
int main()
{
    reference();
    day1();
    day2();
    day3();
    if (heart < 0)
    return 0;
    day4();
    if (heart < 0)
    return 0;
    day5();
    again();
    return 0;
}

int again()
{
    cout << "\nThis game is over.May you want to try again?\n\n\ntype in:y(yes) or n(no)\n";
    cin >> A;
    if (A == 'y')
    {
    cout << "\n\n\n\n\n\n\n\n";
    main();
    }
    else if (A == 'n')
    return 0;
    else
    cout << "I think you are joking.So I make a decision to help you over the game";
    return 0;
}
//the optional of "RESTART"
int restart()
{
    if (D == 'R')
    main();
    return 0;
}

//running in different stages
int day1()
{
    cout << "\nDAY1\nQ: When are you going to be in the office today?\n1. A: on time\n2. B: be late\n3. C: be early\n";
    cin >> D;
    restart();
    if (D == 'A'||D == 'a')
    {
    cout << "(a) health -1\n(b) work +1";
    --heart,++work;
    }
    else if(D == 'B'||D =='b')
    {
    cout << "(a) health -1\n(b) work -1";
    --heart,--work;
    }
    else if (D == 'C'||D =='c')
    {
    cout << "(a) health -2\n(b) work +1";
    heart = heart - 2,++work;
    }
    else
    {
        cout << "Please type in the correct form";
        day1();
    }
    ++day;
    record();
    return 0;
}

int day2()
{
    cout << "\nDAY2\nQ: It's 06:00 PM, the boss asks you to work overtime to 08:00 PM, what would you do?\n1. A: work overtime to 08:00 PM\n2. B: go home directly\n3. C: work ovetime to 06:30 PM, since then the boss will be gone\n";
    cin >> D;
    restart();
    if (D == 'A'||D == 'a')
    {
    cout << "(a) health -3\n(b) work +2";
    heart = heart - 3,work = work + 2;
    }
    else if(D == 'B'||D == 'b')
    {
    cout << "(a) health -1\n(b) work -1";
    --heart,--work;
    }
    else if (D == 'C'||D == 'c')
    {
    cout << "(a) health -3\n(b) work +0";
    heart = heart - 3,work;
    }
    else
    {
    cout << "Please type in the correct form";
    day2();
    }
    ++day;
    record();
    return 0;
}

int day3()
{
    cout << "\nDAY3\nQ: Your lover asks you for a date, your boss asks you to work overtime, what would you do?\n1. A: work overtime\n2. B: go to the date\n3. C: work ovetime to 06:30 PM, go to the date when the boss is gone\n";
    cin >> D;
    restart();
    if (D == 'A'||D == 'a')
    {
    cout << "(a) health -3\n(b) work +2";
    heart = heart - 3,work = work + 2;
    }
    else if(D == 'B'||D == 'b')
    {
    cout << "(a) health +3\n(b) work -1";
    heart = heart + 3,--work;
    }
    else if (D == 'C'||D == 'c')
    {
    cout << "(a) health -2\n(b) work +0";
    heart = heart - 2,work;
    }
    else
    {
    cout << "Please type in the correct form";
    day3();
    }
    judge_heart();
    ++day;
    record();
    return 0;
}

int day4()
{
    cout << "\nDAY4\nQ: You feel sick in the morning, what would you do?\n1. A: go to work\n2. B: ask for one day off\n3. C: ask for half day off\n";
    cin >> D;
    restart();
    if (D == 'A'||D == 'a')
    {
    cout << "(a) health -3\n(b) work +2";
    heart = heart - 3,work = work + 2;
    }
    else if(D == 'B'||D =='b')
    {
    cout << "(a) health +2\n(b) work -2";
    heart = heart + 2,work = work - 2;
    }
    else if (D == 'C'||D =='c')
    {
    cout << "(a) health +1\n(b) work -1";
    ++heart,--work;
    }
    else
    {
    cout << "Please type in the correct form";
    day4();
    }
    judge_heart();
    ++day;
    record();
    return 0;
}

int day5()
{
    cout << "\nDAY5\nQ: Your boss asks you to join the team dinner, where you will be asked to have alcohol, what would you do?\n1. A: go to the dinner\n2. B: go home directly\n3. C: go to the dinner and try to leave early\n";
    cin >> D;
    restart();
    if (D == 'A'||D == 'a')
    {
    cout << "(a) health -2\n(b) work +2";
    heart = heart - 2,work = work + 2;
    }
    else if(D == 'B'||D =='b')
    {
    cout << "(a) health -1\n(b) work -1";
    --heart,--work;
    }
    else if(D == 'C'||D =='c')
    {
    cout << "(a) health -2\n(b) work +0";
    heart = heart - 2,work;
    }
    else
    {
    cout << "Please type in the correct form";
    day5();
    }
    final_judge();
    ++day;
    return 0;
}

int rank()
{
    cout << "\nYou can write in your name to record every times you play(max to 7 strings,contains punctuation,space):";
    getline(cin,name);
    cout << "\n\n";
    v1.push_back(name);
    v2.push_back(day);
    v2.push_back(heart);
    v2.push_back(work);
    cout << " _______________________________________\n|  ___________________________________  |\n| | name\tday\theart\twork  | |\n";
    cout << "| | " << name <<'\t'<< day << "\t" << heart << "\t" << work << "     | |";
    cout << "\n| |___________________________________| |\n|_______________________________________|";
    return 0;
}