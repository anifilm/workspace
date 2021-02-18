/**
 * @param {array} apps
 */
function useCalculator(apps){
  apps.push("Calculator");
  return apps;
}

//sample usage
console.log(useCalculator(["Clock", "Twitter"])) ;
