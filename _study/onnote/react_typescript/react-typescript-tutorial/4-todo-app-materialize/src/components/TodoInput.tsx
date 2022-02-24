import React from 'react';

// props 타입스크립트 인터페이스 정의
interface Props {
  readonly input: string;
  readonly onChangeInput: (input: string) => void;
  readonly onInsert: (input: string) => void;
}

const TodoInput = ({ input, onChangeInput, onInsert }: Props) => {
  // 텍스트 입력 요소 변경 이벤트 처리 함수
  const onChange = (e: React.ChangeEvent<HTMLInputElement>) =>
    onChangeInput(e.target.value);
  // 폼 submit 이벤트 처리 함수
  const onSubmit = (e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    if (input.trim() === '') {
      alert('내용을 입력하세요.');
      onChangeInput('');
      return;
    }
    onInsert(input.trim());
    onChangeInput('');
  };

  return (
    <div className="row">
      <form onSubmit={onSubmit}>
        <div className="col s5 offset-s3">
          <input
            type="text"
            value={input}
            onChange={onChange}
            placeholder="할 일을 입력하세요"
          />
        </div>
        <div className="col s4">
          <button
            type="submit"
            className="waves-effect waves-light btn"
          >추가</button>
        </div>
      </form>
    </div>
  );
};

export default TodoInput;
