
#include "stdafx.h"
#include "../DoorOpenerSketch/Desfire.h"

// *****************************************************************************
// The idea of this code is only to check the encryption stuff on Visual Studio.
// But you can also write your own code that communicates with a PN532 board
// through additional hardware (e.g. a PCI card that has digital in/outputs)
// See WinDefines.h
// *****************************************************************************

int _tmain(int argc, _TCHAR* argv[])
{
    const int SIZE = 8; // One DES block = 8 bytes

    byte u8_Data   [SIZE] = { 'H', 'e', 'l', 'l', 'o', 0, 0, 0 };
    byte u8_Crypt  [SIZE] = {0};
    byte u8_Decrypt[SIZE] = {0};

    Desfire i_Desfire;
    i_Desfire.DES3_DEFAULT_KEY.CryptDataBlock(u8_Crypt,   u8_Data,  KEY_ENCIPHER);
    i_Desfire.DES3_DEFAULT_KEY.CryptDataBlock(u8_Decrypt, u8_Crypt, KEY_DECIPHER);

    Utils::Print("8 data bytes:", LF);    
    Utils::PrintHexBuf(u8_Data, SIZE, LF);

    Utils::Print("Encrypted with default DES3 key:", LF);
    Utils::PrintHexBuf(u8_Crypt, SIZE, LF);

    Utils::Print("Decrypted with default DES3 key:", LF);
    Utils::PrintHexBuf(u8_Decrypt, SIZE, LF);

    // Wait for a keypress before exiting
    getch();
	return 0;
}



