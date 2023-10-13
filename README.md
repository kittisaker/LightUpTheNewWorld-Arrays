# LightUpTheNewWorld : Chapter 5 Convert ArrayList to Array

## Convert ArrayList to Array
```cpp
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
```

```java
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> arrayList = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));

        // Convert 'arrayList' to an array
        Integer[] arr = arrayList.toArray(new Integer[0]);

        // Print the array
        for (Integer value : arr) {
            System.out.print(value + " ");
        }
    }
}
```

```taypscript
const arrayList: number[] = [1, 2, 3, 4, 5];

// Convert 'arrayList' to an array (not needed in TypeScript)
const arr: number[] = [...arrayList];

// Print the array
for (const value of arr) {
    console.log(value + ' ');
}
```

```python
arrayList = [1, 2, 3, 4, 5]

# Convert 'array_list' to an array (not needed in Python)
arr = arrayList[:]

# Print the array
for value in arr:
    print(value, end=' ')
```

---