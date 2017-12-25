
# Install openGL - 
	
	`1) deb http://ppa.launchpad.net/keithw/glfw3/ubuntu trusty main`
	
	`2) sudo apt-get update`
    `3) sudo apt-get install libglfw3`
	`4) sudo apt-get install libglfw3-dev `
	
# Write Program
	
	##(c/c++) openGL program
	

# Get glfw3 dir (first time) - 
	
	`1) pkg-config --list-all | grep glfw3 `
	
	`2) pkg-config --libs -cflags glfw3`

		> expected output on terminal: `-I/usr/include/libdrm -lglfw `
		
		
# Compile

 	`g++ dir/program_name.cpp -I/usr/include/librm -lglfw -lGL `
 	
# Run
	
	`./a.out `
