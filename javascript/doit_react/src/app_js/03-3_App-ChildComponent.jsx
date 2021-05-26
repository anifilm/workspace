import React, { Component } from 'react';
import ChildComponent from './chap03/03-3/ChildComponent';

class App extends Component {
  render() {
    return (
      <ChildComponent
        boolValue={true}
        numValue={1}
        arrayValue={[1, 2, 3]}
        objVlaue={{ name: '제목', age: 30 }}
        nodeValue={<h1>노드</h1>}
        funcValue={() => { console.log('메시지'); }}
      />
    );
  }
}

export default App;
