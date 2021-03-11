# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[100];
    for (int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if(s[i] == s[j])
            {
                cout << "yes";
                return 0;
            }
    cout << "no";
}
