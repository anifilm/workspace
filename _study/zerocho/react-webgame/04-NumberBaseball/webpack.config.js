const path = require('path');
const ReactRefreshWebpackPlugin = require('@pmmmwh/react-refresh-webpack-plugin');

module.exports = {
  name: 'number-baseball-dev',
  mode: 'development', // 실서비스: production
  devtool: 'inline-source-map', // hidden-source-map
  resolve: {
    extensions: ['.js', '.jsx'],
  },
  entry: {
    app: './client',
  }, // 입력
  module: {
    rules: [{
      test: /\.jsx?$/,
      loader: 'babel-loader',
      options: {
        presets: [
          ['@babel/preset-env', {
            targets: {
              browsers: ['last 2 chrome versions']}, // browserslist
            debug: true,
          }],
          '@babel/preset-react',
        ],
        plugins: [
          '@babel/plugin-proposal-class-properties',
          'react-refresh/babel',
        ],
      },
    }],
  },
  plugins: [
    new ReactRefreshWebpackPlugin(),
  ],
  output: {
    path: path.join(__dirname, 'dist'),
    filename: 'app.js',
    publicPath: '/dist',
  }, // 출력
  devServer: {
    publicPath: '/dist',
    hot: true,
  },
};
