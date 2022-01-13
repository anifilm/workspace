import React, { useState, useRef, useCallback, useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import { Form, Input, Button } from 'antd';

import { addPost } from '../reducers/post';

const PostForm = () => {
  const { imagePaths, postAdded } = useSelector((state) => state.post);

  const [text, setText] = useState('');
  const dispatch = useDispatch();
  const imageInput = useRef();

  const onClickImageUpload = useCallback(() => {
    imageInput.current.click();
  }, [imageInput.current]);

  useEffect(() => {
    if (postAdded) {
      setText('');
    }
  }, [postAdded]);

  const onChangeText = useCallback((e) => {
    setText(e.target.value);
  }, []);
  const onSubmit = useCallback(() => {
    dispatch(addPost);
  });

  return (
    <Form
      onFinish={onSubmit}
      encType="multipart/form-data"
      style={{ margin: '10px 0 20px' }}
    >
      <Input.TextArea
        value={text}
        onChange={onChangeText}
        maxLength={140}
        placeholder="어떤 신기한 일이 있었나요?"
      />
      <div>
        <input type="file" multiple hidden ref={imageInput} />
        <Button onClick={onClickImageUpload}>이미지 업로드</Button>
        <Button type="primary" htmlType="submit" style={{ float: 'right' }}>트윗</Button>
      </div>
      <div>
        {imagePaths.map((v) => {
          return (
            <div key={v} style={{ display: 'inline-block' }}>
              <img src="{`http://localhost:3000/${v}`}" alt={v} style={{ width: '200px' }} />
              <div><Button>제거</Button></div>
            </div>
          );
        })}
      </div>
    </Form>
  );
};

export default PostForm;
