<template>
  <div align="center">
    <h3>게시글 목록</h3>
    <router-link :to="{ name: 'ItemRegisterPage' }">새로만들기</router-link>
    <item-list />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import ItemList from '../components/ItemList.vue';

@Component({
  components: {
    ItemList,
  },
})
export default class ItemListPage extends Vue {

}
</script>
