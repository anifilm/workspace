<template>
  <div align="center">
    <table>
      <tr>
        <template v-if="isAuthorized">
          <template v-if="isAdmin">
            <td width="60"><router-link :to="{ name: 'Home' }">홈</router-link></td>
            <td width="130"><router-link :to="{ name: 'CodeGroupListPage' }">코드그룹관리</router-link></td>
            <td width="100"><router-link :to="{ name: 'CodeDetailListPage' }">코드관리</router-link></td>
            <td width="100"><router-link :to="{ name: 'MemberListPage' }">회원관리</router-link></td>
            <td width="110"><router-link :to="{ name: 'BoardListPage' }">회원게시판</router-link></td>
            <td width="100"><router-link :to="{ name: 'ItemListPage' }">상품관리</router-link></td>
            <td width="120"><router-link :to="{ name: 'NoticeListPage' }">공지사항관리</router-link></td>
          </template>
          <template v-else>
            <td width="60"><router-link :to="{ name: 'Home' }">홈</router-link></td>
            <td width="120"><router-link :to="{ name: 'BoardListPage' }">회원게시판</router-link></td>
            <td width="120"><router-link :to="{ name: 'ItemListPage' }">상품게시판</router-link></td>
            <td width="100"><router-link :to="{ name: 'NoticeListPage' }">공지사항</router-link></td>
            <td width="100"><router-link :to="{ name: 'ItemListPage' }">코인충전</router-link></td>
            <td width="100"><router-link :to="{ name: 'ItemListPage' }">충전내역</router-link></td>
          </template>
        </template>
        <template v-else>
          <td width="60"><router-link :to="{ name: 'Home' }">홈</router-link></td>
          <td width="120"><router-link :to="{ name: 'BoardListPage' }">회원게시판</router-link></td>
          <td width="100"><router-link :to="{ name: 'NoticeListPage' }">공지사항</router-link></td>
        </template>
      </tr>
    </table>
  </div>
</template>

<script>
import { mapGetters } from 'vuex';

export default {
  name: 'MenuBar',
  computed: {
    ...mapGetters(['isAuthorized', 'isAdmin']),
  },
};
</script>
