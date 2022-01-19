import React from 'react';
import styled, { keyframes } from 'styled-components';

const Wrapper = styled.div`
  display: flex;
  height: 500vh;
  width: 100vw;
  justify-content: center;
  align-items: center;
`;
const rotationAnimation = keyframes`
  /*from {
    transform: rotate(0deg);
    border-radius: 0px;
  }
  to {
    transform: rotate(360deg);
    border-radius: 100px;
  }*/
  0% {
    transform: rotate(0deg);
    border-radius: 0px;
  }
  50% {
    border-radius: 100px;
  }
  100% {
    transform: rotate(360deg);
    border-radius: 0px;
  }
`;
const Box = styled.div`
  background-color: tomato;
  height: 200px;
  width: 200px;
  display: flex;
  justify-content: center;
  align-items: center;
  animation: ${rotationAnimation} 2s linear infinite;
  span {
    font-size: 36px;
    cursor: pointer;
    transition: opacity .2s, transform 1s;
    &:hover {
      transform: scale(2);
    }
    &:active {
      opacity: 0;
    }
  }
`;

const App = () => {
  return (
    <Wrapper>
      <Box>
        <span>🤩</span>
      </Box>
    </Wrapper>
  );
};

export default App;
