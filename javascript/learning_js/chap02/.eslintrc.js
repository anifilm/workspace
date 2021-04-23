module.exports = {
  env: {
    node: true,
    commonjs: true,
    es6: true,
  },
  extends: 'eslint:recommended',
  parserOptions: {
    ecmaVersion: 2015,
  },
  rules: {
    indent: ['error', 2],
    semi: ['error', 'always'],
  },
};
