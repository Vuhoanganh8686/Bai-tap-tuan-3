#include <iostream>

using namespace std;

int main()
{
    int n,i;

    char daytab[2][12] = {
 {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
};
for(n=1;n<=2;n++){
    for(i=1;i<=12;i++){
    cout << daytab[n][i]<< endl;
}
}cout << endl;
   char daytab2[2][12] = {
 31,28,31,30,31,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31,30,31,30,31
};
for(n=1;n<=2;n++){
    for(i=1;i<=12;i++){
    cout << daytab[n][i]<< endl;
}
}
}
//2 cách deu in ra mang giong nhau
