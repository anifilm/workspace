/**
 * @param {array} apps
 */
function getLastApp(apps){
    return apps[apps.length-1];
}

//sample usage
console.log(getLastApp(["Chrome", "Clock", "Twitter"]));
