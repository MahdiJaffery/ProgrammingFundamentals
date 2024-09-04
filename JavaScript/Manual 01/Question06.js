const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter a Number: ", function (number) {
    if (number % 2 == 0)
        console.log("The number is Even and ");
    else
        console.log("The number is Odd and ");

    if (number <= 10)
        console.log("less than or equal to 10.");
    else if (number <= 20)
        console.log("less than or equal to 20.");
    else if (number <= 30)
        console.log("less than or equal to 30.");
    else if (number <= 40)
        console.log("less than or equal to 40.");
    else if (number <= 50)
        console.log("less than or equal to 50.");
    else
        console.log("greater than 50.");
    rl.close();
});