// List

void main() {
  List names = ['Jack', 'Jill'];
  print(names[0]);
  print(names[1]);
  print(names.length);

  var names2 = ['Jack', 'Jill'];
  print(names2);

  var names3 = ['Jack', 'Jill', 10, 100.1];
  for (var n in names3) {
    print(n);
  }

  List<String> names4 = ['Jack', 'Jill'];
  names4[1] = 'Mark';
  print(names4);

  List<String> names5 = const ['Jack', 'Jill'];
  // names5[1] = 'Mark'; // names5 is const
  print(names5);

  var names6 = names; // shallow copy
  print('names6: $names6');
  names[1] = 'Mark';
  print('names6: $names6 (shallow copy and edit)');
  print('names: $names (original with edited)');

  var names7 = [...names2]; // deep copy
  print('names7: $names7');
  names7[1] = 'Fill';
  print('names7: $names7 (deep copy and edit)');
  print('names2: $names2 (original without edited)');
}
