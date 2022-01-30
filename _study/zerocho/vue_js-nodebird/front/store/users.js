export const state = () => ({
  me: null,
  followingList: [],
  followerList: [],
  hasMoreFollowing: true,
  hasMoreFollower: true,
});

const totalFollowings = 8;
const totalFollowers = 8;
const limit = 3;

export const mutations = {
  setMe(state, payload) {
    state.me = payload;
  },
  changeNickname(state, payload) {
    state.me.nickname = payload.nickname;
  },
  addFollowing(state, payload) {
    state.followingList.push(payload);
  },
  addFollower(state, payload) {
    state.followerList.push(payload);
  },
  removeFollowing(state, payload) {
    const index = state.followingList.findIndex((v) => v.id === payload.id);
    state.followingList.splice(index, 1);
  },
  removeFollower(state, payload) {
    const index = state.followerList.findIndex((v) => v.id === payload.id);
    state.followerList.splice(index, 1);
  },
  loadFollowings(state) {
    const diff = totalFollowings - state.followingList.length;
    const fakeUsers = Array(diff > limit ? limit : diff)
      .fill()
      .map((v) => ({
        id: Math.random().toString(),
        nickname: Math.floor(Math.random() * 1000) + '번 팔로워',
      }));
    state.followingList = state.followingList.concat(fakeUsers);
    state.hasMoreFollowing = fakeUsers.length === limit;
  },
  loadFollowers(state) {
    const diff = totalFollowers - state.followerList.length;
    const fakeUsers = Array(diff > limit ? limit : diff)
      .fill()
      .map((v) => ({
        id: Math.random().toString(),
        nickname: Math.floor(Math.random() * 1000) + '번 팔로잉',
      }));
    state.followerList = state.followerList.concat(fakeUsers);
    state.hasMoreFollower = fakeUsers.length === limit;
  },
};

export const actions = {
  signUp({ commit, state }, payload) {
    // 서버에 회원가입 요청
    this.$axios
      .post(
        'http://localhost:5000/user',
        {
          email: payload.email,
          nickname: payload.nickname,
          password: payload.password,
        },
        {
          withCredentials: true,
        },
      )
      .then((res) => {
        commit('setMe', res.data);
      })
      .catch((err) => {
        console.error(err);
      });
  },
  logIn({ commit }, payload) {
    this.$axios
      .post('http://localhost:5000/user/login', {
        email: payload.email,
        password: payload.password,
      })
      .then((res) => {
        commit('setMe', res.data);
      })
      .catch((err) => {
        console.error(err);
      });
  },
  logOut({ commit }) {
    this.$axios
      .post(
        'http://localhost:5000/user/logout',
        {},
        {
          withCredentials: true,
        },
      )
      .then((res) => {
        commit('setMe', null);
      })
      .catch((err) => {
        console.error(err);
      });
  },
  changeNickname({ commit }, payload) {
    commit('changeNickname', payload);
  },
  addFollowing({ commit }, payload) {
    commit('addFollowing', payload);
  },
  addFollower({ commit }, payload) {
    commit('addFollower', payload);
  },
  removeFollowing({ commit }, payload) {
    commit('removeFollowing', payload); // 비동기 요청
  },
  removeFollower({ commit }, payload) {
    commit('removeFollower', payload); // 비동기 요청
  },
  loadFollowings({ commit, state }, payload) {
    if (state.hasMoreFollowing) {
      commit('loadFollowings');
    }
  },
  loadFollowers({ commit, state }, payload) {
    if (state.hasMoreFollower) {
      commit('loadFollowers');
    }
  },
};
