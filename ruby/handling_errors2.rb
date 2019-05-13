lucky_nums = [4, 8, 15, 16, 23, 42]

begin
  lucky_nums["dog"]
  # num = 10 / 0
rescue TypeError => e
  # puts "Wrong Type"
  puts e
rescue ZeroDivisionError
  puts "Division by zero error"
end
