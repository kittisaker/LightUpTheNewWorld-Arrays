#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arrayList = {1, 2, 3, 4, 5};

    // Convert 'arrayList' to an array
    int* arr = new int[arrayList.size()];
    for (size_t i = 0; i < arrayList.size(); i++){
        arr[i] = arrayList[i];
    }

    // Print the array
    for (size_t i = 0; i < arrayList.size(); i++){
        cout << arr[i] << " ";
    }

    // Don't forget to free the allocated memory
    delete[] arr;    

    return 0;
}