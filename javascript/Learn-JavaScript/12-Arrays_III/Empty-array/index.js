/**
 * @param {array} apps
 */
const emptyArray = apps => {
    //empty apps
    apps.length = 0;
    return apps;
}

//sample usage
const apps = ["Calculator", "Whatsapp", "Chrome", "Firefox"]
console.log(emptyArray(apps));
