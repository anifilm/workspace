/**
 * @param {object} userLocation
 */
const getLatLngElevation = userLocation => {
    //destructure into 3 variables: lat, lng & elevation (defaulting to 0)
    const {lat, lng, elevation = 0} = userLocation;
    return `The latitude is ${lat}, the longitude is ${lng} and the elevation is ${elevation} meters`;
}

//sample usage
const userLocation = {
    lat: 24.235235,
    lng: 2.5734,
};
console.log(getLatLngElevation(userLocation));
