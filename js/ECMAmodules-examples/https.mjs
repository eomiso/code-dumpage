// const request = require('./request'); // You can skip `.js` if you want.
// ECMA script 상으로는
import { read } from './response.mjs';
import { send } from './request.mjs'; // 라고 하면 된다.

// node treats javacript files as commonJS for backward compatibility
// we need to explicily tell node to treat your code as ECMAscript

// Reletive specifiers need file extension (always)

// 가끔 가다가 extension을 필요로하지 않는 경우가 있는데 이건 특수한 컴파일러를 사용하는 경우이므로
// 왠만하면 써주자.


// Top level module

// make a funtion that allows to make a request to the server to send some data.
// url, and data to send
function makeRequest(url, data) {
  send(url, data);
  return read();
}

const responseData = makeRequest('https://google.com', 'hello');
console.log(responseData);

