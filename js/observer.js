const EventEmitter = require('events');
const celebrity = new EventEmitter();

// subscribe to the celebrity for observer 1
// When ever celebrity emits an event named "race win"
celebrity.on('race', function(result) {
  if (result === 'Win')
    console.log('Congradulations! You are the best! ');
  if (result === 'Loose')
    console.log('Boo! I could have done better')
});

celebrity.on('race', function(result) {
  if (result === 'Loose')
    console.log('Congradulations! You are the best! ');
  if (result === 'Win')
    console.log('Boo! I could have done better')
});

// subscribe to the celebrity for observer 1
// When ever celebrity emits an event named "race win"
// celebrity.on('race win', function() {
//   console.log('boo! I could have done better');
// });

process.on('exit', (code) => {
  console.log('Process exit event with code: ', code);
});

celebrity.emit('race', 'Win');
celebrity.emit('race', 'Loose');
