const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter Number of Units Purchased: ", function (units) {
    let cost = 50;

    let total = cost * units;

    if (total >= 600)
        total = total * 0.7;
    console.log("The Total Cost of the Purchase is: " + total);
    rl.close();
});