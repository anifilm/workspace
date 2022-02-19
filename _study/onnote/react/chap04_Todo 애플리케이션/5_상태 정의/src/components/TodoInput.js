import React, { useState } from 'react';

import styles from '../Todo.module.css';

const TodoInput = () => {
  const [value, setValue] = useState('');

  return (
    <div className={styles.input}>
      <form>
        <input type="text" placeholder="할 일을 입력하세요" value={value} />
        <button type="submit">추가</button>
      </form>
      <h1>TodoInput</h1>
    </div>
  );
};

export default TodoInput;
