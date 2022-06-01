import fetch from "node-fetch";

const urls = [
	'https://jsonplaceholder.typicode.com/users',
	'https://jsonplaceholder.typicode.com/posts',
	'https://jsonplaceholder.typicode.com/albums'
]

const getData = async function() {
	try {
		const [ users, posts, albums ] = await Promise.all(urls.map(async function(url) {
        const response = await fetch(url);
        return response.json();
		}))
		console.log('users', users)
		console.log('posts', posts)
		console.log('albums', albums)
	} catch (err) {
		console.log('oops', err)
	}
}

getData();
