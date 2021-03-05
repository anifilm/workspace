import React, { memo } from 'react';

const Ball = memo(({ number }) => {
  let background;
  let color;
  if (number <= 10) {
    color = 'White';
    background = 'Gold';
  } else if (number <= 20) {
    color = 'White';
    background = 'CornflowerBlue';
  } else if (number <= 30) {
    color = 'White';
    background = 'Crimson';
  } else if (number <= 40) {
    color = 'White';
    background = 'DarkGrey';
  } else {
    color = 'White';
    background = 'SeaGreen';
  }
  return (
    <div className="ball b1" style={{ background, color }}>{number}</div>
  );
});

export default Ball;
