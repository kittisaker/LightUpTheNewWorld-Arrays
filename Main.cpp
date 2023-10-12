#include <iostream>
using namespace std;

int main(){
    int myArray[5] = {1, 2, 3, 4, 5};

    myArray[2] = 10;

    for (int element : myArray) {
        cout << element << " ";
    }

    return 0;
}