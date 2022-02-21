import React from 'react';

import TodoHeader from './TodoHeader';
import TodoInput from './TodoInput';
import TodoList from './TodoList';
import TodoFooter from './TodoFooter';
import TodoFilter from './TodoFilter';

// 타입스크립트 인터페이스 임포트
import { Todo } from '../App';

// props 타입스크립트 인터페이스 정의
interface Props {
  readonly input: string;
  readonly todos: Todo[];
  readonly onChangeInput: (input: string) => void;
  readonly onInsert: (input: string) => void;
  readonly onToggle: (id: number) => void;
  readonly onRemove: (id: number) => void;
  readonly onClearAll: () => void;
  readonly filter: string;
  readonly onChangeFilter: (filter: string) => void;
}

// 리덕스 스토어 상태와 스토어 상태 변경 함수를 props로 전달받음
const Todos = ({
  input,
  todos,
  onChangeInput,
  onInsert,
  onToggle,
  onRemove,
  onClearAll,
  filter,
  onChangeFilter,
}: Props) => {
  return (
    <div>
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
        onRemove={onRemove}
      />
      <TodoFooter onClearAll={onClearAll} />
    </div>
  );
};

export default Todos;
