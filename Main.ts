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