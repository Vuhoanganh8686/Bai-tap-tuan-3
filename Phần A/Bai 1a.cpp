
# include <iostream>
using namespace std;
int s[10]; //khai bao ngoai main
int main()
{
    int l[10]; //khai bao trong main
    for (int i=0; i<10; i++)
        cout << s[i] << " ";
    cout << endl;
    for (int i=0; i<10; i++)
        cout << l[i] << " ";
    return 0;
}
