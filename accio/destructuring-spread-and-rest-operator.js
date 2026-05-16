const person = {
    name: 'ajay', 
    position: 'SDE',
    age: 26,
    places: {
        north: 'delhi',
        south: 'kerala',
        east: 'gujarat'
    }
}

const {name, position, places : {north: northPlace, south: southPlace, east: eastPlace}} = person;
console.log('name >>> ', name)
console.log('position >>>', position)
console.log('places >>> ', northPlace, southPlace, eastPlace)


// practical usage of rest operator
function sum (...numbers) {
    let sum = 0;
    for(let i=0; i<numbers.length; i++) {
        sum += numbers[i];
    }
    console.log(sum);
}


sum(1, 2, 3, 4, 5, 6)
sum(1, 2, 3)
sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)


// Spread operator -> converting arr to obj

const obj = {
    a : 1, b : 2, c : 3
}

const newObj = {...obj, d: 4, e: 5}


console.log('newObj >>>', newObj)

const arr = [1, 2, 3, 4, 5]
const newArr = {...arr, '5': 6, '6':7}
console.log('newArr>>>', newArr)


// using spread operator to modify our objects
