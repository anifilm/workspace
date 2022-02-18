<template>
  <h2>Vue 디렉티브 (기존 옵션 API 방식)</h2>
  <form>
    <table>
      <tr>
        <td>사용자 아이디</td>
        <td><input type="text" v-bind:value="userId" /></td>
      </tr>
      <tr>
        <td>비밀번호</td>
        <td><input type="password" v-bind:value="userPw" /></td>
      </tr>
      <tr>
        <td>소개</td>
        <td><textarea v-bind:value="introduction"></textarea></td>
      </tr>
      <tr>
        <td>개발자 여부</td>
        <td>
          <span v-if="developer">개발자</span>
          <span v-else>개발자 아님</span>
        </td>
      </tr>
      <tr>
        <td>외국인 여부</td>
        <td>
          <span v-show="foreigner === 'yes'">외국인</span>
          <span v-show="foreigner === 'no'">외국인 아님</span>
        </td>
      </tr>
      <tr>
        <td>취미</td>
        <td>
          <ol>
            <li v-for="hobby in hobbyList">{{ hobby }}</li>
          </ol>
        </td>
      </tr>
      <tr>
        <td>성별</td>
        <td>
          <span v-if="gender === 'male'">남성</span>
          <span v-else-if="gender === 'female'">여성</span>
          <span v-else>해당없음</span>
        </td>
      </tr>
      <tr>
        <td>국적</td>
        <td>
          <select v-model="nationality">
            <option disabled value="">Please select one</option>
            <option value="01">Korea</option>
            <option value="02">Gemany</option>
            <option value="03">Australia</option>
          </select>
        </td>
      </tr>
      <tr>
        <td>국적</td>
        <td>
          <span v-if="nationality === '01'">Korea</span>
          <span v-else-if="nationality === '02'">Germany</span>
          <span v-else-if="nationality === '03'">Australia</span>
          <span v-else>None</span>
        </td>
      </tr>
      <tr>
        <td>국적</td>
        <td>{{ getNationality }}</td>
      </tr>
      <tr>
        <td>소유차량</td>
        <td>
          <select v-model="carList" multiple>
            <option>Benz</option>
            <option>BMW</option>
            <option>Audi</option>
            <option>Volvo</option>
            <option>Saab</option>
          </select>
        </td>
      </tr>
    </table>
    <p><button type="submit">등록</button></p>
  </form>
</template>

<script>
export default {
  data() {
    return {
      userId: 'alex',
      userPw: '1234',
      introduction: 'hello',
      developer: false,
      foreigner: 'no',
      hobbyList: ['Sports', 'Music', 'Movie'],
      gender: 'male',
      nationality: '01',
      carList: ['Volvo', 'Saab'],
    };
  },
  computed: {
    getNationality() {
      if (this.nationality === '01') {
        return 'Korea';
      } else if (this.nationality === '02') {
        return 'Germany';
      } else if (this.nationality === '03') {
        return 'Australia';
      } else {
        return 'None';
      }
    },
  },
};
</script>
