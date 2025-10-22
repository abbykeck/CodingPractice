import java.io.*;
public class WriteFile {
	public static void main(String[] args) {
		System.out.println("Hello world");
		new WriteFile();
	} // end main

	public WriteFile() {
		// always need to put file handling in try/catch in java
		try {
			// need two different objects for fileIO
			// These are for output (writing to a file)
			FileWriter outFile = new FileWriter("abc.txt", false);
			PrintWriter output = new PrintWriter(outFile);
			
			output.println("Hello world!");
			output.println("abcdefghijklmnopqrstuvwxyz");
			output.println("1234567890");

			outFile.close();
			output.close();
		} catch (Exception e) {
			System.out.println(e.getMessage());
		} // end try
	} // end constructor
} // end WriteFile
