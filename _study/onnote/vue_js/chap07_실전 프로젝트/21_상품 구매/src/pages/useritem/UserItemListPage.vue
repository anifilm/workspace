<template>
  <div align="center">
    <h2>구매상품 목록</h2>
    <user-item-list :userItems="userItems" @download="onDownload" />
  </div>
</template>

<script>
import { mapState, mapActions } from 'vuex';
import api from '@/api';

import UserItemList from '@/components/useritem/UserItemList.vue';

export default {
  name: 'UserItemListPage',
  components: {
    UserItemList,
  },
  computed: {
    ...mapState(['userItems']),
  },
  methods: {
    ...mapActions(['fetchUserItemList']),
    onDownload(payload) {
      const { userItemNo } = payload;
      api.get(`/useritems/download/${userItemNo}`, { responseType: 'blob' })
        .then((res) => {
          const contentDisposition = res.request.getResponseHeader('Content-Disposition');
          const downloadFilename = contentDisposition.substring(22, contentDisposition.length - 1);
          const decodedDownloadFilename = decodeURIComponent(escape(downloadFilename));
          const url = window.URL.createObjectURL(new Blob([response.data]));
          const link = document.createElement('a');
          link.href = url;
          link.setAttribute('download', decodedDownloadFilename);
          document.body.appendChild(link);
          link.click();
        });
    },
  },
  mounted() {
    this.fetchUserItemList();

  },
};
</script>
