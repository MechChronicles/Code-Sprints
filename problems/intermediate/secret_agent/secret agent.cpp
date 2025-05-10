#include <iostream>
#include <string>
using namespace std;

// Function to encode the message
string encodeMessage(string message, int shift) {
    string encodedMessage = "";

    for (char c : message) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + shift) % 26 + base;
        }
        encodedMessage += c;
    }

    return encodedMessage;
}

// Function to decode the message
string decodeMessage(string message, int shift) {
    return encodeMessage(message, 26 - shift);  // Decoding is just encoding in reverse
}

int main() {
    string message;
    int shift;

    // Input the message to encode
    cout << "Enter the message: ";
    getline(cin, message);

    // Input the shift for the Caesar Cipher
    cout << "Enter the shift (1-25): ";
    cin >> shift;

    // Encoding the message
    string encoded = encodeMessage(message, shift);
    cout << "Encoded message: " << encoded << endl;

    // Decoding the message back
    string decoded = decodeMessage(encoded, shift);
    cout << "Decoded message: " << decoded << endl;

    return 0;
}
