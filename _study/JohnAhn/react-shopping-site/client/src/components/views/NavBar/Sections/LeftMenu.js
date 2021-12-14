import React from 'react';
import { Menu } from 'antd';
import { useSelector } from 'react-redux';

const SubMenu = Menu.SubMenu;
const MenuItemGroup = Menu.ItemGroup;

const LeftMenu = (props) => {
  const user = useSelector((state) => state.user);

  return (
    <Menu mode={props.mode}>
      <Menu.Item key="main">
        <a href="/">Home</a>
      </Menu.Item>
      {/* 사용하지 않으므로 주석처리
      <SubMenu title={<span>Blogs</span>}>
        <MenuItemGroup title="Item 1">
          <Menu.Item key="setting:1">Option 1</Menu.Item>
          <Menu.Item key="setting:2">Option 2</Menu.Item>
        </MenuItemGroup>
        <MenuItemGroup title="Item 2">
          <Menu.Item key="setting:3">Option 3</Menu.Item>
          <Menu.Item key="setting:4">Option 4</Menu.Item>
        </MenuItemGroup>
      </SubMenu>
      */}
      {(user.userData && !user.userData.isAuth) || (
        <Menu.Item key="history">
          <a href="/history">History</a>
        </Menu.Item>
      )}
      {(user.userData && !user.userData.isAuth) || (
        <Menu.Item key="upload">
          <a href="/product/upload">Upload</a>
        </Menu.Item>
      )}
    </Menu>
  );
};

export default LeftMenu;
