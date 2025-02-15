module.exports = {
  root: true,
  env: {
    node: true
  },
  extends: ['plugin:vue/essential', '@vue/prettier'],
  parserOptions: {
    parser: 'babel-eslint'
  },
  rules: {
    //"no-console": process.env.NODE_ENV === "production" ? "warn" : "off",
    //"no-debugger": process.env.NODE_ENV === "production" ? "warn" : "off",
    'no-console': 'off',
    'prettier/prettier': ['error', {
      useTabs: false,
      printWidth: 120,
      tabWidth: 2,
      trailingComma: 'none',
      semi: true,
      singleQuote: true,
      bracketSpacing: true,
      arrowParens: 'always',
      endOfLine: 'auto'
    }]
  },
  overrides: [
    {
      files: ['**/__tests__/*.{j,t}s?(x)', '**/tests/unit/**/*.spec.{j,t}s?(x)'],
      env: {
        jest: true
      }
    }
  ]
};
