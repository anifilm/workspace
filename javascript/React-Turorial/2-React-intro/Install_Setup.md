Install & Setup
Last updated February 2021
To install the react package into your project, you need to install it using a package manager (such as npm or yarn).
Throughout this course, we'll be using the Node Package Manager (npm).

npm install react
In this course, all the packages that you will need are already installed, so you just have to import them.

If you'd like to set up a local React project on your computer, then it's recommended that you use create-react-app.
We will be covering this tool, later on, for now, we'll start by explaining concepts at a slow, step by step pace to make sure that you have a full understanding of React.
This makes it easier for you to build more advanced concepts, trust us it will work, we just need your patience and perseverance! 😉

Importing React
React is not part of the browser, so you must import it into every JavaScript file where you will need it. Every JavaScript file is a standalone module, meaning variables, functions, and imports in one file/module do not affect other files/modules.

Here's how you can import React (assuming you've already installed it):


import React from "react";
This is called a default import because it follows the following syntax: import Something from "package-name".
A named export would be imported like this: import {Something} from "package-name".

Note how we're importing from "react".
This is called a bare import because you're not importing from a file path. Example of importing from a file path: import Something from "./file". Importing from a file path always starts with ./.

When running a code bundler such as webpack or Parcel (or create-react-app which uses Webpack), then bare imports such as these ones are resolved from your node_modules folder.
It will look for node_modules/react/ to figure out how to import that package.
This is why you need to install react in the first place which downloads it in your node_modules folder.

The React object
When you import React, you get a React object that contains methods and properties.
We will be learning about the methods step by step. Let's start with one of the properties, which is version.
A quick side note: A method is a function that you need to call with parentheses whereas a property is a value that is often pre-calculated.

React exposes its current version through the version property, here's how you can read it, assuming you've imported React:


console.log(React.version); //"16.9.0"
Import Cost
Every time you have an import in your code, pay attention that you are adding code to your application.
We'll keep you aware by telling you the size of every package we mention in this course.
If you've got VSCode setup on your computer, then make sure to install the Import Cost extension as it will show you the size of your imports.

The cost of importing React is approximately 12.5KB.
