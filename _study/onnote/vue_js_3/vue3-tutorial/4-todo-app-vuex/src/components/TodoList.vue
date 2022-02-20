<template>
  <div>
    <ul>
      <li v-for="(todo, index) in todos" v-bind:key="index">
        <span
          v-if="!todo.isEditing"
          v-on:dblclick="handleDblClick(index)"
        >{{ todo.content }}</span>
        <input
          v-else
          type="text"
          ref="editInput"
          v-bind:value="todo.content"
          v-on:blur="handleBlur(index)"
          v-on:keydown.enter="updateTodo(index, $event)"
        />
        &nbsp;
        <button v-on:click="removeTodo(index)">삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
import { ref, nextTick } from 'vue';

export default {
  name: 'TodoList',
  props: ['todos'],
  emits: ['update-todo', 'remove-todo'],
  setup(props, context) {
    const todos = props.todos;
    const editInput = ref(null);

    // 더블클릭 이벤트를 처리하는 메서드
    const handleDblClick = (index) => {
      todos[index].isEditing = true;
      // 입력 요소에 포커스 처리
      nextTick(() => {
        //editInput.value.focus(); // TODO: 오류 확인
        console.log(editInput.value);
      });
    };
    // 수정 입력창에서 포커스가 사라지면 실행
    const handleBlur = (index) => {
      todos[index].isEditing = false;
    };
    // 사용자가 수정 내용을 입려하고 엔터키를 입력했을 때 Todo 항목 수정 이벤트를 발생시켜 상위 컴포넌트에 전달하는 메서드
    const updateTodo = (index, event) => {
      const content = event.target.value.trim();
      if (content.length <= 0) {
        return false;
      }
      context.emit('update-todo', content, index);
      //editInput.value.blur(); // TODO: 오류 확인
    };
    const removeTodo = (index) => {
      //console.log('removeTodo');
      context.emit('remove-todo', index);
    };

    return {
      handleDblClick,
      handleBlur,
      updateTodo,
      removeTodo,
      editInput,
    };
  },
};
</script>

<style scoped>
div {
  background-color: LightCyan;
}
span {
  margin: 10px;
}
ul {
  list-style: none;
  padding-left: 0px;
}
li {
  background-color: LightYellow;
  margin: 10px 0;
}
</style>
