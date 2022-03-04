import React from 'react';
import { Route } from 'react-router-dom';

import HomePage from 'pages/HomePage';
import SignInPage from 'pages/auth/SignInPage';
import AdminSetupPage from 'pages/member/AdminSetupPage';
// 코드그룹 페이지 컴포넌트
import CodeGroupListPage from 'pages/codegroup/CodeGroupListPage';
import CodeGroupRegisterPage from 'pages/codegroup/CodeGroupRegisterPage';
import CodeGroupReadPage from 'pages/codegroup/CodeGroupReadPage';
import CodeGroupModifyPage from 'pages/codegroup/CodeGroupModifyPage';

function App() {
  return (
    <>
      <Route path="/" component={HomePage} exact />
      <Route path="/signin" component={SignInPage} exact />
      <Route path="/member/setup" component={AdminSetupPage} />
      {/* 코드그룹 페이지 라우트 */}
      <Route path="/codegroup" component={CodeGroupListPage} exact />
      <Route path="/codegroup/create" component={CodeGroupRegisterPage} />
      <Route path="/codegroup/read/:groupCode" component={CodeGroupReadPage} exact />
      <Route path="/codegroup/edit/:groupCode" component={CodeGroupModifyPage} exact />
    </>
  );
}

export default App;
