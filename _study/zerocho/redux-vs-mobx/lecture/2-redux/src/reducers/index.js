const reducer = (prevState, action) => { // 새로운 state 만들어 주기
  switch (action.type) {
    case 'LOG_IN':
      return {
        ...prevState,
        user: {
          isLoggingIn: true,
          data: action.data,
        },
      };
    case 'LOG_OUT':
      return {
        ...prevState,
        user: {
          isLoggingIn: false,
          data: null,
        },
      };
    case 'ADD_POST':
      return {
        posts: [
          ...prevState.posts,
          action.data,
        ],
      };
    default:
      return prevState;
  }
};

export default reducer;
