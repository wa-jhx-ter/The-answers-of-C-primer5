#include <iostream>

int heart = 5,work = 0;
char A = 'a',B = 'b',C = 'c',D;

int judge_heart()
{
    if (heart < 0)
    {
    std::cout << "\nYour health is dying and \nGame Over!";
    return -1;
    }
    return 0;
}

int final_judge()
{
    if (heart < 0)
    {
        std::cout << "\nYour health is dying and \nGame Over!\nWhat a pity!";
    }
    else if (work < 0)
    {
        std::cout << "\nYou are lazy in the working.You get fired! \nGame Over!";
    }
    else
    std::cout << "\nCongratulation!You finish the task.CAN YOU KEEP IT FOREVER?";
    return 0;
}

int main()
{   
    std::cout << "Congratulations! You just got your ﬁrst job, and the trial period starts today!\n\n"
    "You have got 5 health points and 0 work points.\n\n"
    "Every workday will consume you at least 1 point of health, the more activities you involved in the work,the more health points will be comsumed,and the more work points will be earned.\n"
    "If you got negative health points, you will be game over immediately. If you got negative work points, and it remains negative when it's day 5, you will be ﬁred.\n"
    "Keep healthy and work hardly!\n\n"
    "Please type in anything to start the game.XD\n";
    //day1
    {

    std::cout << "\nDAY1\nQ: When are you going to be in the office today?\n1. A: on time\n2. B: be late\n3. C: be early\n";
    std::cin >> D;
    if (D == A)
    {
    std::cout << "(a) health -1\n(b) work +1";
    --heart,++work;
    }
    else if(D == B)
    {
    std::cout << "(a) health -1\n(b) work -1";
    --heart,--work;
    }
    else if (D == C)
    {
    std::cout << "(a) health -2\n(b) work +1";
    heart = heart - 2,++work;
    
    }
    }

    //day2
    {
    std::cout << "\nDAY2\nQ: It’s 06:00 PM, the boss asks you to work overtime to 08:00 PM, what would you do?\n1. A: work overtime to 08:00 PM\n2. B: go home directly\n3. C: work ovetime to 06:30 PM, since then the boss will be gone\n";
    std::cin >> D;
    if (D == A)
    {
    std::cout << "(a) health -3\n(b) work +2";
    heart = heart - 3,work = work + 2;
    }
    else if(D == B)
    {
    std::cout << "(a) health -1\n(b) work -1";
    --heart,--work;
    }
    else if (D == C)
    {
    std::cout << "(a) health -3\n(b) work +0";
    heart = heart - 3,work;
    }
    }

    //day3
    {
    std::cout << "\nDAY3\nQ: Your lover asks you for a date, your boss asks you to work overtime, what would you do?\n1. A: work overtime\n2. B: go to the date\n3. C: work ovetime to 06:30 PM, go to the date when the boss is gone\n";
    std::cin >> D;
    if (D == A)
    {
    std::cout << "(a) health -3\n(b) work +2";
    heart = heart - 3,work = work + 2;
    }
    else if(D == B)
    {
    std::cout << "(a) health +3\n(b) work -1";
    heart = heart + 3,--work;
    }
    else if (D == C)
    {
    std::cout << "(a) health -2\n(b) work +0";
    heart = heart - 2,work;
    }
    judge_heart();
    }

    //day4
    {
    std::cout << "\nDAY4\nQ: You feel sick in the morning, what would you do?\n1. A: go to work\n2. B: ask for one day off\n3. C: ask for half day off\n";
    std::cin >> D;
    if (D == A)
    {
    std::cout << "(a) health -3\n(b) work +2";
    heart = heart - 3,work = work + 2;
    }
    else if(D == B)
    {
    std::cout << "(a) health +2\n(b) work -2";
    heart = heart + 2,work = work - 2;
    }
    else if (D == C)
    {
    std::cout << "(a) health +1\n(b) work -1";
    ++heart,--work;
    }
    judge_heart();
    }

    //day5
    {
    std::cout << "\nDAY5\nQ: Your boss asks you to join the team dinner, where you will be asked to have alcohol, what would you do?\n1. A: go to the dinner\n2. B: go home directly\n3. C: go to the dinner and try to leave early\n";
    std::cin >> D;
    if (D == A)
    {
    std::cout << "(a) health -2\n(b) work +2";
    heart = heart - 2,work = work + 2;
    }
    else if(D == B)
    {
    std::cout << "(a) health -1\n(b) work -1";
    --heart,--work;
    }
    else if (D == C)
    {
    std::cout << "(a) health -2\n(b) work +0";
    heart = heart - 2,work;
    }
    final_judge();
    }
    return 0;
}


