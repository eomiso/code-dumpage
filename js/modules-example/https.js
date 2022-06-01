
const request = require('./request'); // You can skip `.js` if you want.
// ECMA script 상으로는
// import { send } from './request'; 라고 하면 된다.

// requiring == importing 이라는 표현이 모두 등장한다.

// node loads the module only once. it is called module cache


const response = require('./response');

// using a destructuring syntax is much better.
// const { send } = require('./request');
// const { read } = require('./response');

// then we can use them without the prefix.(makeRequest)

// Welcome to Node.js v14.19.2.
// Type ".help" for more information.
// > require.extensions
// [Object: null prototype] {
//   '.js': [Function (anonymous)],
//   '.json': [Function (anonymous)],
//   '.node': [Function (anonymous)]  => binary node file ( you can write in c++ and import it as a node module)
// }
// >


// Top level module

// make a funtion that allows to make a request to the server to send some data.
// url, and data to send
function makeRequest(url, data) {
  request.send(url, data);
  return response.read();
}

const responseData = makeRequest('https://google.com', 'hello');
console.log(responseData);

console.log(require.cache)
