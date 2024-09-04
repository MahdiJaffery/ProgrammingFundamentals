const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the age of Person A: ", function (ageA) {
    rl.question("Enter the age of Person B: ", function (ageB) {
        rl.question("Enter the age of Person C: ", function (ageC) {

            if (ageA > ageB && ageA > ageC)
                console.log("Person A is the oldest.");
            else if (ageB > ageA && ageB > ageC)
                console.log("Person B is the oldest.");
            else if (ageC > ageA && ageC > ageB)
                console.log("Person C is the oldest.");
            else
                console.log("There are multiple people with the same age.");

            if (ageA < ageB && ageA < ageC)
                console.log("Person A is the youngest.");
            else if (ageB < ageA && ageB < ageC)
                console.log("Person B is the youngest.");
            else if (ageC < ageA && ageC < ageB)
                console.log("Person C is the youngest.");
            else
                console.log("There are multiple people with the same age.");
            rl.close();
        });
    });
})