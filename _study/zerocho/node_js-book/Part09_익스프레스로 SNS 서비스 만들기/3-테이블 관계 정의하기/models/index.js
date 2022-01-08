const Sequelize = require('sequelize');

const dotenv = require('dotenv');
dotenv.config();

const User = require('./user');
const Post = require('./post');
const Hashtag = require('./hashtag');

const env = process.env.NODE_ENV || 'development';
const config = require('../config/config')[env];
config.password = process.env.MYSQL_USER_PW;

const db = {};

const sequelize = new Sequelize(config.database, config.username, config.password, config);

db.sequelize = sequelize;
db.Sequelize = Sequelize;

db.User = User;
db.Post = Post;
db.Hashtag = Hashtag;

User.init(sequelize);
Post.init(sequelize);
Hashtag.init(sequelize);

User.associate(db);
Post.associate(db);
Hashtag.associate(db);

module.exports = db;
