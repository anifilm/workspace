import React, {useState} from 'react';
import styles from '../Todo.module.css';

const TodoInput = () => {
  const [value, setValue] = useState('');

  return (
    <div className={styles.input}>
      <form>
        <input type="text" value={value} placeholder="할 일을 입력하세요" />
        <button type="submit">추가</button>
      </form>
    </div>
  );
};

export default TodoInput;
