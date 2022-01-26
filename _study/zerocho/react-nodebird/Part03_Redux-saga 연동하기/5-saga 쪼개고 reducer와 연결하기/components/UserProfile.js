import React, { useCallback } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import { Avatar, Card, Button } from 'antd';

import { logoutRequestAction } from '../reducers/user';

const dummy = {
  nickname: '제로초',
  Posts: [],
  Followings: [],
  Followers: [],
  isLoggedIn: false,
};

const UserProfile = () => {
  const dispatch = useDispatch();
  const { me, isLoggingOut } = useSelector((state) => state.user);

  const onLogOut = useCallback(() => {
    dispatch(logoutRequestAction());
  }, []);

  return (
    <Card actions={[
      <div key="twit">트윗<br />{dummy.Posts.length}</div>,
      <div key="following">팔로잉<br />{dummy.Followings.length}</div>,
      <div key="follower">팔로워<br />{dummy.Followers.length}</div>,
    ]}>
      <Card.Meta avatar={<Avatar>{me.nickname[0]}</Avatar>} title={me.nickname} />
      <Button onClick={onLogOut} loading={isLoggingOut}>로그아웃</Button>
    </Card>
  );
};

export default UserProfile;
