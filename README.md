# LightUpTheNewWorld : Chapter 4 Convert Array to ArrayList

## Convert Array to ArrayList

```cpp
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
```

```java
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Integer[] arr = {1, 2, 3, 4, 5};

        // List<Integer> arrayList = new ArrayList<>(Arrays.asList(arr));
        List<Integer> arrayList = Arrays.asList(arr);
    
        for(int value : arrayList){
            System.out.print(value + " ");
        }
    }
}
```

```typescript
// (not needed in TypeScript)
const arr: number[] = [1, 2, 3, 4, 5];
const arrayList: number[] = [...arr];

for (const value of arrayList) {
    console.log(value + " ");
}
```

```python
# (not needed in Python)
arr = [1, 2, 3, 4, 5]
array_list = list(arr)

for value in array_list:
    print(value, end=" ")
```

---