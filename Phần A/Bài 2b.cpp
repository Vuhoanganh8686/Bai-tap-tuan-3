# include <iostream>
using namespace std;
int main ()
{
    string s = "abcd";
    // C�ch 1
    for (int i=0; i<s.length(); i++)
        cout << s[i];
    cout << endl;
    // C�ch 2
    cout << s << endl;
    return 0;
}
