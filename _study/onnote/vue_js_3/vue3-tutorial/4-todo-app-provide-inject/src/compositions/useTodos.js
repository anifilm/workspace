import { reactive, computed } from 'vue';

export const useTodos = () => {
  const state = reactive({
    todos: [
      {
        id: 1,
        text: 'todoItem1',
        done: true,
      },
      {
        id: 2,
        text: 'todoItem2',
        done: false,
      },
      {
        id: 3,
        text: 'todoItem3',
        done: false,
      },
    ],
    editingId: 0,
    filter: 'ALL',
  });

  const todos = computed(() => state.todos);
  const editingId = computed(() => state.editingId);
  const filter = computed(() => state.filter);

  // 필터링 처리된 Todo 항목 목록을 반환
  const filteredTodos = computed(() => {
    // 완료되지 않은 TODO 항목 목록을 반환
    if (state.filter === 'NOTDONE') {
      return state.todos.filter((todo) => todo.done === false);
    }
    // 완료된 Todo 항목 목록을 반환
    if (state.filter === 'DONE') {
      return state.todos.filter((todo) => todo.done === true);
    }
    // 전체 Todo 항목 목록을 반환
    return state.todos;
  });

  const addTodo = (content) => {
    const newTodo = {
      id: new Date().getTime(), // 날짜를 사용한 숫자 생성
      text: content,
      done: false,
    };
    state.todos.push(newTodo);
  };
  const checkTodo = (id) => {
    state.todos = state.todos.map((todo) =>
      todo.id === id ? { ...todo, done: !todo.done } : todo,
    );
  };
  const setEditingId = (id) => {
    state.editingId = id;
  };
  const resetEditingId = () => {
    state.editingId = 0;
  };
  const updateTodo = ({ id, content }) => {
    const targetIndex = state.todos.findIndex((v) => v.id === id);
    const targetTodo = state.todos[targetIndex];
    state.todos.splice(targetIndex, 1, { ...targetTodo, text: content });
  };
  const removeTodo = (id) => {
    const targetIndex = state.todos.findIndex((v) => v.id === id);
    state.todos.splice(targetIndex, 1);
  };
  const clearAll = () => {
    // 완료된 항목만 삭제하도록 수정
    state.todos = state.todos.filter((todo) => !todo.done);
  };
  const setFilter = (filter) => {
    state.filter = filter;
  };
  const save = () => {
    const data = {
      todos: state.todos,
    };
    localStorage.setItem('vue3-todo-app-data', JSON.stringify(data));
  };
  const restore = () => {
    const data = localStorage.getItem('vue3-todo-app-data');
    if (data) {
      state.todos = JSON.parse(data);
    }
  };

  return {
    todos,
    editingId,
    filter,
    filteredTodos,
    addTodo,
    checkTodo,
    setEditingId,
    resetEditingId,
    updateTodo,
    removeTodo,
    clearAll,
    setFilter,
    save,
    restore,
  };
};
