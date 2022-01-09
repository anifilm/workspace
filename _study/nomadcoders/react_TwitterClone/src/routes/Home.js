import React, { useState } from 'react';
import { dbService } from '../config/firebase-config';

const Home = () => {
  const [tweet, setTweet] = useState('');

  const onSubmit = async (event) => {
    event.preventDefault();
    await dbService.collection('tweets').add({
      tweet,
      createdAt: Date.now(),
    });
    setTweet('');
  };
  const onChange = (event) => {
    const { value } = event.target;
    setTweet(value);
  };

  return (
    <div>
      <form onSubmit={onSubmit}>
        <input
          type="text"
          value={tweet}
          onChange={onChange}
          placeholder="What'son your mind?"
          maxLength={120}
        />
        <input type="submit" value="Tweet" />
      </form>
    </div>
  );
};

export default Home;
