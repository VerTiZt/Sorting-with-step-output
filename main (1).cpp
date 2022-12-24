#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

void input(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

void output(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool checkk(int* arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        return arr[i] < arr[i + 1];
    }
}

void ssort(int* arr, int n) {
    for (int i = 1; i < n; ++i) {
        int j = i;
        if (j and arr[j] < arr[j - 1]) {
            while (j and arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                --j;
            }
            output(arr, n);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    input(a, n);
    if (checkk(a, n) == false) {
        ssort(a, n);
    }

    delete[] a;
    return 0;
}

