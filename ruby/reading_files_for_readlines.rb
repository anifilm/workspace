File.open("employees.txt", "r") do |file|

  for line in file.readlines()
    puts line
  end

end
