import React, { useCallback, useState } from 'react';
import PropTypes from 'prop-types';

import { PlusOutlined } from '@ant-design/icons';

import ImagesZoom from './ImagesZoom';

const PostImages = ({ images }) => {
  const [showImagesZoom, setShowImagesZoom] = useState(false);

  const onZoom = useCallback(() => {
    setShowImagesZoom(true);
  }, []);
  const onClose = useCallback(() => {
    setShowImagesZoom(false);
  }, []);

  // TODO: 케루셀 이미지를 바로 볼수 있도록 하는 것을 고려해 볼 것
  if (images.length === 1) {
    return (
      <>
        <img
          role="presentation"
          src={`${images[0].src}`}
          alt={images[0].src}
          onClick={onZoom}
        />
        {showImagesZoom && <ImagesZoom images={images} onClose={onClose} />}
      </>
    );
  }
  if (images.length === 2) {
    return (
      <>
        <img
          role="presentation"
          src={`${images[0].src}`}
          alt={images[0].src}
          onClick={onZoom}
          style={{ width: '50%', display: 'inline-block' }}
        />
        <img
          role="presentation"
          src={`${images[1].src}`}
          alt={images[1].src}
          onClick={onZoom}
          style={{ width: '50%', display: 'inline-block' }}
        />
        {showImagesZoom && <ImagesZoom images={images} onClose={onClose} />}
      </>
    );
  }
  return (
    <>
      <div>
        <img
          role="presentation"
          src={`${images[0].src}`}
          alt={images[0].src}
          onClick={onZoom}
          style={{ width: '50%' }}
        />
        <div
          role="presentation"
          onClick={onZoom}
          style={{
            display: 'inline-block',
            width: '50%',
            textAlign: 'center',
            verticalAlign: 'middle',
          }}
        >
          <PlusOutlined />
          <br />
          {images.length - 1}
          개의 사진 더보기
        </div>
      </div>
      {showImagesZoom && <ImagesZoom images={images} onClose={onClose} />}
    </>
  );
};

PostImages.propTypes = {
  images: PropTypes.arrayOf(PropTypes.object),
};

export default PostImages;
