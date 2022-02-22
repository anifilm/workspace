export default {
  filteredTodos(state) {
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
  }
};
