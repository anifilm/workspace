var app = new Vue({
  el: '#app',
  data: {
    brand: 'Vue Mastery',
    product: 'Socks',
    //image: './assets/vmSocks-green.jpg',
    selectedVariant: 0,
    //inStock: false,
    details: ["80% cotton", "20% polyester", "Gender-neutral"],
    variants: [
      {
        variantId: 2234,
        variantColor: '#25a232',
        variantImage: './assets/vmSocks-green.jpg',
        variantQuantity: 10
      },
      {
        variantId: 2235,
        variantColor: '#222b63',
        variantImage: './assets/vmSocks-blue.jpg',
        variantQuantity: 0
      }
    ],
    cart: 0
  },
  methods: {
    addToCart: function () {
      this.cart += 1
    },
    updateProduct: function (index) {
      //this.image = variantImage
      //console.log(index);
      this.selectedVariant = index
    }
  },
  computed: {
    title() {
      return this.brand + ' ' + this.product
    },
    image() {
      return this.variants[this.selectedVariant].variantImage
    },
    inStock() {
      return this.variants[this.selectedVariant].variantQuantity
    }
  }
})
