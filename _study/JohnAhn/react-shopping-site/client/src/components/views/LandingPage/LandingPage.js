import React, { useEffect, useState } from 'react';
import Axios from 'axios';
import { Icon, Col, Card, Row, Button } from 'antd';
import ImageSlider from '../../utils/ImageSlider';
//import CheckBox from './Sections/CheckBox';
//import RadioBox from './Sections/RadioBox';
//import { continents, price } from './Sections/Datas';
//import SearchFeature from './Sections/SearchFeature';

const { Meta } = Card;

const LandingPage = () => {
  const [products, setProducts] = useState([]);
  const [skip, setSkip] = useState(0);
  const [limit, setLimit] = useState(8);
  const [postSize, setPostSize] = useState();
  const [searchTerms, setSearchTerms] = useState('');

  const [filters, setFilters] = useState({
    continents: [],
    price: [],
  });

  useEffect(() => {
    const variables = {
      skip: skip,
      limit: limit,
    };

    getProducts(variables);
  }, []);

  const getProducts = (variables) => {
    Axios.post('/api/product/getProducts', variables).then((response) => {
      if (response.data.success) {
        if (variables.loadMore) {
          setProducts([...products, ...response.data.productInfo]);
        } else {
          setProducts(response.data.productInfo);
        }
        setPostSize(response.data.postSize);
      } else {
        alert('Failed to fectch product datas');
      }
    });
  };

  const loadMoreHandler = () => {
    let skipResult = skip + limit;

    const variables = {
      skip: skipResult,
      limit: limit,
      loadMore: true,
      filters: filters,
      searchTerm: searchTerms,
    };

    getProducts(variables);
    setSkip(skip);
  };

  const renderCards = products.map((product, index) => {
    return (
      <Col lg={6} md={8} xs={24} key={index}>
        <Card
          hoverable={true}
          cover={
            <a href={`/product/${product._id}`}>
              <ImageSlider images={product.images} />
            </a>
          }
        >
          <Meta title={product.title} description={`$${product.price}`} />
        </Card>
      </Col>
    );
  });

  return (
    <div style={{ width: '75%', margin: '3rem auto' }}>
      <div style={{ textAlign: 'center' }}>
        <h2>
          Let's Travel Anywhere <Icon type="rocket" />
        </h2>
      </div>
      <br />
      <br />

      {/* Filter */}

      {/* Search */}

      {/* Cards */}
      {products.length === 0 ? (
        <div
          style={{
            display: 'flex',
            height: '300px',
            justifyContent: 'center',
            alignItems: 'center',
          }}
        >
          <h2>No post yet...</h2>
        </div>
      ) : (
        <div>
          <Row gutter={[16, 16]}>{renderCards}</Row>
        </div>
      )}
      <br />
      <br />

      {postSize >= limit && (
        <div style={{ display: 'flex', justifyContent: 'center' }}>
          <Button onClick={loadMoreHandler}>Load More</Button>
        </div>
      )}
    </div>
  );
};

export default LandingPage;
