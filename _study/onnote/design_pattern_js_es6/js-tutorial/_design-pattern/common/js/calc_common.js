const CALC = {};

CALC.createNameSpace = function (nsValue) {
  let parts = nsValue.split('.');
  let parent = CALC;

  if (parts[0] === 'CALC') {
    parts = parts.slice(1);
  }

  for (let i = 0; i < parts.length; i++) {
    if (typeof parent[parts[i]] === 'undefined') {
      parent[parts[i]] = {};
    }

    parent = parent[parts[i]];
  }

  return parent;
}
