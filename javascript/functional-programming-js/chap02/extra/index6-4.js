const countyPath = ['address', 'country'];
const countryL = R.lens(R.path(countyPath), R.assocPath(countryPath));
const inCountry = R.curry((country, person) =>
  R.equals(R.view(country, person), country)
);

people.filter(inCountry('US')).map(console.log);
