import React from 'react';
import Item from './Item';

const ItemList = ({ items, totalPrice }) => {
  return (
    <div>
      <ul>
        {/* item 속성(props) 값 지정 */}
        {items.map((item) => {
          return <Item key={item.name} item={item} />;
        })}
      </ul>
      <p>합계: {totalPrice}원</p>
    </div>
  );
};

export default ItemList;
