/**
 * @param {array} location
 */
const getLatLng = location => {
    //destructure into 2 variables: lat & lng
    const [lat, lng] = location;
    return `The latitude is ${lat} and the longitude is ${lng}`;
}

//sample usage
const location = [24.235235, 2.5734];
console.log(getLatLng(location));
