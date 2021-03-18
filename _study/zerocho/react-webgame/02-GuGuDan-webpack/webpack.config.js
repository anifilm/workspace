const path = require('path');
const webpack = require('webpack');

module.exports = {
  mode: 'development',
  devtool: 'inline-source-map', // hidden-source-map
  resolve: {
    extensions: ['.js', '.jsx'],
  },

  entry: {
    app: './client',
  },
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
          },],
          '@babel/preset-react',
        ],
        plugins: [],
      },
    },],
  },
  output: {
    path: path.join(__dirname, 'dist'),
    filename: 'app.js',
  },
};
