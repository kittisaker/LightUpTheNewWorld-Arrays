#include <iostream>
using namespace std;

int main(){
    // Define a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Access and print elements
    for(const auto& row : arr){
        for(int element : row){
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}