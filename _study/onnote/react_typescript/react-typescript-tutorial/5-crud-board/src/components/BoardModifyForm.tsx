import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { Board } from '../App';
import styles from '../Board.module.css';

interface Props {
  readonly board?: Board;
  readonly isLoading: boolean;
  readonly onModify: (boardNo: string, title: string, content: string) => void;
}

function BoardModifyForm({ board, isLoading, onModify }: Props) {
  const [title, setTitle] = useState('');
  const [content, setContent] = useState('');

  const handleChangeTitle = (e: React.ChangeEvent<HTMLInputElement>) => {
    setTitle(e.target.value);
  };
  const handleChangeContent = (e: React.ChangeEvent<HTMLTextAreaElement>) => {
    setContent(e.target.value);
  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    if (!!board) {
      onModify(board.boardNo, title, content);
    }
  };

  useEffect(() => {
    //console.log('useEffect board:', board);
    if (board) {
      //console.log('board.title:', board.title);
      //console.log('board.content:', board.content);
      setTitle(board.title);
      setContent(board.content);
    }
  }, [board]);

  return (
    <div className={styles.centered}>
      <h2>게시판 수정</h2>
      {isLoading && 'Loading...'}
      {!isLoading && board && (
        <>
          <form onSubmit={handleSubmit}>
            <table>
              <tbody>
                <tr>
                  <td>번호</td>
                  <td><input type="text" value={board.boardNo} disabled /></td>
                </tr>
                <tr>
                  <td>등록일시</td>
                  <td><input type="text" value={board.regDate} disabled /></td>
                </tr>
                <tr>
                  <td>작성자</td>
                  <td><input type="text" value={board.writer} disabled /></td>
                </tr>
                <tr>
                  <td>제목</td>
                  <td><input type="text" value={title} onChange={handleChangeTitle} /></td>
                </tr>
                <tr>
                  <td>내용</td>
                  <td><textarea value={content} onChange={handleChangeContent} rows={5}></textarea></td>
                </tr>
              </tbody>
            </table>

            <div className={styles.align_centered}>
              <button type="submit">수정</button>
              <Link to={`/read/${board.boardNo}`}>취소</Link>
            </div>
          </form>
        </>
      )}
    </div>
  );
}

export default BoardModifyForm;
