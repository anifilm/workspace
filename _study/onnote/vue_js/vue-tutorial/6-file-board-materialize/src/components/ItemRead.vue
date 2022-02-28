<template>
  <div class="row">
      <div class="row">
        <div class="input-field col s5">
          <!--<input type="text" id="itemId" :value="item.itemId" disabled />-->
          <div class="item" style="color: darkgray">{{ item.itemId }}</div>
          <label class="active" for="itemId">상품번호</label>
        </div>
        <div class="input-field col s7">
          <!--<input type="text" id="price" :value="item.price" readonly />-->
          <div class="item">{{ item.price }}</div>
          <label class="active" for="price">상품가격 (원)</label>
        </div>
        <div class="input-field col s12">
          <!--<input type="text" id="itemName" :value="item.itemName" readonly />-->
          <div class="item">{{ item.itemName }}</div>
          <label class="active" for="itemName">상품명</label>
        </div>
      </div>
      <div class="row">
        <div class="input-field col s12">
          <img
            class="_materialboxed"
            width="500"
            id="picture"
            :src="pictureUrl()"
            alt="{item.itemName}"
            style="margin-top: 10px"
            @error="replaceByDefault"
          />
          <label class="active" htmlFor="picture">미리보기</label>
        </div>
      </div>
      <div class="row">
        <div class="input-field col s12">
          <div class="item" style="height: 100px">{{ item.description }}</div>
          <!--<textarea
            id="description"
            class="materialize-textarea"
            :value="item.description"
            style="height: 100px"
            readonly
          ></textarea>-->
          <label class="active" for="description">상품설명</label>
        </div>
      </div>
  </div>
</template>

<script>
export default {
  name: 'ItemRead',
  props: {
    item: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      previewDefault: 'https://picsum.photos/500/300',
    };
  },
  methods: {
    pictureUrl() {
      return `http://localhost:8080/items/display?itemId=${this.item.itemId}&timestamp=${new Date().getTime()}`;
    },
    replaceByDefault(e) {
      e.target.src = this.previewDefault;
    },
  },
};
</script>

<style scoped>
.item {
  margin-top: 10px;
  margin-bottom: 9px;
  font-size: 16px;
  padding-bottom: 9px;
  border-bottom: 1px solid lightgray;
}
</style>
