React.createElement
Last updated January 2021
In React, you won't be using document.createElement.
However, we did see how it works because it shares some similarities with React.createElement but it's not the same thing.

Comparison
Let's compare document.createElement and React.createElement.

Return value
document.createElement returns a DOM element (for example a div or an h1). Whereas React.createElement returns an object that represents the DOM element.
The object looks something like this:


const element = React.createElement("h1");
//returns an object similar to this one:
{
  type: 'h1',
  props: {}
}
The reason why React.createElement returns an object rather than the DOM element itself is because React operates a Virtual DOM. We will cover the virtual DOM later on, but for now, here's a simplified explanation of what it means:
A virtual DOM is when a representation of the UI is kept in memory and synced with the DOM.

So React.createElement returns an object rather than a DOM element because this allows React to do some performance optimizations (such as the Virtual DOM).

Changing the class/style
This is where these 2 methods are similar in terms of syntax:


React.createElement("h1", {className: "center", style: "color: red"})
Notice how className is className and not class because we're talking about the same properties as the one in the previous lesson.

Writing text
To write a text inside the element, you have to provide the 3rd parameter for React.createElement which is called children (so it also accepts other Elements for later on).


React.createElement("h1", {}, "Hello World")
This returns an Object representing an h1 that contains Hello World.

Notice how we're saying that we don't want to set a className or style (or other options) so we pass {} as the second parameter (you could also pass null).

If you think that the syntax is a bit ugly and overcomplicated, you're totally right to think so. We will be using JSX which replaces the code above with a <h1>Hello World</h1>. However, JSX is NOT exactly the same as HTML hence why you should learn React.createElement first.

What is a React Element?
In React, an Element is the smallest building block.
It is a representation of what the smallest piece of your User Interface will look like. In its simplest example, that could be a paragraph with the text Welcome inside of it (<p>Welcome</p>).
You will see later on how we will combine several Elements as well as advanced logic to build our supermarket shopping Web App.
