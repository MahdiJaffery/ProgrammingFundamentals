const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let numbers = [];

rl.question("Enter the first integer: ", function(num1) {
    numbers.push(parseInt(num1));

    rl.question("Enter the second integer: ", function(num2) {
        numbers.push(parseInt(num2));

        rl.question("Enter the third integer: ", function(num3) {
            numbers.push(parseInt(num3));

            rl.question("Enter the fourth integer: ", function(num4) {
                numbers.push(parseInt(num4));

                rl.question("Enter the fifth integer: ", function(num5) {
                    numbers.push(parseInt(num5));

                    // Initialize largest and smallest
                    let largest = numbers[0];
                    let smallest = numbers[0];

                    // Find the largest and smallest numbers
                    for (let i = 1; i < numbers.length; i++) {
                        if (numbers[i] > largest) {
                            largest = numbers[i];
                        }
                        if (numbers[i] < smallest) {
                            smallest = numbers[i];
                        }
                    }

                    // Output the results
                    console.log("The largest number is: " + largest);
                    console.log("The smallest number is: " + smallest);

                    rl.close();
                });
            });
        });
    });
});

