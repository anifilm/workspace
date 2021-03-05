import React, { useState, useRef, useEffect } from 'react';

const rspCoords = {
  바위: '0',
  가위: '-150px',
  보: '-300px',
};

const scores = {
  바위: 0,
  가위: 1,
  보: -1,
};

const computerChoice = (imgCoord) => {
  return Object.entries(rspCoords).find(function (v) {
    return v[1] === imgCoord;
  })[0];
};

const RSP = () => {
  const [result, setResult] = useState('게임 시작!');
  const [imgCoord, setImgCoord] = useState(rspCoords.바위);
  const [score, setScore] = useState(0);
  const interval = useRef();

  useEffect(() => { // componentDidMount, componentDidUpdate 역할 (1대1 대응은 아님)
    // console.log('다시 실행');
    interval.current = setInterval(changeHand, 100);
    return () => {  // componentWillUnmount 역할
      // console.log('종료');
      clearInterval(interval.current);
    };
  }, [imgCoord]);

  const changeHand = () => {
    if (imgCoord === rspCoords.가위) {
      setImgCoord(rspCoords.보);
    } else if (imgCoord === rspCoords.바위) {
      setImgCoord(rspCoords.가위);
    } else if (imgCoord === rspCoords.보) {
      setImgCoord(rspCoords.바위);
    }
  };

  const onClickBtn = (choice) => () => {
    if (interval.current) {
      clearInterval(interval.current);
      const myScore = scores[choice];
      const cpuScore = scores[computerChoice(imgCoord)];
      const diff = myScore - cpuScore;
      if (diff === 0) {
        setResult('비겼습니다.');
      } else if ([-1, 2].includes(diff)) {
        setResult('비겼습니다.');
        setScore((prevScore) => prevScore + 1);
      } else {
        setResult('졌습니다.');
        setScore((prevScore) => prevScore - 1);
      }
      setTimeout(() => {
        interval.current = setInterval(changeHand, 100);
      }, 1000);
    }
  };

  return (
    <>
      <div id="computer" style={{ background: `url(./image/rsp.jpg) ${imgCoord} 0` }} />
      <div className="message">{result}</div>
      <div className="message">현재 {score}점</div>
      <br/>
      <div id="button">
        <button id="scissor" className="btn" onClick={onClickBtn('가위')}>가위</button>
        <button id="rock" className="btn" onClick={onClickBtn('바위')}>바위</button>
        <button id="paper" className="btn" onClick={onClickBtn('보')}>보</button>
      </div>
    </>
  );
};

export default RSP;
