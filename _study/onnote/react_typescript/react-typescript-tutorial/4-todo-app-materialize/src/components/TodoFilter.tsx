import React from 'react';

// props 타입스크립트 인터페이스 정의
interface Props {
  readonly filter: string;
  readonly onChangeFilter: (filter: string) => void;
}

// filter, onChangeFilter props로 수신
const TodoFilter = ({ filter, onChangeFilter }: Props) => {
  // 필터링 유형 변경 이벤트 처리 함수
  const handleFilter = (e: React.ChangeEvent<HTMLInputElement>) => onChangeFilter(e.target.value);

  return (
    <div className="row">
      <div className="col s1.5 offset-s3">
        <label>
          <input
            className="with-gap"
            type="radio"
            value="ALL"
            checked={filter === 'ALL'}
            onChange={handleFilter}
          />
          <span>전체</span>
        </label>
      </div>
      <div className="col s1.5">
        <label>
          <input
            className="with-gap"
            type="radio"
            value="NOTDONE"
            checked={filter === 'NOTDONE'}
            onChange={handleFilter}
          />
          <span>미완료</span>
        </label>
      </div>
      <div className="col s1.5">
        <label>
          <input
            className="with-gap"
            type="radio"
            value="DONE"
            checked={filter === 'DONE'}
            onChange={handleFilter}
          />
          <span>완료</span>
        </label>
      </div>
    </div>
  );
};

export default TodoFilter;
