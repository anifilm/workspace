import * as firebase from 'firebase/app';
import 'firebase/auth';
import 'firebase/firestore';
import 'firebase/storage';

const firebaseConfig = {
  apiKey: 'AIzaSyD2L8_3C72QlIRdiw5jTRAsRbWizpOecTg',
  authDomain: 'twitterclone-nomadcoders.firebaseapp.com',
  projectId: 'twitterclone-nomadcoders',
  storageBucket: 'twitterclone-nomadcoders.appspot.com',
  messagingSenderId: '1046537470978',
  appId: '1:1046537470978:web:6a3c86798315f067d0931b',
};

firebase.initializeApp(firebaseConfig);

export const firebaseInstance = firebase;

export const authService = firebase.auth();
export const dbService = firebase.firestore();
export const storageService = firebase.storage();
