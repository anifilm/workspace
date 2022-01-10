import React, { useState } from 'react';
import { dbService, storageService } from '../config/firebase-config';

const Tweet = ({ tweetObj, isOwner }) => {
  const [editing, setEditing] = useState(false);
  const [editTweet, setEditTweet] = useState(tweetObj.tweet);

  const onDeleteClick = async () => {
    const ok = window.confirm('Are you sure you want to delete this tweet?');
    if (ok) {
      await dbService.doc(`tweets/${tweetObj.id}`).delete();
      if (tweetObj.imageUrl) {
        await storageService.refFromURL(tweetObj.imageUrl).delete();
      }
    }
  };
  const toggleEditing = () => {
    setEditing((prev) => !prev);
  };
  const onChange = (event) => {
    const { value } = event.target;
    setEditTweet(value);
  };
  const onSubmit = async (event) => {
    event.preventDefault();
    await dbService.doc(`tweets/${tweetObj.id}`).update({
      tweet: editTweet,
    });
    setEditing(false);
  };

  return (
    <div>
      {editing ? (
        <>
          <form onSubmit={onSubmit}>
            <input
              type="text"
              value={editTweet}
              onChange={onChange}
              placeholder="Edit your tweet"
              required
            />
            <input type="submit" value="Update Tweet" />
          </form>
          <button onClick={toggleEditing}>Cancel</button>
        </>
      ) : (
        <>
          <h4>{tweetObj.tweet}</h4>
          {tweetObj.imageUrl && <img src={tweetObj.imageUrl} width="300px" alt="uploadedImage" />}
          {isOwner && (
            <>
              <button onClick={toggleEditing}>edit</button>
              <button onClick={onDeleteClick}>delete</button>
            </>
          )}
        </>
      )}
    </div>
  );
};

export default Tweet;
