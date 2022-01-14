import React, { useCallback, useState } from 'react';
import PropTypes from 'prop-types';

import { PlusOutlined } from '@ant-design/icons';

const PostImages = ({ images }) => {
  const [showImagesZoom, setShowImagesZoom] = useState(false);

  const onZoom = useCallback(() => {
    setShowImagesZoom(true);
  }, []);
  const onClose = useCallback(() => {
    setShowImagesZoom(false);
  }, []);

  if (images.length === 1) {
    return (
      <>
        <img
          role="presentation"
          src={`${images[0].src}`}
          alt={images[0].src}
          onClick={onZoom}
        />
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
    </>
  );
};

PostImages.propTypes = {
  images: PropTypes.arrayOf(PropTypes.object),
};

export default PostImages;
