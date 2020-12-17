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

    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";

    string input_message;

    string encrypt_msg;
    string decrypt_msg;

    cout << "\nEnter your secret message: ";
    getline(cin, input_message);
    cout << endl;

    cout << "\nEncrypting message..." << endl;

    encrypt_msg = input_message;
    for (size_t i = 0; i < encrypt_msg.length(); i++) {
        for (size_t j = 0; j < alphabet.length(); j++) {
            if (encrypt_msg.at(i) == alphabet.at(j)) {
                encrypt_msg.at(i) = key.at(j);
                break;
            }
        }
    }

    cout << "\nEncrypting message: " << encrypt_msg << endl;

    cout << "\nDecrypting message..." << endl;

    decrypt_msg = encrypt_msg;
    for (size_t i = 0; i < decrypt_msg.length(); i++) {
        for (size_t j = 0; j < key.length(); j++) {
            if (decrypt_msg.at(i) == key.at(j)) {
                decrypt_msg.at(i) = alphabet.at(j);
                break;
            }
        }
    }

    cout << "\nDecrypting message: " << decrypt_msg << endl;

    cout << endl;
    return 0;
}
