const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter an alphabet: ", function (alphabet) {
    if (!"abcdefghijklmnopqrstuvwyz".includes(alphabet.toLowerCase())) {
        console.log("Invalid Input");
        rl.close();
        return;
    }
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
        console.log("The alphabet is a Vowel.");
    else
        console.log("The alphabet is a Consonant.");
    rl.close();
});