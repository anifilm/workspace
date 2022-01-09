import React, { useState, useEffect } from 'react';
import { dbService } from '../config/firebase-config';
import Tweet from '../components/Tweet';

const Home = ({ userObj }) => {
  const [tweet, setTweet] = useState('');
  const [tweets, setTweets] = useState([]);

  useEffect(() => {
    dbService.collection('tweets').onSnapshot((snapshot) => {
      const tweetArray = snapshot.docs.map((doc) => ({
        id: doc.id,
        ...doc.data(),
      }));
      setTweets(tweetArray);
    });
  }, []);

  const onChange = (event) => {
    const { value } = event.target;
    setTweet(value);
  };
  const onSubmit = async (event) => {
    event.preventDefault();
    await dbService.collection('tweets').add({
      creatorId: userObj.uid,
      tweet: tweet,
      createdAt: Date.now(),
    });
    setTweet('');
  };

  return (
    <div>
      <form onSubmit={onSubmit}>
        <input
          type="text"
          value={tweet}
          onChange={onChange}
          placeholder="What's on your mind?"
          maxLength={120}
        />
        <input type="submit" value="Tweet" />
      </form>
      <div>
        {tweets.map((tweet) => (
          <Tweet
            key={tweet.id}
            tweetObj={tweet}
            isOwner={tweet.creatorId === userObj.uid}
          />
        ))}
      </div>
    </div>
  );
};

export default Home;
