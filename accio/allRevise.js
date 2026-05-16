// Destructuring and Spread Operator


// rest operator
const arr = [1, 2, 3, 4, 5, 6, 7, 8];

const [ a, b, c, ...rest] = arr;

const [p, , , , t, ... restu] = arr;

console.log(a, b, c, rest);

console.log('p and t', p, t, restu);

// spread operator

const person = {
    name: "Bharat",
    age: 24, 
    profession: 'SDE',
    places : {
        north: "delhi",
        south: "kerala",
        mountains: "ladakh"
    }
}


const {name, profession, places: {north, south}} = person;
console.log(name, profession, north, south)



function sum(...numbers) {
    let result = 0;
    
    for(let i=0; i<numbers.length; i++) {
        result += numbers[i];
    }
    
    console.log(result)
}

sum(1, 2, 3)
sum(1, 2, 3, 4, 5, 6, 7, 8)
sum(1, 2, 3, 4, 5)


const personAddition = {...person, gender: 'male'}
const anotherArr = [...arr, 100]
console.log(anotherArr)

console.log(personAddition)



const randNos = new Number(25)
console.log(randNos)
console.log(typeof randNos)



// Type conversion and type coersion -> Conversion is manual to make the data types of same kind, coersion is automatic operation 
// by javascript engine to make the task work
// Number, ParseInt, ParseFloat, toString()

const aNos = "259"
console.log(aNos)
console.log(typeof aNos)
console.log(Number(aNos))

// loops in javascript
// types of loops in javascript

const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

for(let i=0; i<array.length; i++) {
    console.log('elem at index', i+1, ' is ', array[i])
}

let row = ''
for(let elem of array) {
    row = row + elem 
}

console.log(row)

for(let index in array) {
    console.log(index)
}
const addOneInArray = array.map(elem => elem+1);
console.log('addOneInArray', addOneInArray)

const evenArr = array.filter((elem) => {
    return elem%2 === 0
})

const sumOfArray = array.reduce((sum, num) => sum + num, 0)
console.log(sumOfArray)

console.log(evenArr)


