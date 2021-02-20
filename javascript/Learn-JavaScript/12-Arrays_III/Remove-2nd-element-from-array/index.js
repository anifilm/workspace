const items = ["Pen", "Paper", "Staples"];
const deletedItem = items.splice(1); // removes one element at index 0
console.log(deletedItem); // ["Pen"]

console.log(items); // ["Paper", "Staples"]
a/**
 * @param {array} apps
 */
const removeSecondApp = apps => {
    //delete second app
    apps.splice(1, 1);
    return apps;
}

//sample usage
const apps = ["Calculator", "Whatsapp", "Chrome", "Firefox"]
console.log(removeSecondApp(apps));
