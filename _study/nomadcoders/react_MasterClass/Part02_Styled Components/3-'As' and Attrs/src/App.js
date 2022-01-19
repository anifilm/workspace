import React from 'react';
import styled from 'styled-components';

const Father = styled.div`
  /*display: flex;*/
`;
const Input = styled.input.attrs({ require: true })`
  /*background-color: tomato;*/
  display: block;
  margin: 10px;
  padding: 5px;
  width: 240px;
`;
const Button = styled.button`
  background-color: ${(props) => props.bgColor};
  color: white;
  border: 0;
  border-radius: 15px;
  display: inline-block;
  font-size: 14px;
  text-align: center;
  width: 100px;
  margin: 10px;
  padding: 10px;
`;

const App = () => {
  return (
    <Father as="header">
      <Input />
      <Input />
      <Input />
      <Input />
      <Input />
      <Button bgColor="tomato">Login</Button>
      <Button bgColor="lightblue" as="a" href="/">Cancel</Button>
    </Father>
  );
};

export default App;
