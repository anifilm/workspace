<template>
  <div class="row">
  <form @submit.prevent="onSubmit" class="col s12">
    <div class="row">
      <div class="input-field col s5">
        <!--<input type="text" id="itemId" :value="item.itemId" disabled />-->
        <div class="item" style="color: darkgray">{{ item.itemId }}</div>
        <label class="active" for="itemId">상품번호</label>
      </div>
      <div class="input-field col s7">
        <input type="text" id="price" v-model="price" />
        <label class="active" for="price">상품가격 (원)</label>
      </div>
      <div class="input-field col s12">
        <input type="text" id="itemName" v-model="itemName" required />
        <label class="active" for="itemName">상품명</label>
      </div>
    </div>

    <div class="row">
      <div class="file-field input-field col s12">
        <div class="btn">
          <span>파일선택</span>
          <input
            type="file"
            @change="handleFileChange($event)"
            required
          />
        </div>
        <div class="file-path-wrapper">
          <input
            class="file-path validate"
            type="text"
            :placeholder="filename"
          />
        </div>
      </div>
      <!-- 이미지 미리보기 관련 내용 추가 -->
      <div v-if="preview" class="input-field col s12">
        <img
          class="_materialboxed"
          width="500"
          id="picture"
          :src="preview"
          alt="이미지 미리보기"
          style="margin-top: 10px"
        />
        <label class="active" for="picture">미리보기</label>
      </div>
      <!-- 기존 업로드 이미지 미리보기 -->
      <div v-else class="input-field col s12">
        <img
          class="_materialboxed"
          width="500"
          id="picture"
          :src="pictureUrl()"
          alt="{item.itemName}"
          style="margin-top: 10px"
          @error="replaceByDefault"
        />
        <label class="active" for="picture">미리보기</label>
      </div>
    </div>

    <div class="row">
      <div class="input-field col s12">
        <textarea
          id="description"
          class="materialize-textarea"
          v-model="description"
          style="height: 100px"
          required
        ></textarea>
        <label class="active" for="description">상품설명</label>
      </div>
    </div>
    </table>
    <br />
    <div>
      <router-link
        :to="{ name: 'ItemReadPage', params: { itemId: item.itemId.toString() } }"
        class="waves-effect waves-light btn"
      >취소</router-link>&nbsp;
      <button type="submit" class="waves-effect waves-light btn blue">수정</button>
    </div>
  </form>
  </div>
</template>

<script>
export default {
  name: 'ItemModifyForm',
  props: {
    item: {
      type: Object,
      required: true,
    },
  },
  data() {
    return {
      itemName: '',
      price: 0,
      description: '',
      file: '',
      filename: '',
      preview: '',
      previewDefault: 'https://picsum.photos/500/300',
    };
  },
  methods: {
    pictureUrl() {
      return `http://localhost:8080/items/display?itemId=${this.item.itemId}&timestamp=${new Date().getTime()}`;
    },
    replaceByDefault(e) {
      e.target.src = this.previewDefault;
      this.filename = '업로드된 파일 없음';
    },
    handleFileChange(e) {
      // 이미지 미리보기 관련 내용 추가
      const fileReader = new FileReader();
      fileReader.readAsDataURL(e.target.files[0]);
      fileReader.onload = () => {
        this.preview = fileReader.result;
      };
      this.file = e.target.files[0];
      //console.log(this.file);
    },
    onSubmit() {
      const { itemName, price, description, file } = this;
      this.$emit('submit', { itemName, price, description, file });
    },
  },
  created() {
    this.itemName = this.item.itemName;
    this.price = this.item.price;
    this.description = this.item.description;
    // 파일 명 가져오기
    const filename = this.item.pictureUrl.split('_').splice(1).join('_');
    this.filename = filename;
  }
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
