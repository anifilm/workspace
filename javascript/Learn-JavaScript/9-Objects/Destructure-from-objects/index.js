/**
 * @param {object} userLocation
 */
const getLatLng = userLocation => {
    //destructure into 2 variables: lat & lng
    const {lat, lng} = userLocation;
    return `The latitude is ${lat} and the longitude is ${lng}`;
}

//sample usage
const userLocation = {
    lat: 24.235235,
    lng: 2.5734,
};
console.log(getLatLng(userLocation));
