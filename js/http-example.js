const { request } = require('https');

const req = request('https://www.google.com', (res) => {
  res.on('data', (chunk)=> {
    console.log(`Data chunk: ${chunk}`)
  });

  res.on('end', () => {
    console.log('No more data')
  });
});

// This actually sends the request
req.end();
