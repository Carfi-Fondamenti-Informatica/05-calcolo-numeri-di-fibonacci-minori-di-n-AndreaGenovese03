#include <iostream>
using namespace std;

int main() {
  
   int a=0, b=1, c, n;
    
    cin >> n;

        for (int i=0; i<n; i++){
            c=a;
            a=b;
            b=a+c;
            if (a<=n){
                cout << a << endl;
        }else{
                return 0;
            }
        }
}
