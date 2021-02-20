const initMap = () => {
    // use the mapbox SDK here
    mapboxgl.accessToken = "pk.eyxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    const map = new mapboxgl.Map({
        container: 'map',
        style: 'mapbox://styles/mapbox/dark-v10',
        center: [4.894584, 52.36662],
        zoom: 12.5
    });

    const popup = new mapboxgl.Popup()
    .setHTML(`<h2>Learn JavaScript offices</h2><p>Come say hi!</p>`);

    const marker = new mapboxgl.Marker()
    .setLngLat([20, 10])
    .addTo(map);
}

const script = document.createElement("script");
script.src = "https://api.mapbox.com/mapbox-gl-js/v1.8.1/mapbox-gl.js";
script.onload = () => {
    initMap();
}

document.body.appendChild(script)
