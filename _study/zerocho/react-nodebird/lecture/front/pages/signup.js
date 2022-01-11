import React, { useState, useCallback  } from 'react';
import Head from 'next/head';
import { Form, Input, Checkbox, Button } from 'antd';
import styled from 'styled-components';

import AppLayout from '../components/AppLayout';
import useInput from '../hooks/useInput';

const ErrorMessage = styled.span`
  color: red;
  margin-left: 5px;
`;
const DivWrapper = styled.div`
  margin-bottom: 10px;
`;

const Signup = () => {
  const [id, onChangeId] = useInput('');
  const [nick, onChangeNick] = useInput('');
  const [password, onChangePassword] = useInput('');

  const [passwordCheck, setPasswordCheck] = useState('');
  const [passwordError, setPasswordError] = useState(false);
  const [term, setTerm] = useState(false);
  const [termError, setTermError] = useState(false);

  const onChangePasswordCheck = useCallback((e) => {
    setPasswordError(e.target.value !== password);
    setPasswordCheck(e.target.value);
  }, [password]);

  const onChangeTerm = useCallback((e) => {
    setTermError(false);
    setTerm(e.target.checked);
  }, []);

  const onSubmit = useCallback(() => {
    if (password !== passwordCheck) {
      return setPasswordError(true);
    }
    if (!term) {
      return setTermError(true);
    }
  }, [password, passwordCheck, term]);

  return (
    <AppLayout>
      <Head>
        <title>회원 가입 | NodeBird</title>
      </Head>
      <Form onFinish={onSubmit} style={{ padding: 10 }}>
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
          <label htmlFor="user-nick">닉네임</label>
          <Input
            name="user-nick"
            value={nick}
            onChange={onChangeNick}
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
        <DivWrapper>
          <label htmlFor="user-password-check">비밀번호 확인</label>
          {passwordError && <ErrorMessage>(비밀번호가 일치하지 않습니다.)</ErrorMessage>}
          <Input
            type="password"
            name="user-password-check"
            value={passwordCheck}
            onChange={onChangePasswordCheck}
            required
          />
        </DivWrapper>
        <DivWrapper>
          <Checkbox name="user-term" checked={term} onChange={onChangeTerm}>회원가입 약관에 동의합니다.</Checkbox>
          {termError && <ErrorMessage>(약관에 동의하셔야 합니다.)</ErrorMessage>}
        </DivWrapper>
        <div>
          <Button type="primary" htmlType="submit">회원가입</Button>
        </div>
      </Form>
    </AppLayout>
  );
};

export default Signup;
