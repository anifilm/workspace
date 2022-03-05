import React from 'react';
import { Route } from 'react-router-dom';

import HomePage from 'pages/HomePage';
import AdminSetupPage from 'pages/member/AdminSetupPage';
import SignInPage from 'pages/auth/SignInPage';
// 코드그룹 페이지 컴포넌트
import CodeGroupListPage from 'pages/codegroup/CodeGroupListPage';
import CodeGroupRegisterPage from 'pages/codegroup/CodeGroupRegisterPage';
import CodeGroupReadPage from 'pages/codegroup/CodeGroupReadPage';
import CodeGroupModifyPage from 'pages/codegroup/CodeGroupModifyPage';
// 코드 페이지 컴포넌트
import CodeDetailListPage from 'pages/codedetail/CodeDetailListPage';
import CodeDetailRegisterPage from 'pages/codedetail/CodeDetailRegisterPage';
import CodeDetailReadPage from 'pages/codedetail/CodeDetailReadPage';
import CodeDetailModifyPage from 'pages/codedetail/CodeDetailModifyPage';

function App() {
  return (
    <>
      <Route path="/" component={HomePage} exact />
      <Route path="/member/setup" component={AdminSetupPage} />
      <Route path="/signin" component={SignInPage} exact />
      {/* 코드그룹 페이지 라우트 */}
      <Route path="/codegroup" component={CodeGroupListPage} exact />
      <Route path="/codegroup/create" component={CodeGroupRegisterPage} />
      <Route path="/codegroup/read/:groupCode" component={CodeGroupReadPage} />
      <Route path="/codegroup/edit/:groupCode" component={CodeGroupModifyPage} />
      {/* 코드 페이지 라우트 */}
      <Route path="/codedetail" component={CodeDetailListPage} exact />
      <Route path="/codedetail/create" component={CodeDetailRegisterPage} />
      <Route path="/codedetail/read/:groupCode/:codeValue" component={CodeDetailReadPage} />
      <Route path="/codedetail/edit/:groupCode/:codeValue" component={CodeDetailModifyPage} />
    </>
  );
}

export default App;
