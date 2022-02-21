import React from 'react';
import styles from '../Todo.module.css';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const TodoInput = ({ input, onInsert, onChangeInput }) => {
  const onChange = (e) => onChangeInput(e.target.value);
  const onSubmit = (e) => {
    e.preventDefault();
    onInsert(input);
    onChangeInput('');
  };

  return (
    <div className={styles.input}>
      <form onSubmit={onSubmit}>
        <input
          type="text"
          placeholder="할 일을 입력하세요"
          value={input}
          onChange={onChange}
        />
        <button type="submit">추가</button>
      </form>
    </div>
  );
};

export default TodoInput;
