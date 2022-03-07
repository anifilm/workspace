import React from 'react';
import { withRouter } from 'react-router';

import CoinChargeRegisterForm from 'components/coin/CoinChargeRegisterForm';
import { chargeCoin } from 'lib/api';

// withRouter 함수의 기능이 적용되어 속성으로 history를 전달받음
const CoinChargeRegisterContainer = ({ history }) => {
  // 코인충전 처리
  const onRegister = async (amount) => {
    try {
      const response = await chargeCoin(amount);
      alert(response.data);
      history.push('/coin/charge/');
    } catch (err) {
      if (err.response.status === 400) {
        alert('잘못된 요청입니다.');
      } else if (err.response.status === 401) {
        alert('로그인이 필요합니다.');
        history.push('/signin');
      } else if (err.response.status === 403) {
        alert('접근 권한이 없습니다.');
        history.goBack();
      } else {
        alert(err.response.data.message);
      }
    }
  };

  // 코인충전 폼 컴포넌트 표시
  return <CoinChargeRegisterForm onRegister={onRegister} />;
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(CoinChargeRegisterContainer);
