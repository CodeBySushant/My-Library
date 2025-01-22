//Not working prompt not installed
const prompt = require('prompt-sync')();

const answer = prompt("What is your favorite animal? ");
if (answer != null && answer.length !== 0) {
   console.log(`Your favorite animal is: ${answer}`);
}
