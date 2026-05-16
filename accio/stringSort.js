
let strArr = ["Ajay", "Ram", "Vivek", "Prikshit"]
             
console.log(strArr.sort())

console.log(strArr.sort((a, b) => a.localeCompare(b, undefined, {
sensitivity: "base"
})))

let anotherStrArr = ["Ajay", "ram", "Vivek", "prikshit"];

console.log(anotherStrArr.sort())
console.log(anotherStrArr.sort((a, b) => a.localeCompare(b, undefined, {
sensitivity : "base"
})))

