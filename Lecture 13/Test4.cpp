#include<iostream>
using  namespace std;

int main() {
    int test;
    cin >> test;

    for (int i = 1; i <= test; i = i + 1) {


        int n, temp, temp2, temp3, T;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i = i + 1)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i = i + 1)
        {
            cout << a[i] << " ";
        }
        cout << endl;


        int flag = 0;

        for (int i = 0; i < n - 2; i = i + 1) {

            if (flag == 1) {
                break;
            }

            temp = a[i];
            for (int k = i + 1; k < n - 1; k = k + 1) {

                if (flag == 1) {
                    break;
                }

                temp2 = a[k];

                for (int j = k + 1; j < n; j = j + 1) {

                    // if (flag == 1) {
                    //     break;
                    // }

                    temp3 = a[j];

                    T = temp3 + temp2 + temp;

                    if ((T % 10) == 3) {
                        cout << "YES" << endl;
                        flag = 1;
                    }
                }
            }
        }

        if (flag == 1) {
            cout << "NO" << endl;
        }
    }
}






