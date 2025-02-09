/**
 * 본문에서 사용한 불변 값 객체
 * 저자: 루이스 아텐시오
 */
function coordinate(lat, long) {
  let _lat = lat;
  let _long = long;
  return {
    latitude: function () {
      return _lat;
    },
    longitude: function () {
      return _long;
    },
    translate: function (dx, dy) {
      return coordinate(_lat + dx, _long + dy);
    },
    toString: function () {
      return '(' + _lat + ',' + _long + ')';
    },
  };
}

function zipCode(code, location) {
  let _code = code;
  let _location = location || '';

  return {
    code: function () {
      return _code;
    },
    location: function () {
      return _location;
    },
    fromString: function (str) {
      let parts = str.split('-');
      return zipCode(parts[0], parts[1]);
    },
    toString: function () {
      return _code + '-' + _location;
    },
  };
}

module.exports = {
  coordinate: coordinate,
  zipCode: zipCode,
};
