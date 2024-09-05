const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter your GPA: ", function (gpa) {
    if (gpa <= 0.99)
        console.log("Failed Semester");
    else if (gpa <= 1.99)
        console.log("On Probation for next Semester");
    else if (gpa <= 2.99)
        console.log("No Comments");
    else if (gpa <= 3.49)
        console.log("Dean's List for Semester");
    else if (gpa <= 4.00)
        console.log("Highest Honors for Semester");
    else
        console.log("Invalid Input");

    rl.close();
});