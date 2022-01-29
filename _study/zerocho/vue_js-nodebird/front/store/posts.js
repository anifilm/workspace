export const state = () => ({
  mainPosts: [],
  hasMorePost: true,
});

const totalPosts = 51;
const limit = 10;

export const mutations = {
  loadPosts(state) {
    const diff = totalPosts - state.mainPosts.length;
    const fakePosts = Array(diff > limit ? limit : diff)
      .fill()
      .map((v) => ({
        id: Math.random().toString(),
        User: {
          id: 1,
          nickname: '제로초',
        },
        content: `Hello infinite scrolling~ ${Math.random()}`,
        Comments: [],
        Images: [],
      }));
    state.mainPosts = state.mainPosts.concat(fakePosts);
    state.hasMorePost = fakePosts.length === limit;
  },
  addMainPost(state, payload) {
    state.mainPosts.unshift(payload); // 배열의 맨 앞에 데이터 추가
  },
  removeMainPost(state, payload) {
    const index = state.mainPosts.findIndex((v) => v.id === payload.id);
    state.mainPosts.splice(index, 1);
  },
  addComment(state, payload) {
    const index = state.mainPosts.findIndex((v) => v.id === payload.postId);
    state.mainPosts[index].Comments.unshift(payload);
  },
};

export const actions = {
  loadPosts({ commit, state }, payload) {
    if (state.hasMorePost) {
      commit('loadPosts');
    }
  },
  add({ commit }, payload) {
    // 서버에 게시글 등록 요청
    commit('addMainPost', payload);
  },
  remove({ commit }, payload) {
    commit('removeMainPost', payload);
  },
  addComment({ commit }, payload) {
    commit('addComment', payload);
  },
};
