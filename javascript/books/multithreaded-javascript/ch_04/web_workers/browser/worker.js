self.onmessage = ({ data: buffer }) => {
  buffer.foo = 42;
  const view = new Uint8Array(buffer);
  view[0] = 2;
  console.log('updated by worker');
};
