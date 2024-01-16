#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == x) {
            while (mid > 0 && a[mid - 1] == x) {
                mid--;
            }
            return mid;  
        }

        if (a[left] <= a[mid]) {
            if (a[left] <= x && x < a[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            if (a[mid] < x && x <= a[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;  
}

int main() {

#ifndef a
    freopen("intput.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n; cin >> n;
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    int x;
    cin >> x;
    int result = binarySearch(a,n,x);
    if (result != -1) {
        cout << "tim thay " << x << " o vi tri" << result;
    } else {
        cout << "ko tim thay";
    }
    return 0;
}

