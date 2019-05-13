File.open("employees.txt", "r") do |file|

  puts file.read().include? "Jim"

end
