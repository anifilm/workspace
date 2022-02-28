<template>
  <div class="row">
    <form @submit.prevent="onSubmit" class="col s12">
      <div class="row">
        <div class="input-field col s12">
          <input type="text" id="itemName" v-model="itemName" required />
          <label class="active" for="itemName">상품명</label>
        </div>
        <div class="input-field col s12">
          <input type="text" id="price" v-model="price" />
          <label class="active" lfor="price">상품가격 (원)</label>
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
              placeholder="선택된 파일 없음"
            />
          </div>
        </div>
        <!-- 이미지 미리보기 관련 내용 추가 -->
        <div v-show="preview" class="input-field col s12">
          <img
            class="materialboxed"
            width="500"
            id="picture"
            :src="preview"
            alt="이미지 미리보기"
            style="margin-top: 10px"
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
      <br />
      <div>
        <router-link
          :to="{ name: 'ItemListPage' }"
          class="waves-effect waves-light btn"
        >취소</router-link>&nbsp;
        <button
          type="submit"
          class="waves-effect waves-light btn blue"
        >등록</button>
      </div>
    </form>
  </div>
</template>

<script>
export default {
  name: 'ItemRegisterForm',
  data() {
    return {
      itemName: '',
      price: 0,
      description: '',
      file: '',
      preview: '',
    };
  },
  methods: {
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
};
</script>
