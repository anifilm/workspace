/**
 * @typedef {Object} User
 * @property {string} id - 사용자 아이디
 * @property {string} name - 사용자 이름
 */

/**
 * @returns {User} 1번 사용자
 */
function fetchData() {
  return axios.get('http://localhost:300/users/1');
}
