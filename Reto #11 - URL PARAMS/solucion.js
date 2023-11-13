

const getQueryParams = (url) => {
	const params = url.split('?')[1].split('&')

	const sol = params.map(param => {
		const elems = param.split('=')
			return elems[1]
	} )
	console.log(sol);
	
}

getQueryParams("https://retosdeprogramacion.com?year=2023&challenge=0")