import React, { useState } from 'react';
import styled from 'styled-components';

interface ContainerProps {
  bgColor: string;
  borderColor: string;
}

const Container = styled.div<ContainerProps>`
  width: 200px;
  height: 200px;
  border-radius: 100px;
  background-color: ${(props) => props.bgColor};
  border: 5px solid ${(props) => props.borderColor};
  text-align: center;
  color: white;
`;

interface CircleProps {
  bgColor: string;
  borderColor?: string; // string 또는 undefined
}

const Circle = ({ bgColor, borderColor }: CircleProps) => {
  const [value, setValue] = useState<string>('');

  return (
    <Container
      bgColor={bgColor}
      borderColor={borderColor ?? bgColor} // borderColor가 undefined인 경우 bgColor를 사용
    />
  );
};

export default Circle;
