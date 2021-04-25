// 10.4 위크셋

// 위크셋은 객체만 포함할 수 있으며, 이 객체들은 가비지 콜렉션의 대상이 된다.

const naughty = new WeakSet();

const chilren = [
  { name: 'Suzy' },
  { name: 'Derek' },
];

naughty.add(children[1]);

for (let child of children) {
  if (naughty.has(child))
    console.log(`Coal for ${child.name}!`);
  else
    console.log(`Presents for ${child.name}!`);
}
