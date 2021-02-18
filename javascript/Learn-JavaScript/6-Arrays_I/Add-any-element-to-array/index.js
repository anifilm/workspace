/**
 * @param {array} apps
 * @param {string} app
 */
function useApp(apps, app){
    apps.push(app);
    return apps;
}

//sample usage
console.log(useApp(["Clock", "Twitter"], "Firefox"));
