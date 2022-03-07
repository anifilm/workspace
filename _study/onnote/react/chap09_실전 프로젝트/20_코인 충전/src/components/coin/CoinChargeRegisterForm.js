import React, { useState, useCallback } from 'react';
import { Link } from 'react-router-dom';

// 등록 처리 함수를 컴포넌트 속성으로 전달 받음
const CoinChargeRegisterForm = ({ onRegister }) => {
  // 컴포넌트 상태 설정
  const [amount, setAmount] = useState(0);

  // 충전금액의 변경을 처리하는 함수
  const handleChangeAmount = useCallback((e) => {
    setAmount(e.target.value);
  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(amount);
  }, [amount, onRegister]);

  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>코인 충전</h3>
      <div className="row">
        <form onSubmit={handleSubmit} className="col s12">
          <div className="row">
            <div className="input-field col s12">
              <input
                type="text"
                id="chargeAmount"
                value={amount}
                onChange={handleChangeAmount}
                required
              />
              <label className="active" htmlFor="chargeAmount">충전금액</label>
            </div>
          </div>
          <br />
          <Link to="/coin/charge" className="waves-effect waves-light btn">충전내역</Link>{' '}
          <button type="submit" className="waves-effect waves-light btn blue">충전</button>
        </form>
      </div>
    </div>
  );
};

export default CoinChargeRegisterForm;
