import React, { useCallback } from 'react';
import { Button, Form, Input } from 'antd';
import Link from 'next/link';
import styled from 'styled-components';

import useInput from '../hooks/useInput';

const FormWrapper = styled(Form)`
  padding: 10px;
`;
const DivWrapper = styled.div`
  margin-bottom: 10px;
`;
const ButtonWrapper = styled.div`
  margin-top: 10px;
`;

const LoginForm = () => {
  const [id, onChangeId] = useInput('');
  const [password, onChangePassword] = useInput('');

  const onSubmitForm = useCallback(() => {
    console.log({ id, password });
  }, [id, password]);

  return (
    <FormWrapper onFinish={onSubmitForm}>
      <DivWrapper>
        <label htmlFor="user-id">아이디</label>
        <Input name="user-id" value={id} onChange={onChangeId} required />
      </DivWrapper>
      <DivWrapper>
        <label htmlFor="user-password">비밀번호</label>
        <Input name="user-password" value={password} onChange={onChangePassword} type="password" required />
      </DivWrapper>
      <ButtonWrapper>
        <Button type="primary" htmlType="submit" loading={false}>로그인</Button>
        <Link href="/signup"><a><Button>회원가입</Button></a></Link>
      </ButtonWrapper>
    </FormWrapper>
  );
};

export default LoginForm;
