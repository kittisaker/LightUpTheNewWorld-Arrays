const arr: number[] = [1, 2, 3, 4, 5];
const arrayList: number[] = [...arr];

for (const value of arrayList) {
    console.log(value + " ");
}