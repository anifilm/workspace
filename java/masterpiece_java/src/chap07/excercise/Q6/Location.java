package chap07.excercise.Q6;

class Location {
    private String city;
    private int latitude;
    private int longitude;

    public Location(String city, int latitude, int longitude) {
        this.city = city;
        this.latitude = latitude;
        this.longitude = longitude;
    }
    public String getCity() {
        return city;
    }
    public void setCity(String city) {
        this.city = city;
    }
    public int getLatitude() {
        return latitude;
    }
    public void setLatitude(int latitude) {
        this.latitude = latitude;
    }
    public int getLongitude() {
        return longitude;
    }
    public void setLongitude(int longitude) {
        this.longitude = longitude;
    }
}
