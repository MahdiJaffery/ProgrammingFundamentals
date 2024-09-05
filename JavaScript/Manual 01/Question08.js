const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter n: ", function (n) {
    if (n <= 0) {
        console.log("Invalid Input");
        rl.close();
        return;
    }
    let sum = 0;
    for (let i = 1; i <= n; i++) {
        sum += i;
    }
    let average = sum / n;
    console.log("The sum of the first " + n + " natural numbers is: " + sum);
    console.log("The average of the first " + n + " natural numbers is: " + average);
    rl.close();
});