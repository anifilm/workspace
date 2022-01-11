import React, { useState } from 'react';
import Head from 'next/head';
import { Button, Checkbox, Form, Input } from 'antd';

import AppLayout from '../components/AppLayout';
import useInput from '../hooks/useInput';

const Signup = () => {
  return (
    <AppLayout>
      <Head>
        <title>회원 가입 | NodeBird</title>
      </Head>
      <div>회원가입 페이지</div>
    </AppLayout>
  );
};

export default Signup;
