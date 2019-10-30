## General info
This project is a command line program that takes a string and encrypts it using three encryption algorithms:
*Shift Encryption
*Matrix Encryption
*Reverse Encryption
The program takes a string and can encrypt it or decrypt it using any of these algorithms with the exception of Matrix Decoding as that requires a Matrix input. You can however test the Matrix Decryption on a string encrypted by the program.
	
## Dependencies
Project is created with:
* LibCurl (Post requests)
* JsonCPP (Parsing Post Response)
* Catch2 (unit testing)
	
## Setup
This project uses LibCurl which requires OpenSSL to be installed on the machine. The installation exe is included.
After installing OpenSSL, navigate to the Release folder containing "Backend Hiring Task.exe" in a command prompt and simply run the command.
The command syntax is as follows:
$ "Backend Hiring Task.exe" <string> <S/M/R> <enc/dec>
The first argument string takes the string to be encoded or decoded (Make sure to put it between quotation marks if it contains spaces.)
The second argument takes delineates the type of encoding to be done (S for Shift, M for Matrix and R for Reverse)
The third and final argument chooses whether to decode or encode the string (enc for encode, dec for decode)
If you have chosen to encrypt using Matrix encoding, you will be prompted asking if you want to decode the encoded matrix. Press 0 to decode it or any other key to end the program.

## Example Commands
$ "Backend Hiring Task.exe" "Hello World" S enc
$ "Backend Hiring Task.exe" "Khoor Zruog" S dec
$ "Backend Hiring Task.exe" "My name is John" M enc
$ "Backend Hiring Task.exe" "Encryption" R enc
$ "Backend Hiring Task.exe" "noitpyrcnE" R dec