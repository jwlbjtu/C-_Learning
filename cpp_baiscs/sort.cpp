#include<iostream>
#include<algorithm>
using namespace std;

void selectSort(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        int index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[index] > a[j]) {
                index = j;
            }
        }
        swap(a[i], a[index]);
    }
}

void bubbleSort(int a[], int n) 
{
    int k = 1;
    while (k != n) {
        k = 1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            } else {
                k++;
            }
        }
    }
}

int main() {

    int a[5] = {3, 5, 6, 2, 1};

    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    cout << endl;

    //selectSort(a, 5);
    //bubbleSort(a, 5);
    sort(a, a+5);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }

    return 0;
}