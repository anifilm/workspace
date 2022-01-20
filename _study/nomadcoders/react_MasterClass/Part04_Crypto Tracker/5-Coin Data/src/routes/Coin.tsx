import React, { useState, useEffect } from 'react';
import { useParams, useLocation } from 'react-router';
import styled from 'styled-components';

const Container = styled.div`
  padding: 0 20px;
  max-width: 480px;
  margin: 0 auto;
`;
const Header = styled.header`
  height: 15vh;
  display: flex;
  justify-content: center;
  align-items: center;
`;
const Title = styled.h1`
  font-size: 48px;
  color: ${(props) => props.theme.accentColor};
`;
const Loader = styled.span`
  text-align: center;
  display: block;
`;

interface RouteParams {
  coinId: string;
}
interface RouteState {
  name: string;
}

const Coin = () => {
  const [loading, setLoading] = useState(true);
  const [info, setInfo] = useState({});
  const [priceInfo, setPriceInfo] = useState({});

  const { coinId } = useParams<RouteParams>();
  const { state } = useLocation<RouteState>();

  useEffect(() => {
    (async () => {
      const infoResponse = await fetch(`https://api.coinpaprika.com/v1/coins/${coinId}`);
      const infoData = await infoResponse.json();
      const priceResponse = await fetch(`https://api.coinpaprika.com/v1/tickers/${coinId}`);
      const priceData = await priceResponse.json();
      console.log(infoData);
      console.log(priceData);
      setInfo(infoData);
      setPriceInfo(priceData);
    })();
  }, []);

  return (
    <Container>
      <Header>
        <Title>{state?.name || 'Loading...'}</Title>
      </Header>
      {loading ? <Loader>Loading...</Loader> : null}
    </Container>
  );
};

export default Coin;
