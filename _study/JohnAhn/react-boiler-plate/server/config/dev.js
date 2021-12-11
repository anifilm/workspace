require('dotenv').config();
const userId = process.env.USER_ID;
const userPw = process.env.USER_PW;

module.exports = {
  mongoURI: `mongodb+srv://${userId}:${userPw}@cluster0.hpa4f.mongodb.net/react-boiler-plate?retryWrites=true&w=majority`,
};
