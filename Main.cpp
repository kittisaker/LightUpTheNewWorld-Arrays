#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> arrayList(arr, arr + size);

    for(int value : arrayList){
        cout << value << " ";
    }

    return 0;
}