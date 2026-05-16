const arr = [1, 2, 3, 4, 5];
const newArr = new Array(6, 7, 8, 9, 10);
// adding multiple elements inside new array will insert the elements, but adding a single digit will create the size of the array

newArr.push(11);
console.log(newArr)
newArr.pop();
newArr.unshift('delhi')
newArr.shift()



console.log(newArr)

// arr.includes(10)
// arr.indexof(4)
// arr.isArray(anotherArray)
// arr.concat(anotherArr)
// arr.join("-"), arr.join()