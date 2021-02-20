Document.createElement
Last updated November 2020
document.createElement(tagName) is a Web API provided by browsers that let you programmatically create an HTML element.

Here's a quick refresher on how it works:


const element = document.createElement("h2");

// this creates: <h2></h2>
// which you can then insert in the DOM:
document.body.appendChild(element);
We're not really interested in inserting this element in the DOM yet, so for now let's focus on this document.createElement().

It creates an HTML element, and we can see all the properties by using console.dir(element) which is a method provided by browsers to list all the properties of a certain object.
Here's how it looks like:

console.dir(element) output

You won't need most of the properties you see above, however, the most important ones that show up in the full list are:

id
style
className
How would you change the class of the element? What about the style?


const element = document.createElement("h2");
element.className = "name-of-class";
element.style = "color: red; background-color: blue";
You might be wondering, why are we writing all of this in JavaScript?
You have to know that this is equivalent of directly creating the following element in HTML:
<h2 class="name-of-class" style="color: red; background-color: blue"></h2>
The reason why we're creating it in JavaScript will be explained in the next few lessons.

Multiple classes
Multiple classes can be set by separating the class names with a space character.


const element = document.createElement("h2");
element.className = "container center";
// <h2 class="container center"></h2>
className not class
An important thing to notice here is that changing the class of the element happens through the className property and not class.
That's because the keyword class in JavaScript is reserved and is used for creating a JavaScript class that can be called with new (not a CSS class).

You can also change the class with element.classList.add("name-of-class") however, you will see later on in React that you will need to avoid changing the DOM directly (for example with classList.add) and instead define the elements that you'd like to render; more on that later on.
