<template>
  <h2>Vue 이벤트 처리 (컴포지션 API 방식)</h2>
  <form v-on:submit.prevent="onSubmit">
    <table>
      <tr>
        <td>사용자 아이디</td>
        <td><input type="text" v-bind:value="userId" v-on:input="userId = $event.target.value" /></td>
      </tr>
      <tr>
        <td>비밀번호</td>
        <td><input type="password" v-bind:value="userPw" v-on:change="userPw = $event.target.value" /></td>
      </tr>
      <tr>
        <td>소개</td>
        <td><textarea v-model="introduction"></textarea></td>
      </tr>
      <tr>
        <td>개발자 여부</td>
        <td>
          <input type="checkbox" v-on:change="handleCheckBox" />
          <span>handleCheckBox</span>
        </td>
      </tr>
      <tr>
        <td>개발자 여부</td>
        <td>
          <input type="checkbox" v-on:change="handleCheckBox()" />
          <span>handleCheckBox()</span>
        </td>
      </tr>
      <tr>
        <td>개발자 여부</td>
        <td>
          <input type="checkbox" v-on:change="handleCheckBox2" />
          <span>handleCheckBox2</span>
        </td>
      </tr>
      <tr>
        <td>개발자 여부</td>
        <td>
          <input type="checkbox" v-on:change="handleCheckBox2($event)" />
          <span>handleCheckBox2($event)</span>
        </td>
      </tr>
      <tr>
        <td>개발자 여부</td>
        <td>
          <input type="checkbox" v-on:change="handleCheckBox3('checked!')" />
          <span>handleCheckBox3('checked!')</span>
        </td>
      </tr>
      <tr>
        <td>외국인 여부</td>
        <td>
          <input type="checkbox" v-on:change="handleCheckBox4('checked!', $event)" />
          <span>handleCheckBox4('checked!', $event)</span>
        </td>
      </tr>
      <tr>
        <td>취미</td>
        <td>
          <input type="checkbox" id="chkSports" value="Sports" v-model="hobbyList" />
          <label for="chkSports">Sports</label>
          <input type="checkbox" id="chkMusic" value="Music" v-model="hobbyList" />
          <label for="chkMusic">Music</label>
          <input type="checkbox" id="chkMovie" value="Movie" v-model="hobbyList" />
          <label for="chkMovie">Movie</label>
        </td>
      </tr>
      <tr>
        <td>성별</td>
        <td>
          <input type="radio" id="rdoMale" value="male" v-model="gender" />
          <label for="rdoMale">Male</label>
          <input type="radio" id="rdoFemale" value="female" v-model="gender" />
          <label for="rdoFemale">Female</label>
          <input type="radio" id="rdoNone" value="none" v-model="gender" />
          <label for="rdoNone">None</label>
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
    // data 속성 정의
    const userId = ref('');
    const userPw = ref('');
    const introduction = ref('');
    const developer = ref(false);
    const foreigner = ref('no');
    const hobbyList = ref([]);
    const gender = ref('male');
    const nationality = ref('');
    const carList = ref([]);
    // 데이터 값을 출력한다.
    const onSubmit = () => {
      console.log('userId:', userId.value);
      console.log('userpw:', userPw.value);
      console.log('introduction:', introduction.value);
      console.log('developer:', developer.value);
      console.log('foreigner:', foreigner.value);
      console.log('hobbyList:', hobbyList.value);
      console.log('gender:', gender.value);
      console.log('nationality:', nationality.value);
      console.log('carList:', carList.value);
    };
    // 인자없는 메서드
    const handleCheckBox = () => {
      console.log('handleCheckBox');
    };
    // event 인자를 가진 메서드
    const handleCheckBox2 = (event) => {
      console.log('handleCheckBox2 event:', event);
    };
    // 메서드 인자를 가진 메서드
    const handleCheckBox3 = (message) => {
      console.log('handleCheckBox3 message:', message);
    };
    // 메서드 인자와 event 인자를 가진 메서드
    const handleCheckBox4 = (message, event) => {
      console.log('handleCheckBox4 message:', message);
      console.log('handleCheckBox4 event:', event);
    };

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
      // 이벤트 처리 메서드 변수 반환
      onSubmit,
      handleCheckBox,
      handleCheckBox2,
      handleCheckBox3,
      handleCheckBox4,
    };
  },
};
</script>
