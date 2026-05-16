const arr = [1, 2, 3, 4, 5, 6]; 

// traditional for loop
for(let i=0; i<arr.length; i++) {
    process.stdout.write(arr[i].toString() + ' ');
}

// for of
// for in 
// you can use break in case of forof and forin but not forEach

for(let elem of arr) {
    console.log(elem);
}

for(let key in arr) {
    console.log(key);
}

// forEach
arr.forEach((elem, index) => {
    console.log('elem is ', elem, 'index is ', index)
})

// .filter
let evenArr = arr.filter((elem, index) => {
    return elem%2 === 0;
})
console.log('even arr is ', evenArr)


// .map
let dblArray = arr.map((elem, index) => {
    return elem * 2;
})
console.log('dbl arr is ', dblArray)


// .reduce
let sum = arr.reduce((accumulate, current) => {
    return accumulate + current;
})

console.log('sum is ', sum)




// this task requires, combination of map, filter and reduce 
const anarr = [1, 2, 3, 4, 5, 6]; 
let modifiedArr = arr.map((elem) => elem*2).filter((elem) => elem%10!==0).reduce((acc, curr) => { return acc+curr; }); console.log(modifiedArr);





