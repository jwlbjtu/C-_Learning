# include<iostream>
using namespace std;

int main()
{
    int i, j;
    cin >> i >> j;

    bool isEq = (i == j);
    bool nEq = (i != j);
    bool isgr = (i > j);
    bool isgrEq = (i >= j);
    bool isless = (i < j);
    bool islessEq = (i <= j);

    cout << "Is equal " << isEq << endl;
    cout << "Is not equal " << nEq << endl;
    cout << "Is greater " << isgr << endl;
    cout << "Is greater or equal " << isgrEq << endl;
    cout << "Is less " << isless << endl;
    cout << "Is less or equal " << islessEq << endl;

    return 0;
}