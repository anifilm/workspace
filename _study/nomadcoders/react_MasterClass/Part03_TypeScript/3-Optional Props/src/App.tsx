import React from 'react';
import styled from 'styled-components';

import Circle from './components/Circle';

const Wrapper = styled.div`
  display: flex;
`;

const App = () => {
  return (
    <Wrapper>
      <Circle bgColor="teal" borderColor="turquoise" />
      <Circle bgColor="tomato" text="I'm here" />
    </Wrapper>
  );
};

export default App;
