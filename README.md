# LightUpTheNewWorld : Chapter 2 Two Dimensional Array

## Two Dimensional Array
```cpp
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
```

```java
public class Main {
    public static void main(String[] args) {
        // Define a 2D array with 3 rows and 4 columns
        int[][] arr = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        };

        // Access and print elements
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
```

```typescript
// Define a 2D array with 3 rows and 4 columns
const arr: number[][] = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
];

// Access and print elements
for(const row of arr){
    for(const element of row){
        console.log(element);
    }
}
```

```python
# Define a 2D list (array) with 3 rows and 4 columns
arr = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]

# Access and print elements
for row in arr:
    for element in row:
        print(element, end=' ')
    print()
```

<details>
<summary>Output : </summary>

```shell
1 2 3 4 
5 6 7 8 
9 10 11 12
```

</details>

---