import React, { useState } from 'react';
import { Typography, Button, Form, message, Input, Icon } from 'antd';
import FileUpload from '../../utils/FileUpload';
import Axios from 'axios';

const { Title } = Typography;
const { TextArea } = Input;

const Continents = [
  { key: 1, value: 'Africa' },
  { key: 2, value: 'Europe' },
  { key: 3, value: 'Asia' },
  { key: 4, value: 'North America' },
  { key: 5, value: 'South America' },
  { key: 6, value: 'Australia' },
  { key: 7, value: 'Antarctica' },
];

const UploadProductPage = (props) => {
  const [title, setTitle] = useState('');
  const [description, setDescription] = useState('');
  const [price, setPrice] = useState(0);
  const [continent, setContinent] = useState(1);

  const [images, setImages] = useState([]);

  const titleChangeHandler = (event) => {
    setTitle(event.currentTarget.value);
  };
  const descriptionChangeHandler = (event) => {
    setDescription(event.currentTarget.value);
  };
  const priceChangeHandler = (event) => {
    setPrice(event.currentTarget.value);
  };
  const continentsSelectChangeHandler = (event) => {
    setContinent(event.currentTarget.value);
  };

  const updateImages = (newImages) => {
    setImages(newImages);
  };

  const onSubmit = (event) => {
    event.preventDefault();

    if (
      !title ||
      !description ||
      !price ||
      !continent
      || !images
    ) {
      return alert('fill all the fields first!');
    }

    const variables = {
      writer: props.user.userData._id,
      title: title,
      description: description,
      price: price,
      continents: continent,
      images: images,
    };

    Axios.post('/api/product/uploadProduct', variables).then((response) => {
      if (response.data.success) {
        alert('Product Successfully Uploaded');
        props.history.push('/');
      } else {
        alert('Failed to upload Product');
      }
    });
  };

  return (
    <div style={{ maxWidth: '700px', margin: '2rem auto' }}>
      <div style={{ textAlign: 'center', marginBottom: '2rem' }}>
        <Title level={2}>Upload Travel Product</Title>
      </div>

      <Form>
        {/* DropZone */}
        <FileUpload refreshFunction={updateImages} />
        <br />
        <br />

        <label>Title</label>
        <Input onChange={titleChangeHandler} value={title} />
        <br />
        <br />

        <label>Description</label>
        <Input onChange={descriptionChangeHandler} value={description} />
        <br />
        <br />

        <label>Price($)</label>
        <Input onChange={priceChangeHandler} value={price} />
        <br />
        <br />

        <select onChange={continentsSelectChangeHandler} value={continent}>
          {Continents.map((item) => (
            <option key={item.key} value={item.key}>
              {item.value}{' '}
            </option>
          ))}
        </select>
        <br />
        <br />

        <Button onClick={onSubmit}>Submit</Button>
      </Form>
    </div>
  );
};

export default UploadProductPage;
