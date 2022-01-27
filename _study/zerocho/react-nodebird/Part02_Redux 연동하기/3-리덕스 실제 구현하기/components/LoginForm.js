import React, { useCallback } from 'react';
import { useDispatch } from 'react-redux';

import { Button, Form, Input } from 'antd';
import Link from 'next/link';
import styled from 'styled-components';

import useInput from '../hooks/useInput';
import { loginAction } from '../reducers';

const FormWrapper = styled(Form)`
  padding: 10px;
`;
const DivWrapper = styled.div`
  margin-bottom: 10px;
`;
const ButtonWrapper = styled(Button)`
  margin-left: 10px;
`;

const LoginForm = () => {
  const dispatch = useDispatch();

  const [id, onChangeId] = useInput('');
  const [password, onChangePassword] = useInput('');

  const onSubmitForm = useCallback(() => {
    console.log({ id, password });
    dispatch(loginAction({ id, password }));
  }, [id, password]);

  return (
    <FormWrapper onFinish={onSubmitForm}>
      <DivWrapper>
        <label htmlFor="user-id">아이디</label>
        <Input
          name="user-id"
          value={id}
          onChange={onChangeId}
          required
        />
      </DivWrapper>
      <DivWrapper>
        <label htmlFor="user-password">비밀번호</label>
        <Input
          type="password"
          name="user-password"
          value={password}
          onChange={onChangePassword}
          required
        />
      </DivWrapper>
      <div>
        <Button type="primary" htmlType="submit" loading={false}>
          로그인
        </Button>
        <Link href="/signup">
          <a>
            <ButtonWrapper style={{ marginLeft: '10px' }}>
              회원가입
            </ButtonWrapper>
          </a>
        </Link>
      </div>
    </FormWrapper>
  );
};

export default LoginForm;
