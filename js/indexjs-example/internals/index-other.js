// const request = require('./request');
// const request = require('./response');


// module.exports = {
//   send: request.send,
//   REQUEST_TIMEOUT: request.REQUEST_TIMEOUT,
//   read: response.read,
// }

// using scpread operator

module.exports = {
  ...require('./request'),
  ...require('.response'),
}


// 사람마다 다르지만 index.js 없는게 보다 코드를 보기 쉽게 해준다.
