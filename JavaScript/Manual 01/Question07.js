const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter S or s for Square and C or c for Circle: ", function (shape) {
    if (shape == 'S' || shape == 's') {
        rl.question("Enter the side of the Square: ", function (side) {
            console.log("The Area of the Square is: " + (side * side));
            rl.close();
        });
    } else if (shape == 'C' || shape == 'c') {
        rl.question("Enter the radius of the Circle: ", function (radius) {
            console.log("The Area of the Circle is: " + (Math.PI * radius * radius));
            rl.close();
        });
    } else {
        console.log("Invalid Input");
        rl.close();
    }
})