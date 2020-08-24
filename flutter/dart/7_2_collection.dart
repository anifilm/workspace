// Set

void main() {
  var halogens = {'fluorine', 'chlorine'};
  print(halogens);

  for (var x in halogens) {
    print(x);
  }

  var names = <String>{};
  Set<String> names2 = {};
  print(names.runtimeType);
  print(names2.runtimeType);
}
