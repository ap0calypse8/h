#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


 static int byte_count(const std::string& filename) { //function to count bytes
	
	 std::ifstream file(filename, std::ios::binary);

	 if (!file.is_open()) {
		 std::cerr << "error" << "\n";
		 return -1;
	 }

	file.seekg(0, std::ios::end);
	int bytes = file.tellg();
	file.close();

	return bytes;
}

 static int word_count(const std::string& filename) { //function to count words
	 std::ifstream file(filename);

	 if (!file.is_open()) {
		 std::cerr << "Error!" << filename << "\n";
		 return -1;
	 }
	 int words = 0;
	 std::string read_word;

	 while (file >> read_word) {
		 words++;
	 }
	 file.close();

	 return words;
	 
 }

 static int line_count(const std::string& filename) { //function to count lines
	 std::ifstream file(filename);

	 if (!file.is_open()) {
		 std::cerr << "Error!" << filename << "\n";
		 return -1;
	 }

	 int lines = 0;
	 std::string read;

	 while (std::getline(file, read)) {
		
			 lines++;
		 
	 }
	 file.close();
	 return lines;
 }


int main(int argc, char* argv[]) { //argc is number of cmd line args and argc is array of pointer containing the args
	if (argc != 3) {
		std::cerr << argv[0] << " test.txt" << "\n"; //argv[0] is set to name of program file by default
		std::cerr << "Options: \n";
		std::cerr << " -b Count bytes \n";
		std::cerr << " -w Count words \n";
		std::cerr << " -l Count lines \n";
		return 1;
	}
	std::string option = argv[1];   //second cmd ard is set for options
	std::string filename = argv[2]; //third cmd arg is set to filename (here its test.txt)
	
	int count = 0;					


	if (option == "-b") {
		count = byte_count(filename);
	}
	else if (option == "-w") {
		count = word_count(filename);
	}
	else if (option == "-l") {
		count = line_count(filename);
	}
	else {
		std::cerr << "Invalid !!" << option << "\n";
		return 1;
	}

	if (count >= 0) {
		std::cout << count << "\n";
	}



	/*  
	int bytes = byte_count(filename);
	if (bytes >= 0) {
		std::cout << "Bytes count for the file is : " << bytes << "\n";
	}

	int words = word_count(filename);
	std::cout << "Word count for the file is : " << words << "\n";

	int line = line_count(filename);
	std::cout << "Lines count for the file is : " << line << "\n"; */

	return 0;
}