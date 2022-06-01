// when doing this for real, we should use the tls

// exports.REQUEST_TIMEOUT = 500;

function decrypt() {
  return 'decrypted data'
}


function read() {
  return decrypt('data');
}



// 아래와 같은 식으로 표현도 가능하다.
// module.exports.read = function read() {
//   return decrypt('data');
// }

// exports.read = function read() { // exports here is just pointing to module.export
//   return decrypt('data');
// }


// 아래 처럼 하는게 제일 좋다.
// 인터페이스가 명시적으로 드러난다.
// 밑에 export를 할 module.exports와 달라진다는 걸 알아야한다.

export {
  read,
}
