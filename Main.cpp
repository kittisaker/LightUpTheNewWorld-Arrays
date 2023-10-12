#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    copy(source, source + 5, destination);

    for (int element : destination) {
        cout << element << " ";
    }

    return 0;
}