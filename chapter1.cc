/*
//1.3
#include <iostream>

int main()
{
    std::cout << "Hello,World";
    return 0;
}



//1.4
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 =0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The mul of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
    return 0; 

}


//1.5
#include <iostream>

int main()
{
    int v1 = 0,v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "Enter two numbers: "<< v1 << " and "<< v2 <<",The mul of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
    return 0;
}


//1.6
#include <iostream>

int main()
{
    int v1 , v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}

//1.9
#include<iostream>

int n = 50,sum = 0;

int main()
{
    while (n <= 100)
    {
        sum += n;
        n += 1:
    }
    return 0;
}

//1.10
#include<iostream>

int n = 10;

int main()
{
    while (n >= 0)
    {
        std::cout << n << " ";
        --n;
    }
    return 0;
}

//1.11
#include <iostream>

int main()
{
    int v1 = 0,v2 = 0;
    std::cout << "Please enter two numbers:";
    std::cin >> v1 >> v2;
    if (v1 > v2) 
    {
        -- v1;
        std::cout << "Numbers in this range:";
        while (v1 > v2)
        {
           std::cout << v1 << " "; 
           --v1;
        }
    }
    
    else if (v1 < v2)
    {
        std::cout << "Numbers in this range:";
        ++ v1;
        while (v1 < v2)
        {
            std::cout << v1 << " ";
            ++v1;
        }
    }

    else
std::cout << "There are not any numbers in the range.";
    
    return 0;
}

//1.13
///1.9
#include<iostream>

int sum;

int main()
{
    for (int n = 50;n <= 100; ++n)
        sum += n;

    return 0;
}
///1.10
#include<iostream>

int main()
{
    for (int n = 10; n >= 0; --n)
        std::cout << n << " ";
        
    return 0;
}

///1.11
#include<iostream>

int a,b;

int main()
{
    std::cout << "Please input two numbers:" << std::endl;
    std::cin >> a >> b;

    for (int a, b; a >= b; --a)
        std::cout << a << " ";

    for (int a, b; a <= b; ++a)
        std::cout << a << " ";
    
    return 0;
}

//1.16
#include <iostream>

int a;

int main()
{
    for (int a; std::cin >> a;)
}

//1.25
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total )
    {
        Sales_item trans;
        while (std::cin >>trans)
        {
            if (total.isbn() == trans.isbn())
            total += trans;
            else
            {
                std::cout << total << std::endl;
                total =trans;
            }
        }
        std::cout << total << std::endl;
    }  
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
*/