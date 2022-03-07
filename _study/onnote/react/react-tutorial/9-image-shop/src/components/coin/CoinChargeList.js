import React from 'react';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const CoinChargeList = ({ chargeCoins, isLoading }) => {
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>충전 내역</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && chargeCoins && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 80, textAlign: 'center' }}>번호</th>
                <th style={{ width: 180, textAlign: 'center' }}>충전내역</th>
                <th style={{ width: 100, textAlign: 'center' }}>충전일시</th>
              </tr>
            </thead>
            <tbody>
              {!chargeCoins.length && (
                <tr>
                  <td></td>
                  <td colSpan="3">List is empty.</td>
                </tr>
              )}
              {!!chargeCoins.length && chargeCoins.map((chargeCoin) => (
                  <tr key={chargeCoin.historyNo}>
                    <td style={{ textAlign: 'center' }}>
                      {chargeCoin.historyNo}
                    </td>
                    <td style={{ textAlign: 'right', paddingRight: 80 }}>
                      {chargeCoin.amount.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ',')}코인
                    </td>
                    <td style={{ textAlign: 'center' }}>
                      {chargeCoin.regDate}
                    </td>
                  </tr>
                ))}
            </tbody>
          </table>
        </>
      )}
    </div>
  );
};

export default CoinChargeList;
