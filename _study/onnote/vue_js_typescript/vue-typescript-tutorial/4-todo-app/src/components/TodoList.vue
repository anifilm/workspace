<template>
  <div>
    <ul>
      <li>
        <input type="checkbox" />
        <span>todo1</span>
        <button>삭제</button>
      </li>
      <li>
        <input type="checkbox" />
        <span>todo2</span>
        <button>삭제</button>
      </li>
      <li>
        <input type="checkbox" />
        <span>todo3</span>
        <button>삭제</button>
      </li>
    </ul>
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';

@Component
export default class TodoList extends Vue {

}
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
