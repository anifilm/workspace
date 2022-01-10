import React, { useState, useEffect } from 'react';
import { v4 as uuidv4 } from 'uuid';
import { dbService, storageService } from '../config/firebase-config';

const TweetFactory = ({ userObj }) => {
  const [tweet, setTweet] = useState('');
  const [imageFile, setImageFile] = useState('');
  const imageInputRef = React.useRef();

  const onChange = (event) => {
    const { value } = event.target;
    setTweet(value);
  };
  const onFileChange = (event) => {
    const { files } = event.target;
    const imageFile = files[0];
    const reader = new FileReader();
    reader.onload = (event) => {
      setImageFile(event.target.result);
    }
    reader.readAsDataURL(imageFile);
  }
  const onClearImageFile = () => {
    imageInputRef.current.value = '';
    setImageFile('');
  }
  const onSubmit = async (event) => {
    event.preventDefault();
    let uploadFileUrl = '';
    if (imageFile) {
      const uploadFileRef = storageService.ref().child(`${userObj.uid}/${uuidv4()}`);
      const response = await uploadFileRef.putString(imageFile, 'data_url');
      uploadFileUrl = await response.ref.getDownloadURL();
    }
    const newTweet = {
      creatorId: userObj.uid,
      tweet: tweet,
      imageUrl: uploadFileUrl,
      createdAt: Date.now(),
    }
    await dbService.collection('tweets').add(newTweet);
    setTweet('');
    onClearImageFile();
  };

  return (
    <form onSubmit={onSubmit}>
      <input
        type="text"
        value={tweet}
        onChange={onChange}
        placeholder="What's on your mind?"
        maxLength={120}
      />
      <input type="submit" value="Tweet" />
      <br />
      <input
        type="file"
        accept="image/*"
        onChange={onFileChange}
        ref={imageInputRef}
      />
      <br />
      {imageFile && (
        <div>
          <button onClick={onClearImageFile}>Clear Image File</button>
          <br />
          <img src={imageFile} width="300px" alt="attachedImage" />
        </div>
      )}
    </form>
  );
};

export default TweetFactory;
