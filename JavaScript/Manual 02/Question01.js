const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter a Character: ", function (character) {
    if (!"abcdefghijklmnopqrstuvwxyz".includes(character.toLowerCase())) {
        console.log("Invalid Input");
        rl.close();
        return;
    }
    else {
        if ("aeiou".includes(character.toLowerCase()))
            console.log("The character is a Vowel.");
        else
            console.log("The character is a Consonant.");
    }

    rl.close();
});