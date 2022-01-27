import React, { useCallback } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import { Button, Form, Input } from 'antd';
import Link from 'next/link';
import styled from 'styled-components';

import useInput from '../hooks/useInput';
import { loginRequestAction } from '../reducers/user';

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
  const { logInLoading } = useSelector((state) => state.user);

  const [email, onChangeEmail] = useInput('');
  const [password, onChangePassword] = useInput('');

  const onSubmitForm = useCallback(() => {
    console.log({ email, password });
    dispatch(loginRequestAction({ email, password }));
  }, [email, password]);

  return (
    <FormWrapper onFinish={onSubmitForm}>
      <DivWrapper>
        <label htmlFor="user-email">이메일</label>
        <Input
          type="email"
          name="user-email"
          value={email}
          onChange={onChangeEmail}
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
        <Button type="primary" htmlType="submit" loading={logInLoading}>
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
