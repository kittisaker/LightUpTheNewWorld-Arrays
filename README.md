# LightUpTheNewWorld : Chapter 2 Copying Arrays in Java

## Copying Arrays in Java
```cpp
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
```

```java
public class Main {
    public static void main(String[] args) {
        int[] source = {1, 2, 3, 4, 5};
        int[] destination = new int[source.length];
    
        System.arraycopy(source, 0, destination, 0, source.length);
    
        for (int element : destination) {
            System.out.print(element + " ");
        }
    }
}
```

```typescript
const source: number[] = [1, 2, 3, 4, 5];

const destiantion: number[] = [...source];

for (const element of destiantion) {
    console.log(element);
}
```

```python
source = [1, 2, 3, 4, 5]

destiantion = source[:]

for element in destiantion :
    print(element, end=" ")
```

---