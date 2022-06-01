function encrypt(data) {
  return 'encrypted data';
}

function send(url, data) {
  const encryptedData = encrypt(data);
  console.log(`sending ${encryptedData} to ${url}`);
}

// module is a global built-in that contains data related to
// the current module

export {
  send,
}


// Module {
//   id: '.',
//   path: '/Users/eomiso/code-dumpage/js/modules-example',
//   exports: {}, // This object is needed to be set if this module is to be available to other modules as well
//   parent: null,
//   filename: '/Users/eomiso/code-dumpage/js/modules-example/request.js',
//   loaded: false,
//   children: [],
//   paths: [
//     '/Users/eomiso/code-dumpage/js/modules-example/node_modules',
//     '/Users/eomiso/code-dumpage/js/node_modules',
//     '/Users/eomiso/code-dumpage/node_modules',
//     '/Users/eomiso/node_modules',
//     '/Users/node_modules',
//     '/node_modules'
//   ]
// }
