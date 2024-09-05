const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter n: ", function (n) {
    let sum = 0.0;

    for (let i = 1; i <= n; i++)
        sum += 1.0 / (Math.pow(i, i));

    console.log("The sum of the series is: " + sum);

    rl.close();
})