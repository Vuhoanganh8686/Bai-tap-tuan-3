# include <iostream>
using namespace std;
int main()
{
    char daytab[2][12] = {
     {31,28,31,30,31,30,31,31,30,31,30,31},
     {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    char daytab1[2][12] = {
     31,28,31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,31,31,30,31,30,31
    };
     for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab1[i][j] << " ";
        }
        cout << endl;
     }
    return 0;
}
/* xóa so hàng trong khai báo thì van chay
còn xóa so cot hay xoa ca 2 thì khong chay */

