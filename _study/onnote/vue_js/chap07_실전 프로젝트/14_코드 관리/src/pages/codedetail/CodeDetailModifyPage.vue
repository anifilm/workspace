<template>
  <div align="center">
    <h2>코드 수정</h2>
    <code-detail-modify-form v-if="codeGroups && codeDetail" :codeDetail="codeDetail" :codeGroups="codeGroups" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import CodeDetailModifyForm from '@/components/codedetail/CodeDetailModifyForm.vue';

export default {
  name: 'CodeDetailModifyFormPage',
  components: {
    CodeDetailModifyForm
  },
  props: {
    groupCode: {
      type: String,
      required: true,
    },
    codeValue: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['codeGroups', 'codeDetail']),
  },
  methods: {
    ...mapActions(['fetchCodeGroupList', 'fetchCodeDetail']),
    onSubmit(payload) {
      const { codeValue, codeName } = payload;
      api.put(`/codedetails/${this.groupCode}/${this.codeValue}`, { codeValue, codeName })
        .then((res) => {
          alert('수정이 완료되었습니다.');
          this.$router.push({
            name: 'CodeDetailReadPage',
            params: {
              groupCode: res.data.groupCode,
              codeValue: res.data.codeValue,
            },
          });
        })
        .catch((err) => {
          if (err.response.status === 401) {
            alert('로그인이 필요합니다.');
            this.$router.push({ name: 'Signin' });
          } else if (err.response.status === 403) {
            alert('접근 권한이 없습니다.');
            this.$router.back();
          } else {
            alert(err.response.data.message);
          }
        });
    },
  },
  created() {
    this.fetchCodeGroupList()
      .then((res) => {
        const { groupCode, codeValue } = this;
        this.fetchCodeDetail({ groupCode, codeValue })
          .catch((err) => {
            alert(err.response.data.message);
            this.$router.back();
          });
      })
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
