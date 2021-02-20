/**
 * @param {array} apps
 */
const removeFirstApp = apps => {
    apps.splice(0, 1);
    return apps;
}

//sample usage
const apps = ["Calculator", "Whatsapp", "Chrome", "Firefox"]
console.log(removeFirstApp(apps));
