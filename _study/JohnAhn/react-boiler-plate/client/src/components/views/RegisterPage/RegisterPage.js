import React,{useState} from "react";
import moment from "moment";
import { Formik } from 'formik';
import * as Yup from 'yup';
import { registerUser } from "../../../_actions/user_actions";
import { useDispatch } from "react-redux";

const RegisterPage = (props) => {
  const dispatch = useDispatch();

  const [email, setEmail] = useState('');
  const [username, setUsername] = useState('');
  const [password, setPassword] = useState('');
  const [confirmPassword, setConfirmPassword] = useState('');

  const onEmailHandler = (event) => {
    setEmail(event.currentTarget.value);
  };
  const onUsernameHandler = (event) => {
    setUsername(event.currentTarget.value);
  };
  const onPasswordHandler = (event) => {
    setPassword(event.currentTarget.value);
  };
  const onConfirmPasswordHandler = (event) => {
    setConfirmPassword(event.currentTarget.value);
  };
  const onSubmitHandler = (event) => {
    event.preventDefault();

    if (password != confirmPassword) {
      return alert('입력하신 비밀번호가 일치하지 않습니다.');
    }

    let body = {
      email: email,
      name: username,
      password: password,
    };

    dispatch(registerUser(body)).then((response) => {
      if (response.payload.success) {
        alert('Register Ok!');
        props.history.push('/login');
      } else {
        alert('Register Error!');
      }
    });
  };

  return (
    <div
      style={{
        display: 'flex',
        justifyContent: 'center',
        alignItems: 'center',
        width: '100%',
        height: '85vh',
      }}
    >
      <form
        style={{ display: 'flex', flexDirection: 'column' }}
        onSubmit={onSubmitHandler}
      >
        <label>Email</label>
        <input type="email" value={email} onChange={onEmailHandler} />
        <label>Username</label>
        <input type="text" value={username} onChange={onUsernameHandler} />
        <label>Password</label>
        <input type="password" value={password} onChange={onPasswordHandler} />
        <label>Confirm Password</label>
        <input type="password" value={confirmPassword} onChange={onConfirmPasswordHandler} />
        <br />
        <button>Register</button>
      </form>
    </div>
  );
};

export default RegisterPage;
