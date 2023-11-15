const mysql = require('mysql');

const connection = mysql.createConnection({
	host: 'mysql-5707.dinaserver.com',
	port: '3306',
	user: 'mouredev_read',
	password: 'mouredev_pass',
	database: 'moure_test'
});

connection.connect()

connection.query('SELECT * FROM challenges', (error, rows) =>{
	if (error) throw error;
	const results = Object.values(JSON.parse(JSON.stringify(rows)));
	results.forEach(element => {console.log(element.id, element.name, element.difficulty, element.date)});
});

connection.end()