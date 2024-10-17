const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter Number of Rows: ", function (rows) {
  rows = parseInt(rows);
  for (let i = rows; i > 0; i--) {
    console.log("*".repeat(i));
  }
  for (let i = 2; i <= rows; i++) {
    console.log("*".repeat(i));
  }
  rl.close();
});
