const arrayList: number[] = [1, 2, 3, 4, 5];

// Convert 'arrayList' to an array (not needed in TypeScript)
const arr: number[] = [...arrayList];

// Print the array
for (const value of arr) {
    console.log(value + ' ');
}