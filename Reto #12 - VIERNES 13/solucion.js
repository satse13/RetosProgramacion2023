const viernes13 = (mes, anio) => {

	const fecha = new Date(anio,mes-1,13)
	console.log(fecha);
	
	console.log(fecha.getDay());
	
	return fecha.getDay() === 5// Comprobar si era viernes

}

console.log(viernes13(10,2023))