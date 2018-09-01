# include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    switch(ch) {
        case 'M':
            cout << "Monday" << endl;
            break;
        case 'T':
            cout << "Tuesday" << endl;
            break;
        default:
            cout << "Sunday" << endl;
    }
    return 0;
}