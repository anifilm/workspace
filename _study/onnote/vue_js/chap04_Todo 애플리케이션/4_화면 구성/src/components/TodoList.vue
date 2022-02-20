<template>
  <div>
    <ul>
      <li>
        <input type="checkbox" />
        <span>todoItem1</span>
        <button>삭제</button>
      </li>
      <li>
        <input type="checkbox" />
        <span>todoItem2</span>
        <button>삭제</button>
      </li>
      <li>
        <input type="checkbox" />
        <span>todoItem3</span>
        <button>삭제</button>
      </li>
    </ul>
  </div>
</template>

<script>
export default {

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
