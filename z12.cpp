#include <iostream>
using namespace std;
 
int main()
{
    setlocale( LC_ALL,"Russian" );
    int N;
    int summa=0;
    int fact=1;
    cout << "Введите число n: ";
    cin >> N;
    for(int i=1;i<=N;i++) {
        fact*=i;
        summa+=fact;
    }
    cout<<"summa = "<<summa<<endl;
    return 0;
}
