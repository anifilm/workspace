import React from 'react';
import styles from '../Todo.module.css';

// filter, onChangeFilter props로 수신
const TodoFilter = ({ filter, onChangeFilter }) => {
  // 필터링 유형 변경 이벤트 처리 함수
  const handleFilter = (e) => onChangeFilter(e.target.value);

  return (
    <div className={styles.filter}>
      <input type="radio" value="ALL" checked={filter === 'ALL'} onChange={handleFilter} />전체{' '}
      <input type="radio" value="NOTDONE" checked={filter === 'NOTDONE'} onChange={handleFilter} />미완료{' '}
      <input type="radio" value="DONE" checked={filter === 'DONE'} onChange={handleFilter} />완료
    </div>
  );
};

export default TodoFilter;
