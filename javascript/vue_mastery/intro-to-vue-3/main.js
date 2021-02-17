const app = Vue.createApp({
  data() {
    return {
      cart: 0,
      product: 'Socks',
      image: './assets/images/socks_green.jpg',
      inStock: true,
      details: ['50% cotton', '30% wool', '20% polyster'],
      variants: [
        { id: 2234, color: '#1ab371', image: './assets/images/socks_green.jpg' },
        { id: 2235, color: '#31425e', image: './assets/images/socks_blue.jpg' },
      ]
    }
  },
  methods: {
    addToCart() {
      this.cart += 1
    },
    updateImage(variantImage) {
      this.image = variantImage
    }
  }
})
