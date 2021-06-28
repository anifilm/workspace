<template>
  <div class="ball b1" :style="styleObject">{{ number }}</div>
</template>

<script>
export default {
  name: 'LottoBall',
  props: {
    number: Number
  },
  computed: {
    styleObject() {
      let color;
      let background;
      if (this.number <= 10) {
        color = 'white';
    background = 'Gold';
      } else if (this.number <= 20) {
        color = 'white';
    background = 'CornflowerBlue';
      } else if (this.number <= 30) {
        color = 'white';
    background = 'Crimson';
      } else if (this.number <= 40) {
        color = 'white';
    background = 'DarkGray';
      } else {
        color = 'white';
    background = 'SeaGreen';
      }
      return {
        color,
        background
      };
    }
  }
};
</script>

<style>
.ball {
  display: inline-block;
  border-radius: 50%;
  width: 80px;
  height: 80px;
  line-height: 75px;
  font-size: 30px;
  text-align: center;
  margin: 10px;
}
.b1 {
  background-color: rgb(49, 145, 231);
  box-shadow: inset -25px -25px 40px rgba(0, 0, 0, 0.3);
  background-image: linear-gradient(
    -45deg,
    rgba(255, 255, 220, 0.3) 0%,
    transparent 100%
  );
}
</style>
