<template>
  <div align="center">
    <h2>코드그룹 수정</h2>
    <code-group-modify-form v-if="codeGroup" :codeGroup="codeGroup" @submit="onSubmit" />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import CodeGroupModifyForm from '@/components/codegroup/CodeGroupModifyForm.vue';

export default {
  name: 'CodeGroupModifyPage',
  components: {
    CodeGroupModifyForm,
  },
  props: {
    groupCode: {
      type: String,
      required: true,
    },
  },
  computed: {
    ...mapState(['codeGroup']),
  },
  methods: {
    ...mapActions(['fetchCodeGroup']),
    onSubmit(payload) {
      const { groupName} = payload;
      api.put(`/codegroups/${this.groupCode}`, { groupName })
        .then((res) => {
          alert('수정이 완료되었습니다.');
          this.$router.push({
            name: 'CodeGroupReadPage',
            params: {
              groupCode: res.data.groupCode,
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
    }
  },
  created() {
    this.fetchCodeGroup(this.groupCode)
      .catch((err) => {
        alert(err.response.data.message);
        this.$router.back();
      });
  },
};
</script>
