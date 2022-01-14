import React, { useCallback, useEffect } from 'react';
import { useSelector, useDispatch } from 'react-redux';
import PropTypes from 'prop-types';

import { Form, Input, Button } from 'antd';

import useInput from '../hooks/useInput';

const CommentForm = ({ post }) => {
  const [commentText, onChangeCommentText, setCommentText] = useInput('');

  const id = useSelector((state) => state.user.me?.id);

  const onSubmitComment = useCallback(() => {
    console.log(post.id, commentText);
    // dispatch();
  }, [commentText]);

  return (
    <Form onFinish={onSubmitComment}>
      <Form.Item style={{ position: 'relative', margin: 0 }}>
        <Input.TextArea
          value={commentText}
          onChange={onChangeCommentText}
          rows={4}
        />
        <Button
          type="primary"
          htmlType="submit"
          style={{ position: 'absolute', right: 0, bottom: '-40px' }}
        >
          등록
        </Button>
      </Form.Item>
    </Form>
  );
};

CommentForm.propTypes = {
  post: PropTypes.object.isRequired,
};

export default CommentForm;
