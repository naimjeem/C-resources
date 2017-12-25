
function aVeryBigSum( ar ) {
	return ar.reduce( (total, current, index) => {
		let x = current.reduce( ( sum , c ) => {
			sum += c;
			return sum;
		}, 0 );
		let first = ( x % 10 ) + total.remainder;
		total.sum.push( first % 10  );
		total.remainder = Math.floor(first / 10) + Math.floor( x / 10 );
		return total;
	}, { sum:[], remainder:0 });
}

function main() {
 	var n = 10;
	let inputStr = "1001458909 1004570889 1007019111 1003302837 1002514638 1006431461 1002575010 1007514041 1007548981 1004402249";

	let ar = inputStr.split(" ");
	ar = ar.map(Number);
	let xyz = ar.reduce( (total, current, index) => {
		total.push(  current.toString().split("").reverse() );
		return total;
	}, []).reduce( (total, current, index, arr) => {
		for(let a =0; a<current.length; a++) {
			if(typeof total[a] === 'undefined' ) {
				total[a] = [];
			}
			total[a][index] = 0;
			total[a][index] = parseInt(current[a], 10);
		}
		return total;
	}, []);
	
	console.log(xyz);
	console.log("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	var result = aVeryBigSum(xyz);
	console.log("result : ", result);
	if( result.remainder !== 0 ) 
		result.sum.push( result.remainder );

	console.log("result : ", result.sum.reverse().join(""));
	
}

main();
 
