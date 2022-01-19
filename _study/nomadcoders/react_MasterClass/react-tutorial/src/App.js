import React from 'react';
import styled, { keyframes } from 'styled-components';

const Wrapper = styled.div`
  display: flex;
  height: 50vh;
  width: 100vw;
  justify-content: center;
  align-items: center;
`;
const rotationAnimation = keyframes`
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
const Emoji = styled.span`
  font-size: 36px;
  cursor: pointer;
  z-index: 1;
  transition: opacity .2s, transform 1s;
    &:hover {
      transform: scale(2);
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
  ${Emoji}:active { // Box의 자식인 경우에만 클릭시 적용
    opacity: 0;
  }
`;

const App = () => {
  return (
    <Wrapper>
      <Box>
        <Emoji as="p">🤩</Emoji>
      </Box>
      <Emoji>🔥</Emoji>
    </Wrapper>
  );
};

export default App;
