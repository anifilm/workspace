import React, { useState, useEffect } from 'react';

import styles from '../Todo.module.css';

const TodoItem = ({ todo, onToggle, onEdit, onRemove }) => {
  const [showInput, setShowInput] = useState(false);
  const [inputText, setInputText] = useState('');
  const editInput = React.createRef();

  const { id, text, done } = todo;

  const onDoubleClick = () => {
    //console.log('onDoubleClick');
    setInputText(text);
    setShowInput(true);
  };
  const onChange = (e) => {
    //console.log('onChange', e.target.value);
    setInputText(e.target.value);
  };
  const handleKeyPress = (e) => {
    if (e.key === 'Enter') {
      //console.log('handleKeyPress Enter inputText', inputText);
      onEdit(id, inputText); // Todo 항목 수정
      setShowInput(false);
    }
  };
  const handleBlur = () => {
    //console.log('handleBlur inputText', inputText);
    setShowInput(false);
  };

  // 마운트될 때 편집 입력 요소값 설정
  useEffect(() => {
    //console.log('useEffect todo', todo);
    if (todo) {
      //console.log('todo.text', todo.text);
      setInputText(todo.text);
    }
  }, [todo]);
  // 마운트될 때 편집 입력 요소 포커스 처리
  useEffect(() => {
    if (editInput.current) {
      editInput.current.focus();
    }
  }, [editInput]);

  return (
    <div className={styles.item}>
      <input type="checkbox" checked={done} onChange={() => onToggle(id)} />
      {!showInput && <span onDoubleClick={onDoubleClick}>{text}</span>}
      {showInput && (
        <input
          ref={editInput}
          value={inputText}
          onChange={onChange}
          onKeyPress={handleKeyPress}
          onBlur={handleBlur}
        />
      )}
      <button onClick={() => onRemove(id)}>삭제</button>
    </div>
  );
};

export default TodoItem;
