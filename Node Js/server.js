//Creating server using express
const express = require('express');
const app = express();

app.get('/', function(req, res){
    res.send('Hello World!');
})

app.get('/greet', (req, res) => {
    res.send('Hi There How are You?');
});

app.get('/idli', (req, res)=>{
    var customized_idli = {
        name : 'rava dosa',
        size : '10 cm radius',
        price : 50,
        is_chutney: false
    }
    res.send(customized_idli);
})
app.listen(3000, () => {
    console.log('Server is running on http://localhost:3000');
});

//To check server in browser search: localhost:3000/greet
