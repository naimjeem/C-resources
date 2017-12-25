
function solve_input(input) {

	let xyz = input.reduce( ( total, current, index ) => {
		if( current[0] > current[1]  ) {
			total[0] += 1;
		} else if( current[0] < current[1] ) {
			total[1] += 1;
		}			
		return total;
	}, [0, 0] );

	return xyz;
}

function main() {
	const a0_temp = [ 5, 6, 7 ];
	const b0_temp = [ 3, 6, 10 ];

	let g = a0_temp.reduce( (total, current, index) => {
		let x =  [ parseInt(current, 10), parseInt(b0_temp[index], 10) ]; 
		total.push(x);
		return total;
	}, [] );

	let result = solve_input( g );
	console.log("result : ", result.join(" ") );
}

main();
