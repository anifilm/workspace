<template>
  <h2>Vue 디렉티브 (컴포지션 API 방식)</h2>
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
import { ref, computed } from 'vue';

export default {
  setup() {
    // data 속성을 위한 반응형 변수 정의
    const userId = ref('alex');
    const userPw = ref('1234');
    const introduction = ref('hello');
    const developer = ref(false);
    const foreigner = ref('no');
    const hobbyList = ref(['Sports', 'Music', 'Movie']);
    const gender = ref('male');
    const nationality = ref('01');
    const carList = ref(['Volvo', 'Saab']);
    // computed 속성을 위한 변수 정의
    const getNationality = computed(() => {
      if (nationality.value === '01') {
        return 'Korea';
      } else if (nationality.value === '02') {
        return 'Germany';
      } else if (nationality.value === '03') {
        return 'Australia';
      } else {
        return 'None';
      }
    });
    // 정의한 변수 반환
    return {
      userId,
      userPw,
      introduction,
      developer,
      foreigner,
      hobbyList,
      gender,
      nationality,
      carList,
      getNationality,
    };
  },
};
</script>
