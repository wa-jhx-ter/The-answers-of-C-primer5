#include <iostream>
using std::cout;
/*
int main()
{
    
    int n = 1;
    int m =( ++n, cout << "n = " << n <<'\n',++n, 2*n);
    cout << "m = " << (++m, m) <<'\n';
    return 0;
}*/
int main()
{
    float j = 1.9;
    int i = 2 * static_cast<int>(j);
    cout << i;
    return 0;
}
