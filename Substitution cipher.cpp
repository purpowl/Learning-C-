// Section 10 - Challenge - Substitution Cipher

/* Basically, each letter of the alphabet gets replaced by another letter of the alphabet
 * For example: every 'a' get replaced with and 'X', and every 'b' gets replaced with a 'Z'
 *
 * Ask users to enter a secret message
 * Encrypt this message using the substitution cipher and display the encrypted message
 * Then decrypted the encrypted back to the original message
 *
 * You may use 2 strings for your substitution
 * To encrypt, replace the character at position n in alphabet with the character at position n in key
 * To decrypt, replace the character at position n in key with the character at position n in alphabet
 *
 */

#include <string>
#include <iostream>
using namespace std;

int main(){
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string message{};
    string encrypted{};
    string decrypted{};
    cout << "Enter your secret message: ";
    getline(cin, message); // We want to read the space also

    cout << "Encrypting message... " << endl;

    // Encrypted
    for (char c: message){
        int index = alphabet.find(c);
        if (index != string::npos){
            char new_char = key.at(index);
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }
    cout << "Encrypted message: " << encrypted << endl;

    cout << "Decrypting message..." << endl;

    //Decrypted
    for (char c: encrypted){
        int index = key.find(c);
        if (index != string::npos){
            char new_char = alphabet.at(index);
            decrypted += new_char;
        } else
            decrypted += c;
    }

    cout << "Decrypted Message: " << decrypted << endl;
//    return 0;
}