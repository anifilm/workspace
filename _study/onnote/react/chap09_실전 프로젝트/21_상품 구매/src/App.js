import React from 'react';
import { Route } from 'react-router-dom';

import HomePage from 'pages/HomePage';
import AdminSetupPage from 'pages/member/AdminSetupPage';
import SignUpPage from 'pages/auth/SignUpPage';
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
// 회원 관리 페이지 컴포넌트
import MemberListPage from 'pages/member/MemberListPage';
import MemberRegisterPage from 'pages/member/MemberRegisterPage';
import MemberReadPage from 'pages/member/MemberReadPage';
import MemberModifyPage from 'pages/member/MemberModifyPage';
// 회원 게시판 페이지 컴포넌트
import BoardListPage from 'pages/board/BoardListPage';
import BoardRegisterPage from 'pages/board/BoardRegisterPage';
import BoardReadPage from 'pages/board/BoardReadPage';
import BoardModifyPage from 'pages/board/BoardModifyPage';
// 상품 게시판 페이지 컴포넌트
import ItemListPage from 'pages/item/ItemListPage';
import ItemRegisterPage from 'pages/item/ItemRegisterPage';
import ItemReadPage from 'pages/item/ItemReadPage';
import ItemModifyPage from 'pages/item/ItemModifyPage';
// 공지사항 페이지 컴포넌트
import NoticeListPage from 'pages/notice/NoticeListPage';
import NoticeRegisterPage from 'pages/notice/NoticeRegisterPage';
import NoticeReadPage from 'pages/notice/NoticeReadPage';
import NoticeModifyPage from 'pages/notice/NoticeModifyPage';
// 코인충전 페이지 컴포넌트
import CoinChargeListPage from 'pages/coin/CoinChargeListPage';
import CoinChargeRegisterPage from 'pages/coin/CoinChargeRegisterPage';
// 상품구매 페이지 컴포넌트
import CoinPayListPage from 'pages/coin/CoinPayListPage';
import UserItemListPage from 'pages/useritem/UserItemListPage';
import UserItemReadPage from 'pages/useritem/UserItemReadPage';

function App() {
  return (
    <>
      <Route path="/" component={HomePage} exact />
      <Route path="/member/setup" component={AdminSetupPage} />
      <Route path="/signup" component={SignUpPage} exact />
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
      {/* 회원 관리 페이지 라우트 */}
      <Route path="/member" component={MemberListPage} exact />
      <Route path="/member/create" component={MemberRegisterPage} />
      <Route path="/member/read/:userNo" component={MemberReadPage} />
      <Route path="/member/edit/:userNo" component={MemberModifyPage} />
      {/* 회원 게시판 페이지 라우트 */}
      <Route path="/board" component={BoardListPage} exact />
      <Route path="/board/create" component={BoardRegisterPage} />
      <Route path="/board/read/:boardNo" component={BoardReadPage} />
      <Route path="/board/edit/:boardNo" component={BoardModifyPage} />
      {/* 상품 게시판 페이지 라우트 */}
      <Route path="/item" component={ItemListPage} exact />
      <Route path="/item/create" component={ItemRegisterPage} />
      <Route path="/item/read/:itemId" component={ItemReadPage} />
      <Route path="/item/edit/:itemId" component={ItemModifyPage} />
      {/* 공지사항 페이지 라우트 */}
      <Route path="/notice" component={NoticeListPage} exact />
      <Route path="/notice/create" component={NoticeRegisterPage} />
      <Route path="/notice/read/:noticeNo" component={NoticeReadPage} />
      <Route path="/notice/edit/:noticeNo" component={NoticeModifyPage} />
      {/* 코인충전 페이지 라우트 */}
      <Route path="/coin/charge" component={CoinChargeListPage} />
      <Route path="/coin/create" component={CoinChargeRegisterPage} />
      {/* 상품구매 페이지 라우트 */}
      <Route path="/coin/pay" component={CoinPayListPage} />
      <Route path="/useritem" component={UserItemListPage} exact />
      <Route path="/useritem/read/:userItemNo" component={UserItemReadPage} />
    </>
  );
}

export default App;
