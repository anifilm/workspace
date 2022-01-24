export const logIn = (data) => {
  return { // action
    type: 'LOG_IN',
    data,
  };
};

export const logOut = () => {
  return { // action
    type: 'LOG_OUT',
  };
};
