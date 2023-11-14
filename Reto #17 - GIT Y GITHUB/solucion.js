const showCommits = async () => {

	try{

		const res = await fetch("https://api.github.com/repos/mouredev/retos-programacion-2023/commits")
		const data = await res.json()

		let commits = []

		for(let i = 0; i < 10;i++){
			commits.push({
				commit: i + 1,
				Hash: data[i].commit.tree.sha,
				Author: data[i].commit.author.name,
				Message: data[i].commit.message,
				Date: data[i].commit.author.date,
			});
			console.log(
				`Commit: ${commits[i].commit} | ${commits[i].Hash} | ${commits[i].Author} | ${commits[i].Message} | ${commits[i].Date}`
			)
		}
		
	}
	catch(error){
		console.log(error);
	}
}

showCommits()