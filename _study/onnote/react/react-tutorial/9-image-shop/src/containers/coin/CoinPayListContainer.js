import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import CoinPayList from 'components/coin/CoinPayList';
import { FETCH_PAY_LIST, fetchPayList } from 'modules/coin';

const CoinPayListContainer = () => {
  // 스토어 상태 조회
  const { payCoins, isLoading } = useSelector(({ coin, loading }) => ({
    payCoins: coin.payCoins,
    isLoading: loading[FETCH_PAY_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 구매내역을 가져옴
  useEffect(() => {
    dispatch(fetchPayList());
  }, [dispatch]);

  // 구매내역 컴포넌트 표시
  return <CoinPayList payCoins={payCoins} isLoading={isLoading} />;
};

export default CoinPayListContainer;
