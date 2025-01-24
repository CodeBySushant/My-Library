function multiply(a, b){
    // Multiply two numbers
    return a * b;
}
var result = multiply(5, 4);
console.log("The result of multiplication is: ",result);

//Instead other method of writing same function:
var add = (a, b) => a + b;
var result = add(4, 5);
console.log(result);