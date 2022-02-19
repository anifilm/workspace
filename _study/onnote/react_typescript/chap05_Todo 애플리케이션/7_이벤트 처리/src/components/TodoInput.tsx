import React, { useState } from 'react';
import styles from '../Todo.module.css';

interface Props {
  readonly onInsert: (value: string) => void;
}

const TodoInput = ({ onInsert }: Props) => {
  const [value, setValue] = useState('');

  const onChange = (e: React.ChangeEvent<HTMLInputElement>) => {
    setValue(e.target.value);
  };
  const onSubmit = (e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    onInsert(value);
    setValue('');
  };

  return (
    <div className={styles.input}>
      <form onSubmit={onSubmit}>
        <input type="text" placeholder="할 일을 입력하세요" value={value} onChange={onChange} />
        <button type="submit">추가</button>
      </form>
      <h1>TodoInput</h1>
    </div>
  );
};

export default TodoInput;
