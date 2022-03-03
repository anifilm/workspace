<template>
  <div align="center">
    <h2>회원 수정</h2>
    <member-modify-form
      v-if="member && jobCodes"
      :member="member"
      :jobCodes="jobCodes"
      @submit="onSubmit"
    />
    <p v-else>Loading...</p>
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import MemberModifyForm from '@/components/member/MemberModifyForm.vue';

export default {
  name: 'MemberModifyPage',
  components: {
    MemberModifyForm,
  },
  props: {
    userNo: {
      type: [Number, String],
      required: true,
    },
  },
  computed: {
    ...mapState(['member', 'jobCodes']),
  },
  methods: {
    ...mapActions(['fetchMember', 'fetchJobCodeList']),
    onSubmit(payload) {
      api.put(`/users/${this.userNo}`, payload)
        .then((res) => {
            alert('수정이 완료되었습니다.');
            this.$router.push({
              name: 'MemberReadPage',
              params: {
                userNo: res.data.userNo,
              },
            });
        })
        .catch((err) => {
          alert(err.response.data.message);
        });
    },
  },
  created() {
    this.fetchJobCodeList()
      .then((res) => {
        this.fetchMember(this.userNo)
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
