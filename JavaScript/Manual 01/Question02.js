const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter your Weight in Pounds: ", function (weight) {
    rl.question("Enter your Height in Inches: ", function (height) {
        let bmi = (weight / (height * height)) * 703;

        if (bmi < 18.5) {
            console.log("Underweight");
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            console.log("Normal");
        } else if (bmi >= 25 && bmi <= 29.9) {
            console.log("Overweight");
        } else {
            console.log("Obese");
        }

        rl.close();
    });
});