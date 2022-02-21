import React, { useState, useEffect, useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
import { setEditingId, resetEditingId } from '../modules/todos';
import styles from '../Todo.module.css';

const TodoItem = ({ todo, onToggle, onEdit, onRemove }) => {
  const { id, text, done } = todo;

  // 스토어 상태 조회
  const { editingId } = useSelector((state) => ({
    editingId: state.editingId,
  }));
  // 편집 상태 확인
  const showInput = (id === editingId);

  const [inputText, setInputText] = useState('');
  const editInput = React.createRef();

  // 스토어 dispathch 사용
  const dispatch = useDispatch();

  // 편집 항목 ID 설정 액션 디스패치 함수
  const onSetEditingId = useCallback((id) => dispatch(setEditingId(id)), [dispatch]);
  // 편집 항목 ID 리셋 액션 디스패치 함수
  const onResetEditingId = useCallback(() => dispatch(resetEditingId()), [dispatch]);

  const onDoubleClick = () => {
    //console.log('onDoubleClick');
    onSetEditingId(id); // 편집 항목 ID 설정
    setInputText(text);
  };
  const onChange = (e) => {
    //console.log('onChange', e.target.value);
    setInputText(e.target.value);
  };
  const handleKeyPress = (e) => {
    if (e.key === 'Enter') {
      //console.log('handleKeyPress Enter inputText', inputText);
      onEdit(id, inputText); // Todo 항목 수정
      onResetEditingId(); // 편집 항목 ID 리셋
    }
  };
  const handleBlur = () => {
    //console.log('handleBlur inputText', inputText);
    onResetEditingId(); // 편집 항목 ID 리셋
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
