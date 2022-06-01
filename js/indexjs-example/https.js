const internals = require('./internals');

// const request = require('./internals/request.js'); // You can skip `.js` if you want.
// const response = require('./internals/response');


function makeRequest(url, data) {
  internals.request.send(url, data);
  return internals.response.read();
}

const responseData = makeRequest('https://google.com', 'hello');
console.log(responseData);

console.log(require.cache)
