#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int pos;
    char a[10][20], b[1][20];

    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    cin >> b[0];

    if( cerca( a, b, pos) == true){
        cout << pos << endl;
    }else{
        cout << "non presente" << endl;
    }

    return 0;
}
