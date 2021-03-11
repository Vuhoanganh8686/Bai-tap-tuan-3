# include <iostream>
using namespace std;
int main()
{
    char s[5] = {1, 4, 3, 2, 5};
    cout << s[-1] << endl;
    cout << s[5] << endl;   // N
    cout << s[6] << endl;   // N+1
    cout << s[7] << endl;   // N+2
    cout << s[8] << endl;   // N+3
    return ;
}
