const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter an Arithmetic Operator: ", function (operator) {
    rl.question("Enter First Number: ", function (firstNumber) {
        rl.question("Enter Second Number: ", function (secondNumber) {
            switch (operator) {
                case '+':
                    console.log("The Sum of " + firstNumber + " and " + secondNumber + " is: " + (parseFloat(firstNumber) + parseFloat(secondNumber)));
                    break;
                case '-':
                    console.log("The Difference of " + firstNumber + " and " + secondNumber + " is: " + (parseFloat(firstNumber) - parseFloat(secondNumber)));
                    break;
                case '*':
                    console.log("The Product of " + firstNumber + " and " + secondNumber + " is: " + (parseFloat(firstNumber) * parseFloat(secondNumber)));
                    break;
                case '/':
                    console.log("The Division of " + firstNumber + " and " + secondNumber + " is: " + (parseFloat(firstNumber) / parseFloat(secondNumber)));
                    break;
                case '%':
                    if (secondNumber == 0) {
                        console.log("Cannot Divide by Zero");
                        break;
                    }
                    console.log("The Modulus of " + firstNumber + " and " + secondNumber + " is: " + (parseFloat(firstNumber) % parseFloat(secondNumber)));
                    break;
                default:
                    console.log("Invalid Operator");
            }
            rl.close();
        })
    })
})