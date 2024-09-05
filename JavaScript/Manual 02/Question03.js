const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter your percentage: ", function (percentage) {
    switch (true) {
        case (percentage >= 80):
            console.log("A+");
            break;
        case (percentage >= 70):
            console.log("A");
            break;
        case (percentage >= 60):
            console.log("B");
            break;
        case (percentage >= 50):
            console.log("C");
            break;
        case (percentage >= 40):
            console.log("D");
            break;
        case (percentage < 40):
            console.log("F");
            break;
        default:
            console.log("Invalid Input");
            break;
    }

    rl.close()
})