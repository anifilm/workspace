import React from 'react';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const CoinPayList = ({ payCoins, isLoading }) => {
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>구매 내역</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && payCoins && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 80, textAlign: 'center' }}>번호</th>
                <th style={{ width: 180, textAlign: 'center' }}>상품명</th>
                <th style={{ width: 180, textAlign: 'center' }}>구매금액</th>
                <th style={{ width: 180, textAlign: 'center' }}>구매일시</th>
              </tr>
            </thead>
            <tbody>
              {!payCoins.length && (
                <tr>
                  <td></td>
                  <td colSpan="4">List is empty.</td>
                </tr>
              )}
              {!!payCoins.length && payCoins.map((payCoin) => (
                  <tr key={payCoin.historyNo}>
                    <td style={{ textAlign: 'center' }}>
                      {payCoin.historyNo}
                    </td>
                    <td style={{ textAlign: 'left', paddingLeft: 50 }}>
                      {payCoin.itemName}
                    </td>
                    <td style={{ textAlign: 'right', paddingRight: 50 }}>
                      {payCoin.amount.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ',')}코인
                    </td>
                    <td style={{ textAlign: 'center' }}>
                      {payCoin.regDate}
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

export default CoinPayList;
