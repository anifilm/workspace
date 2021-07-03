module.exports = {
  root: true,
  env: {
    node: true
  },
  extends: ['plugin:vue/essential', '@vue/standard'],
  parserOptions: {
    parser: 'babel-eslint'
  },
  plugins: [
    'vue'
  ],
  rules: {
    semi: ['error', 'always'], // 세미콜론 규칙 설정
    'space-before-function-paren': ['error', 'never'], // data() 함수명 괄호 공백 없이
    'no-unused-vars': 'off', // 임포트 파일 관련
    'no-console': process.env.NODE_ENV === 'production' ? 'warn' : 'off',
    'no-debugger': process.env.NODE_ENV === 'production' ? 'warn' : 'off'
  }
};
