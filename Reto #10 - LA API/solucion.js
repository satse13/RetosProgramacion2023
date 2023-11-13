
const readline = require("readline");

const URL = "https://pokeapi.co/api/v2/pokemon/"

const fetchPokemon = async (pokemon) => {
	console.log(URL + pokemon);
	
	const response = await fetch(URL + pokemon)
	const json = await response.json()
	return JSON.stringify(json)
}

const llamadaAPI = async () => {

	const rl = readline.createInterface({
		input: process.stdin,
  	output: process.stdout,
	});
	
	let pokemon = ""
	rl.question("Introduce en minusculas el nombre de un pokemon: ", async (answer) => {
		pokemon = answer
		rl.close()
		const json = await fetchPokemon(pokemon)
		console.log({json}) 
	})
}

llamadaAPI()