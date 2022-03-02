<template>
  <div align="center">
    <table>
      <tr>
        <td width="120">
          <router-link :to="{ name: 'Home' }">홈</router-link>
        </td>
      </tr>
    </table>
  </div>
</template>

<script>
export default {
  name: 'MenuBar',
};
</script>
