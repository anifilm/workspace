<template>
  <div align="center">
    <h3>상품 등록</h3>
    <item-register-form @submit="onSubmit" />
  </div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import AxiosService from '../service';
import { Item } from '../store';

import ItemRegisterForm from '../components/ItemRegisterForm.vue';

@Component({
  components: {
    ItemRegisterForm,
  },
})
export default class ItemRegisterPage extends Vue {
  onSubmit(payload: Item) {
    const { itemName, price, description, file } = payload;

    const itemObject = {
      itemName,
      price,
      description,
    };

    const formData = new FormData();
    formData.append('file', file);
    formData.append('item', JSON.stringify(itemObject));

    AxiosService.instance
      .post('/items', formData, {
        headers: { 'Content-Type': 'multipart/form-data' },
      })
      .then((res) => {
        alert('등록되었습니다.');
        this.$router.push({
          name: 'ItemReadPage',
          params: {
            itemId: res.data.itemId.toString(),
          },
        });
      })
      .catch((err) => {
        alert(err.response.data.msg);
      });
  }
}
</script>
