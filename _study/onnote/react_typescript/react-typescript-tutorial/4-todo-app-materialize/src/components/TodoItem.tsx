import React, { useState, useEffect, useCallback } from 'react';
import { useSelector, useDispatch } from 'react-redux';
import { Todo } from '../App';
// 액션 생성 함수 임포트
import { setEditingId, resetEditingId } from '../actions/todos';
// 상태 인터페이스 임포트
import { TodoState } from '../reducers/todos';

interface Props {
  readonly todo: Todo;
  readonly onToggle: (id: number) => void;
  readonly onEdit: (id: number, input: string) => void;
  readonly onRemove: (id: number) => void;
}

const TodoItem = ({ todo, onToggle, onEdit, onRemove }: Props) => {
  const { id, text, done } = todo;

  // 스토어 상태 조회
  const { editingId } = useSelector((state: TodoState) => ({
    editingId: state.editingId,
  }));
  // 편집 상태 확인
  const showInput = (id === editingId);

  const [inputText, setInputText] = useState('');

  const editInput: React.RefObject<HTMLInputElement> = React.createRef();

  // 스토어 dispathch 사용
  const dispatch = useDispatch();

  // 편집 항목 ID 설정 액션 디스패치 함수
  const onSetEditingId = useCallback((id) => dispatch(setEditingId(id)), [dispatch]);
  // 편집 항목 ID 리셋 액션 디스패치 함수
  const onResetEditingId = useCallback(() => dispatch(resetEditingId()), [dispatch]);

  const onDoubleClick = () => {
    //console.log('onDoubleClick');
    setInputText(text);
    onSetEditingId(id);
  };
  const onChange = (e: React.ChangeEvent<HTMLInputElement>) => {
    //console.log('onChange', e.target.value);
    setInputText(e.target.value);
  };
  const handleKeyPress = (e: React.KeyboardEvent<HTMLInputElement>) => {
    if (e.key === 'Enter') {
      //console.log('handleKeyPress Enter inputText', inputText);
      onEdit(id, inputText); // Todo 항목 수정
      onResetEditingId();
    }
  };
  const handleBlur = () => {
    //console.log('handleBlur inputText', inputText);
    onResetEditingId();
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
    <div className="row">
      <div className="col s8 offset-s2" style={{ border: '1px solid #ffe0e0', padding: 10 }}>
        {!showInput && (
          <>
            <label>
              <input
                type="checkbox"
                checked={done}
                onChange={() => onToggle(id)}
              />
              <span style={{ color: 'white' }}>d</span>
            </label>
            <span onDoubleClick={onDoubleClick}>{text}</span>
            <button
              onClick={() => onRemove(id)}
              className="waves-effect waves-light btn-small red lighten-2 right"
            >삭제</button>
          </>
        )}
        {showInput && (
          <input
            ref={editInput}
            value={inputText}
            onChange={onChange}
            onKeyPress={handleKeyPress}
            onBlur={handleBlur}
          />
        )}
      </div>
    </div>
  );
};

export default TodoItem;
