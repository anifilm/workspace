// Section 10
// Challenge - Substitution Cipher
/*
A simple and very old method of sending secret messages is the substitution cipher
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program that ask a user to enter a secret messege.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encryped message back to the original message.

You may use the 2 strings below for your subsitition.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! Anf make the cipher stringer if you wish!
Currently the cipher only substitution letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message {};

    cout << "\nEnter your secret message: ";
    getline(cin, secret_message);
    cout << endl;

    cout << "\nEncrypting message..." << endl;

    string encrypt_msg {};
    for (char c: secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char { key.at(position) };
            encrypt_msg += new_char;
        } else {
            encrypt_msg += c;
        }
    } 

    cout << "\nEncrypting message: " << encrypt_msg << endl;

    cout << "\nDecrypting message..." << endl;

    string decrypt_msg {};
    for (char c: encrypt_msg) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char new_char { alphabet.at(position) };
            decrypt_msg += new_char;
        } else {
            decrypt_msg += c;
        }
    }

    cout << "\nDecrypting message: " << decrypt_msg << endl;

	cout << endl;	
	return 0;
}