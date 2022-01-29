export const state = () => ({
  me: null,
  followerList: [],
  followingList: []
});

export const mutations = {
  setMe(state, payload) {
    state.me = payload;
  },
  changeNickname(state, payload) {
    state.me.nickname = payload.nickname;
  }
};

export const actions = {
  signUp({ commit, state }, payload) {
    // 서버에 회원가입 요청
    commit('setMe', payload);
  },
  logIn({ commit }, payload) {
    commit('setMe', payload);
  },
  logOut({ commit }, payload) {
    commit('setMe', null);
  },
  changeNickname({ commit }, payload) {
    commit('changeNickname', payload);
  }
};
