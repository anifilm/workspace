class Book
  attr_accessor :title, :author, :pages
  def initialize(name)
    puts "Creating Book: " + name
  end
end

book1 = Book.new("Mike")
book1.title = "Harry Potter"
book1.author = "JK Rowling"
book1.pages = 400

book2 = Book.new("Bill")
book2.title = "Lord of the rings"
book2.author = "Tolkein"
book2.pages = 500
