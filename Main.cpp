#include <iostream>
using namespace std;

int main(){
    int myArray[5] = {1, 2, 3, 4, 5};

    myArray[2] = 10;

    for (int i = 0; i < 5; i++){
        cout << myArray[i] << " ";
    }

    return 0;
}