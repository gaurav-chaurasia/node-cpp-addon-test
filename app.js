// hello.js
const addon = require("./build/Release/sum");

// console.log(addon.hello());
// Prints: 'world'

const { render } = require('ejs');
const express = require('express');
const app = express();
const path = require("path");


app.set("views", path.join(__dirname, "views"));
app.set("view engine", "ejs");
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(express.static(path.join(__dirname, "public")));


app.get('/', (req, res) => {
    res.render('index', {content: addon.hello()});
})


app.listen(3000, () => {
    console.log("server is running on port 3000");
});