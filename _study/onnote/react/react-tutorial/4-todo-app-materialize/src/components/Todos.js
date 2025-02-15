import React from 'react';
import TodoHeader from './TodoHeader';
import TodoInput from './TodoInput';
import TodoList from './TodoList';
import TodoFooter from './TodoFooter';
import TodoFilter from './TodoFilter';

// 리덕스 스토어 상태와 스토어 상태 변경 함수를 props로 전달받음
const Todos = ({
  input,
  todos,
  filter,
  onChangeInput,
  onInsert,
  onToggle,
  onEdit,
  onRemove,
  onClearAll,
  onChangeFilter,
}) => {
  return (
    <div className="container">
      <TodoHeader />
      <TodoInput
        input={input}
        onChangeInput={onChangeInput}
        onInsert={onInsert}
      />
      <TodoFilter
        filter={filter}
        onChangeFilter={onChangeFilter}
      />
      <TodoList
        todos={todos}
        onToggle={onToggle}
        onEdit={onEdit}
        onRemove={onRemove}
      />
      <TodoFooter onClearAll={onClearAll} />
    </div>
  );
};

export default Todos;
