#pragma once
#include "AES.h"

namespace KosianenkoAES {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(479, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"open file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(479, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"choose keyfile";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(489, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"AES Compress";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(489, 235);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Check compressed file";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(489, 301);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(207, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Check decompressed file";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(282, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(67, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(285, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(35, 148);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(390, 229);
			this->textBox3->TabIndex = 7;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 407);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// Auxiliary function for KeyExpansion
		void KeyExpansionCore(unsigned char* in, unsigned char i) {
			// Rotate left by one byte: shift left 
			unsigned char t = in[0];
			in[0] = in[1];
			in[1] = in[2];
			in[2] = in[3];
			in[3] = t;

			// S-box 4 bytes 
			in[0] = s[in[0]];
			in[1] = s[in[1]];
			in[2] = s[in[2]];
			in[3] = s[in[3]];

			// RCon
			in[0] ^= rcon[i];
		}

		/* The main KeyExpansion function
 * Generates additional keys using the original key
 * Total of 11 128-bit keys generated, including the original
 * Keys are stored one after the other in expandedKeys
 */
		void KeyExpansion(unsigned char inputKey[16], unsigned char expandedKeys[176]) {
			// The first 128 bits are the original key
			for (int i = 0; i < 16; i++) {
				expandedKeys[i] = inputKey[i];
			}

			int bytesGenerated = 16; // Bytes we've generated so far
			int rconIteration = 1; // Keeps track of rcon value
			unsigned char tmpCore[4]; // Temp storage for core

			while (bytesGenerated < 176) {
				/* Read 4 bytes for the core
				* They are the previously generated 4 bytes
				* Initially, these will be the final 4 bytes of the original key
				*/
				for (int i = 0; i < 4; i++) {
					tmpCore[i] = expandedKeys[i + bytesGenerated - 4];
				}

				// Perform the core once for each 16 byte key
				if (bytesGenerated % 16 == 0) {
					KeyExpansionCore(tmpCore, rconIteration++);
				}

				for (unsigned char a = 0; a < 4; a++) {
					expandedKeys[bytesGenerated] = expandedKeys[bytesGenerated - 16] ^ tmpCore[a];
					bytesGenerated++;
				}

			}
		}


		/* Serves as the initial round during encryption
		 * AddRoundKey is simply an XOR of a 128-bit block with the 128-bit key.
		 */
		void AddRoundKey(unsigned char* state, unsigned char* roundKey) {
			for (int i = 0; i < 16; i++) {
				state[i] ^= roundKey[i];
			}
		}

		/* Perform substitution to each of the 16 bytes
		 * Uses S-box as lookup table
		 */
		void SubBytesE(unsigned char* state) {
			for (int i = 0; i < 16; i++) {
				state[i] = s[state[i]];
			}
		}

		// Shift left, adds diffusion
		void ShiftRowsE(unsigned char* state) {
			unsigned char tmp[16];

			/* Column 1 */
			tmp[0] = state[0];
			tmp[1] = state[5];
			tmp[2] = state[10];
			tmp[3] = state[15];

			/* Column 2 */
			tmp[4] = state[4];
			tmp[5] = state[9];
			tmp[6] = state[14];
			tmp[7] = state[3];

			/* Column 3 */
			tmp[8] = state[8];
			tmp[9] = state[13];
			tmp[10] = state[2];
			tmp[11] = state[7];

			/* Column 4 */
			tmp[12] = state[12];
			tmp[13] = state[1];
			tmp[14] = state[6];
			tmp[15] = state[11];

			for (int i = 0; i < 16; i++) {
				state[i] = tmp[i];
			}
		}

		/* MixColumns uses mul2, mul3 look-up tables
		 * Source of diffusion
		 */
		void MixColumns(unsigned char* state) {
			unsigned char tmp[16];

			tmp[0] = (unsigned char)mul2[state[0]] ^ mul3[state[1]] ^ state[2] ^ state[3];
			tmp[1] = (unsigned char)state[0] ^ mul2[state[1]] ^ mul3[state[2]] ^ state[3];
			tmp[2] = (unsigned char)state[0] ^ state[1] ^ mul2[state[2]] ^ mul3[state[3]];
			tmp[3] = (unsigned char)mul3[state[0]] ^ state[1] ^ state[2] ^ mul2[state[3]];

			tmp[4] = (unsigned char)mul2[state[4]] ^ mul3[state[5]] ^ state[6] ^ state[7];
			tmp[5] = (unsigned char)state[4] ^ mul2[state[5]] ^ mul3[state[6]] ^ state[7];
			tmp[6] = (unsigned char)state[4] ^ state[5] ^ mul2[state[6]] ^ mul3[state[7]];
			tmp[7] = (unsigned char)mul3[state[4]] ^ state[5] ^ state[6] ^ mul2[state[7]];

			tmp[8] = (unsigned char)mul2[state[8]] ^ mul3[state[9]] ^ state[10] ^ state[11];
			tmp[9] = (unsigned char)state[8] ^ mul2[state[9]] ^ mul3[state[10]] ^ state[11];
			tmp[10] = (unsigned char)state[8] ^ state[9] ^ mul2[state[10]] ^ mul3[state[11]];
			tmp[11] = (unsigned char)mul3[state[8]] ^ state[9] ^ state[10] ^ mul2[state[11]];

			tmp[12] = (unsigned char)mul2[state[12]] ^ mul3[state[13]] ^ state[14] ^ state[15];
			tmp[13] = (unsigned char)state[12] ^ mul2[state[13]] ^ mul3[state[14]] ^ state[15];
			tmp[14] = (unsigned char)state[12] ^ state[13] ^ mul2[state[14]] ^ mul3[state[15]];
			tmp[15] = (unsigned char)mul3[state[12]] ^ state[13] ^ state[14] ^ mul2[state[15]];

			for (int i = 0; i < 16; i++) {
				state[i] = tmp[i];
			}
		}

		/* Each round operates on 128 bits at a time
		 * The number of rounds is defined in AESEncrypt()
		 */
		void Round(unsigned char* state, unsigned char* key) {
			SubBytesE(state);
			ShiftRowsE(state);
			MixColumns(state);
			AddRoundKey(state, key);
		}

		// Same as Round() except it doesn't mix columns
		void FinalRound(unsigned char* state, unsigned char* key) {
			SubBytesE(state);
			ShiftRowsE(state);
			AddRoundKey(state, key);
		}

		/* The AES encryption function
		 * Organizes the confusion and diffusion steps into one function
		 */
		void AESEncrypt(unsigned char* message, unsigned char* expandedKey, unsigned char* encryptedMessage) {
			unsigned char state[16]; // Stores the first 16 bytes of original message

			for (int i = 0; i < 16; i++) {
				state[i] = message[i];
			}

			int numberOfRounds = 9;

			AddRoundKey(state, expandedKey); // Initial round

			for (int i = 0; i < numberOfRounds; i++) {
				Round(state, expandedKey + (16 * (i + 1)));
			}

			FinalRound(state, expandedKey + 160);

			// Copy encrypted state to buffer
			for (int i = 0; i < 16; i++) {
				encryptedMessage[i] = state[i];
			}
		}


		/* Used in Round() and serves as the final round during decryption
		 * SubRoundKey is simply an XOR of a 128-bit block with the 128-bit key.
		 * So basically does the same as AddRoundKey in the encryption
		 */
		void SubRoundKey(unsigned char* state, unsigned char* roundKey) {
			for (int i = 0; i < 16; i++) {
				state[i] ^= roundKey[i];
			}
		}

		/* InverseMixColumns uses mul9, mul11, mul13, mul14 look-up tables
		 * Unmixes the columns by reversing the effect of MixColumns in encryption
		 */
		void InverseMixColumns(unsigned char* state) {
			unsigned char tmp[16];

			tmp[0] = (unsigned char)mul14[state[0]] ^ mul11[state[1]] ^ mul13[state[2]] ^ mul9[state[3]];
			tmp[1] = (unsigned char)mul9[state[0]] ^ mul14[state[1]] ^ mul11[state[2]] ^ mul13[state[3]];
			tmp[2] = (unsigned char)mul13[state[0]] ^ mul9[state[1]] ^ mul14[state[2]] ^ mul11[state[3]];
			tmp[3] = (unsigned char)mul11[state[0]] ^ mul13[state[1]] ^ mul9[state[2]] ^ mul14[state[3]];

			tmp[4] = (unsigned char)mul14[state[4]] ^ mul11[state[5]] ^ mul13[state[6]] ^ mul9[state[7]];
			tmp[5] = (unsigned char)mul9[state[4]] ^ mul14[state[5]] ^ mul11[state[6]] ^ mul13[state[7]];
			tmp[6] = (unsigned char)mul13[state[4]] ^ mul9[state[5]] ^ mul14[state[6]] ^ mul11[state[7]];
			tmp[7] = (unsigned char)mul11[state[4]] ^ mul13[state[5]] ^ mul9[state[6]] ^ mul14[state[7]];

			tmp[8] = (unsigned char)mul14[state[8]] ^ mul11[state[9]] ^ mul13[state[10]] ^ mul9[state[11]];
			tmp[9] = (unsigned char)mul9[state[8]] ^ mul14[state[9]] ^ mul11[state[10]] ^ mul13[state[11]];
			tmp[10] = (unsigned char)mul13[state[8]] ^ mul9[state[9]] ^ mul14[state[10]] ^ mul11[state[11]];
			tmp[11] = (unsigned char)mul11[state[8]] ^ mul13[state[9]] ^ mul9[state[10]] ^ mul14[state[11]];

			tmp[12] = (unsigned char)mul14[state[12]] ^ mul11[state[13]] ^ mul13[state[14]] ^ mul9[state[15]];
			tmp[13] = (unsigned char)mul9[state[12]] ^ mul14[state[13]] ^ mul11[state[14]] ^ mul13[state[15]];
			tmp[14] = (unsigned char)mul13[state[12]] ^ mul9[state[13]] ^ mul14[state[14]] ^ mul11[state[15]];
			tmp[15] = (unsigned char)mul11[state[12]] ^ mul13[state[13]] ^ mul9[state[14]] ^ mul14[state[15]];

			for (int i = 0; i < 16; i++) {
				state[i] = tmp[i];
			}
		}

		// Shifts rows right (rather than left) for decryption
		void ShiftRowsD(unsigned char* state) {
			unsigned char tmp[16];

			/* Column 1 */
			tmp[0] = state[0];
			tmp[1] = state[13];
			tmp[2] = state[10];
			tmp[3] = state[7];

			/* Column 2 */
			tmp[4] = state[4];
			tmp[5] = state[1];
			tmp[6] = state[14];
			tmp[7] = state[11];

			/* Column 3 */
			tmp[8] = state[8];
			tmp[9] = state[5];
			tmp[10] = state[2];
			tmp[11] = state[15];

			/* Column 4 */
			tmp[12] = state[12];
			tmp[13] = state[9];
			tmp[14] = state[6];
			tmp[15] = state[3];

			for (int i = 0; i < 16; i++) {
				state[i] = tmp[i];
			}
		}

		/* Perform substitution to each of the 16 bytes
		 * Uses inverse S-box as lookup table
		 */
		void SubBytesD(unsigned char* state) {
			for (int i = 0; i < 16; i++) { // Perform substitution to each of the 16 bytes
				state[i] = inv_s[state[i]];
			}
		}

		/* Each round operates on 128 bits at a time
		 * The number of rounds is defined in AESDecrypt()
		 * Not surprisingly, the steps are the encryption steps but reversed
		 */
		void DRound(unsigned char* state, unsigned char* key) {
			SubRoundKey(state, key);
			InverseMixColumns(state);
			ShiftRowsD(state);
			SubBytesD(state);
		}

		// Same as Round() but no InverseMixColumns
		void InitialRound(unsigned char* state, unsigned char* key) {
			SubRoundKey(state, key);
			ShiftRowsD(state);
			SubBytesD(state);
		}

		/* The AES decryption function
		 * Organizes all the decryption steps into one function
		 */
		void AESDecrypt(unsigned char* encryptedMessage, unsigned char* expandedKey, unsigned char* decryptedMessage)
		{
			unsigned char state[16]; // Stores the first 16 bytes of encrypted message

			for (int i = 0; i < 16; i++) {
				state[i] = encryptedMessage[i];
			}

			InitialRound(state, expandedKey + 160);

			int numberOfRounds = 9;

			for (int i = 8; i >= 0; i--) {
				DRound(state, expandedKey + (16 * (i + 1)));
			}

			SubRoundKey(state, expandedKey); // Final round

			// Copy decrypted state to buffer
			for (int i = 0; i < 16; i++) {
				decryptedMessage[i] = state[i];
			}
		}
		void SysStringToString(String^ s, std::string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		/// <summary>
		/// ////////////// main
		/// </summary>
		/// <param name="filename"></param>
		/// <param name="keyname"></param>
		void AESAlgorithm(String^ filename, String^ keyname) 
		{
			std::string fname  = "";
			std::string kname = "";

			SysStringToString(filename, fname);
			SysStringToString(keyname, kname);

			char* message = "";
			ifstream input(fname.c_str(), ios::out | ios::binary);
			while (!input.eof())
			{
				message += input.get();
			}


			int originalLen = strlen((const char*)message);

			int paddedMessageLen = originalLen;

			if ((paddedMessageLen % 16) != 0) {
				paddedMessageLen = (paddedMessageLen / 16 + 1) * 16;
			}

			unsigned char* paddedMessage = new unsigned char[paddedMessageLen];
			for (int i = 0; i < paddedMessageLen; i++) {
				if (i >= originalLen) {
					paddedMessage[i] = 0;
				}
				else {
					paddedMessage[i] = message[i];
				}
			}

			unsigned char* encryptedMessage = new unsigned char[paddedMessageLen];

			string str;
			ifstream infile;
			infile.open(kname.c_str(), ios::in | ios::binary);

			if (infile.is_open())
			{
				getline(infile, str); // The first line of file should be the key
				infile.close();
			}

			else cout << "Unable to open file";

			istringstream hex_chars_stream(str);
			unsigned char key[16];
			int i = 0;
			unsigned int c;
			while (hex_chars_stream >> hex >> c)
			{
				key[i] = c;
				i++;
			}

			unsigned char expandedKey[176];

			KeyExpansion(key, expandedKey);

			for (int i = 0; i < paddedMessageLen; i += 16) {
				AESEncrypt(paddedMessage + i, expandedKey, encryptedMessage + i);
			}

			cout << "Encrypted message in hex:" << endl;
			for (int i = 0; i < paddedMessageLen; i++) {
				cout << hex << (int)encryptedMessage[i];
				cout << " ";
			}

			cout << endl;

			// Write the encrypted string out to file "message.aes"
			ofstream outfile;
			outfile.open("Compressed_output.txt", ios::out | ios::binary);
			if (outfile.is_open())
			{
				outfile << encryptedMessage;
				outfile.close();
				cout << "Wrote encrypted message to file Compressed_output.txt" << endl;
			}

			else cout << "Unable to open file";

			// Free memory
			delete[] paddedMessage;
			delete[] encryptedMessage;

			//------------------------------------------ decrypting ----------------------------

	cout << "=============================" << endl;
	cout << " 128-bit AES Decryption Tool " << endl;
	cout << "=============================" << endl;

	// Read in the message from message.aes
	string msgstr;
	//ifstream infile;
	infile.open("Compressed_output.txt", ios::in | ios::binary);

	if (infile.is_open())
	{
		getline(infile, msgstr); // The first line of file is the message
		cout << "Read in encrypted message from message.aes" << endl;
		infile.close();
	}

	else cout << "Unable to open file";

	char * msg = new char[msgstr.size()+1];

	strcpy(msg, msgstr.c_str());

	int n = strlen((const char*)msg);

	unsigned char * encryptedMessage2 = new unsigned char[n];
	for (int i = 0; i < n; i++) {
		encryptedMessage2[i] = (unsigned char)msg[i];
	}

	// Free memory
	delete[] msg;

	// Read in the key
	string keystr;
	ifstream keyfile;
	keyfile.open(kname.c_str(), ios::in | ios::binary);

	if (keyfile.is_open())
	{
		getline(keyfile, keystr); // The first line of file should be the key
		cout << "Read in the 128-bit key from keyfile" << endl;
		keyfile.close();
	}

	else cout << "Unable to open file";

	istringstream hex_chars_stream2(keystr);
	unsigned char key2[16];
	i = 0;
	c;
	while (hex_chars_stream2 >> hex >> c)
	{
		key2[i] = c;
		i++;
	}

	unsigned char expandedKey2[176];

	KeyExpansion(key2, expandedKey2);
	
	int messageLen = strlen((const char *)encryptedMessage2);

	unsigned char * decryptedMessage = new unsigned char[messageLen];

	for (int i = 0; i < messageLen; i += 16) {
		AESDecrypt(encryptedMessage2 + i, expandedKey2, decryptedMessage + i);
	
	}
	ofstream outfile2;
	outfile2.open("Readable_output.txt", ios::out | ios::binary);
	if (outfile2.is_open())
	{
		outfile2 << decryptedMessage;
		outfile2.close();
	}
	cout << endl;

	cout << "Decrypted message in hex:" << endl;
	for (int i = 0; i < messageLen; i++) {
		cout << hex << (int)decryptedMessage[i];
		cout << " ";
	}
	cout << endl;
	cout << "Decrypted message: ";
	for (int i = 0; i < messageLen; i++) {
		cout << decryptedMessage[i];
	}

}




	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			textBox1->Text = openFileDialog1->FileName;
		}
		
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog2->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			textBox2->Text = openFileDialog2->FileName;
		}

		button3->Enabled = true;
	
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	AESAlgorithm(textBox1->Text, textBox2->Text);
	button4->Enabled = true;
	button5->Enabled = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox3->Text = "";
	StreamReader^ reader = File::OpenText("Compressed_output.txt");
	textBox3->Text = reader->ReadToEnd();
	reader->Close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
//
	textBox3->Text = "";
	StreamReader^ reader = File::OpenText("Readable_output.txt");
	textBox3->Text = reader->ReadToEnd();
	reader->Close();
}
};
}
