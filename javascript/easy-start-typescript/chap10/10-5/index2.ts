function embraceEverything<T extends string>(thing: T): T {
  return thing;
}

embraceEverything<string>('hi');
embraceEverything<number>(100);
embraceEverything<boolean>(false);
embraceEverything<{ name: string }>({ name: 'capt' });
