import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import CoinChargeList from 'components/coin/CoinChargeList';
import { FETCH_CHARGE_LIST, fetchChargeList } from 'modules/coin';

const CoinChargeListContainer = () => {
  // 스토어 상태 조회
  const { chargeCoins, isLoading } = useSelector(({ coin, loading }) => ({
    chargeCoins: coin.chargeCoins,
    isLoading: loading[FETCH_CHARGE_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 상품 목록을 가져옴
  useEffect(() => {
    dispatch(fetchChargeList());
  }, [dispatch]);

  // 충전내역 컴포넌트 표시
  return <CoinChargeList chargeCoins={chargeCoins} isLoading={isLoading} />;
};

export default CoinChargeListContainer;
