class Inventory{
    /**
     * @param {string[]} items
     */
    constructor(){
        this.items = [];
    }
    addItem(item){
        this.items.push(item);
    }
    getItems(){
        return this.items;
    }
    getCount(){
        return this.items.length;
    }
    exists(item){
        return this.items.includes(item);
    }
    humanReadableFormat(){
        return this.items.join(", ");
    }
}

//sample usage
try {
  const inventory = new Inventory();
  inventory.addItem("Laptop");
  inventory.addItem("Phone");
  console.log(inventory.getItems());//returns items
  console.log(inventory.getCount());//returns number of items
  console.log(inventory.exists("Phone")); //returns true because "Phone" is already an item
  console.log(inventory.humanReadableFormat());// returns string of items separated by a comma and space
} catch (error) {
  // we wrapped the sample usage with try/catch
  // to avoid it from breaking when you have not implemented
  // all the methods yet.
}
