#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

        int a = 1;
        int b = 1;
        int c;

        while (a<=n)
        {
            cout << a << endl;
            c = a;
            a = b;
            b = a + c;
        }
   return 0;
}
