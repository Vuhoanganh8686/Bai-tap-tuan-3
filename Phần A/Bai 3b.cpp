#include <iostream>
using namespace std;
int main()
{
    char daytab[2][12] = {
     {31,28,31,30,31,31,30,31,30,31},
     {29,31,30,31,30,31,31,31}
    };
    for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
//C?c gia tri con lai don ve phia dau moi hang
    char daytab1[2][12] = {
     31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,30,31
    };
     for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab1[i][j] << " ";
        }
        cout << endl;
     }
//Cac gia tri con lai don len hang 1
    return 0;
}
