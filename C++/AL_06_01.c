#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a>> b;

        int reszta = a%b;

        if(reszta < 0 && b > 0){
            reszta+=b;
        }
        else
            if(reszta < 0 && b < 0){
                reszta -= b;
            }
        cout << reszta << endl;
    }
}
