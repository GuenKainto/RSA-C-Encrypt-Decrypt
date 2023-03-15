#pragma once
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <random>
#include <string>
#include <Windows.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <filesystem>
#include <sstream>
#include <codecvt>
#include <bitset>
#include <bitset>

namespace RSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Kpub_TextBox;
	protected:

	private: System::Windows::Forms::Button^ CreateKey_Button;
	private: System::Windows::Forms::TextBox^ Kpr_TextBox;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ BanRo1_TextBox;
	private: System::Windows::Forms::TextBox^ BanMa1_TextBox;
	private: System::Windows::Forms::TextBox^ BanRo2_TextBox;




	private: System::Windows::Forms::TextBox^ BanMa2_TextBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ SaveKpr_Button;
	private: System::Windows::Forms::Button^ Encryp_Button;
	private: System::Windows::Forms::Button^ Decryp_Button;






	private: System::Windows::Forms::Button^ ReadFileBanMa_Button;
	private: System::Windows::Forms::Button^ SendBanMa_Button;


	private: System::Windows::Forms::Button^ SaveBanMa_Button;

	private: System::Windows::Forms::Label^ Loading_Label;
	private: System::Windows::Forms::Button^ SaveKpup_Button;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Kpub_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->CreateKey_Button = (gcnew System::Windows::Forms::Button());
			this->Kpr_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BanRo1_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->BanMa1_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->BanRo2_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->BanMa2_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SaveKpr_Button = (gcnew System::Windows::Forms::Button());
			this->Encryp_Button = (gcnew System::Windows::Forms::Button());
			this->Decryp_Button = (gcnew System::Windows::Forms::Button());
			this->ReadFileBanMa_Button = (gcnew System::Windows::Forms::Button());
			this->SendBanMa_Button = (gcnew System::Windows::Forms::Button());
			this->SaveBanMa_Button = (gcnew System::Windows::Forms::Button());
			this->Loading_Label = (gcnew System::Windows::Forms::Label());
			this->SaveKpup_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kpub";
			// 
			// Kpub_TextBox
			// 
			this->Kpub_TextBox->Location = System::Drawing::Point(103, 35);
			this->Kpub_TextBox->Multiline = true;
			this->Kpub_TextBox->Name = L"Kpub_TextBox";
			this->Kpub_TextBox->Size = System::Drawing::Size(290, 108);
			this->Kpub_TextBox->TabIndex = 1;
			// 
			// CreateKey_Button
			// 
			this->CreateKey_Button->Location = System::Drawing::Point(499, 35);
			this->CreateKey_Button->Name = L"CreateKey_Button";
			this->CreateKey_Button->Size = System::Drawing::Size(75, 23);
			this->CreateKey_Button->TabIndex = 2;
			this->CreateKey_Button->Text = L"Tạo khóa";
			this->CreateKey_Button->UseVisualStyleBackColor = true;
			this->CreateKey_Button->Click += gcnew System::EventHandler(this, &MyForm::CreateKey_Button_Click);
			// 
			// Kpr_TextBox
			// 
			this->Kpr_TextBox->Location = System::Drawing::Point(680, 35);
			this->Kpr_TextBox->Multiline = true;
			this->Kpr_TextBox->Name = L"Kpr_TextBox";
			this->Kpr_TextBox->Size = System::Drawing::Size(290, 108);
			this->Kpr_TextBox->TabIndex = 4;
			this->Kpr_TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(624, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Kpr";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Văn bản";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 403);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Bản mã";
			// 
			// BanRo1_TextBox
			// 
			this->BanRo1_TextBox->Location = System::Drawing::Point(103, 199);
			this->BanRo1_TextBox->Multiline = true;
			this->BanRo1_TextBox->Name = L"BanRo1_TextBox";
			this->BanRo1_TextBox->Size = System::Drawing::Size(290, 144);
			this->BanRo1_TextBox->TabIndex = 7;
			// 
			// BanMa1_TextBox
			// 
			this->BanMa1_TextBox->Location = System::Drawing::Point(103, 400);
			this->BanMa1_TextBox->Multiline = true;
			this->BanMa1_TextBox->Name = L"BanMa1_TextBox";
			this->BanMa1_TextBox->Size = System::Drawing::Size(290, 144);
			this->BanMa1_TextBox->TabIndex = 8;
			// 
			// BanRo2_TextBox
			// 
			this->BanRo2_TextBox->Location = System::Drawing::Point(680, 403);
			this->BanRo2_TextBox->Multiline = true;
			this->BanRo2_TextBox->Name = L"BanRo2_TextBox";
			this->BanRo2_TextBox->Size = System::Drawing::Size(290, 144);
			this->BanRo2_TextBox->TabIndex = 12;
			// 
			// BanMa2_TextBox
			// 
			this->BanMa2_TextBox->Location = System::Drawing::Point(680, 202);
			this->BanMa2_TextBox->Multiline = true;
			this->BanMa2_TextBox->Name = L"BanMa2_TextBox";
			this->BanMa2_TextBox->Size = System::Drawing::Size(290, 144);
			this->BanMa2_TextBox->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(613, 406);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Bản rõ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(609, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Bản mã";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(419, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Đọc file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// SaveKpr_Button
			// 
			this->SaveKpr_Button->Location = System::Drawing::Point(680, 149);
			this->SaveKpr_Button->Name = L"SaveKpr_Button";
			this->SaveKpr_Button->Size = System::Drawing::Size(75, 23);
			this->SaveKpr_Button->TabIndex = 14;
			this->SaveKpr_Button->Text = L"Lưu khóa";
			this->SaveKpr_Button->UseVisualStyleBackColor = true;
			this->SaveKpr_Button->Click += gcnew System::EventHandler(this, &MyForm::SaveKpr_Button_Click);
			// 
			// Encryp_Button
			// 
			this->Encryp_Button->Location = System::Drawing::Point(419, 246);
			this->Encryp_Button->Name = L"Encryp_Button";
			this->Encryp_Button->Size = System::Drawing::Size(75, 23);
			this->Encryp_Button->TabIndex = 15;
			this->Encryp_Button->Text = L"Mã hóa";
			this->Encryp_Button->UseVisualStyleBackColor = true;
			this->Encryp_Button->Click += gcnew System::EventHandler(this, &MyForm::Encryp_Button_Click);
			// 
			// Decryp_Button
			// 
			this->Decryp_Button->Location = System::Drawing::Point(1000, 251);
			this->Decryp_Button->Name = L"Decryp_Button";
			this->Decryp_Button->Size = System::Drawing::Size(75, 23);
			this->Decryp_Button->TabIndex = 17;
			this->Decryp_Button->Text = L"Giải mã";
			this->Decryp_Button->UseVisualStyleBackColor = true;
			this->Decryp_Button->Click += gcnew System::EventHandler(this, &MyForm::Decryp_Button_Click);
			// 
			// ReadFileBanMa_Button
			// 
			this->ReadFileBanMa_Button->Location = System::Drawing::Point(1000, 205);
			this->ReadFileBanMa_Button->Name = L"ReadFileBanMa_Button";
			this->ReadFileBanMa_Button->Size = System::Drawing::Size(75, 23);
			this->ReadFileBanMa_Button->TabIndex = 16;
			this->ReadFileBanMa_Button->Text = L"Đọc file";
			this->ReadFileBanMa_Button->UseVisualStyleBackColor = true;
			this->ReadFileBanMa_Button->Click += gcnew System::EventHandler(this, &MyForm::ReadFileBanMa_Button_Click);
			// 
			// SendBanMa_Button
			// 
			this->SendBanMa_Button->Location = System::Drawing::Point(419, 444);
			this->SendBanMa_Button->Name = L"SendBanMa_Button";
			this->SendBanMa_Button->Size = System::Drawing::Size(75, 23);
			this->SendBanMa_Button->TabIndex = 19;
			this->SendBanMa_Button->Text = L"Gửi";
			this->SendBanMa_Button->UseVisualStyleBackColor = true;
			this->SendBanMa_Button->Click += gcnew System::EventHandler(this, &MyForm::SendBanMa_Button_Click);
			// 
			// SaveBanMa_Button
			// 
			this->SaveBanMa_Button->Location = System::Drawing::Point(419, 398);
			this->SaveBanMa_Button->Name = L"SaveBanMa_Button";
			this->SaveBanMa_Button->Size = System::Drawing::Size(75, 23);
			this->SaveBanMa_Button->TabIndex = 18;
			this->SaveBanMa_Button->Text = L"Lưu";
			this->SaveBanMa_Button->UseVisualStyleBackColor = true;
			this->SaveBanMa_Button->Click += gcnew System::EventHandler(this, &MyForm::SaveBanMa_Button_Click);
			// 
			// Loading_Label
			// 
			this->Loading_Label->AutoSize = true;
			this->Loading_Label->Location = System::Drawing::Point(507, 64);
			this->Loading_Label->Name = L"Loading_Label";
			this->Loading_Label->Size = System::Drawing::Size(0, 13);
			this->Loading_Label->TabIndex = 20;
			// 
			// SaveKpup_Button
			// 
			this->SaveKpup_Button->Location = System::Drawing::Point(103, 149);
			this->SaveKpup_Button->Name = L"SaveKpup_Button";
			this->SaveKpup_Button->Size = System::Drawing::Size(75, 23);
			this->SaveKpup_Button->TabIndex = 21;
			this->SaveKpup_Button->Text = L"Lưu khóa";
			this->SaveKpup_Button->UseVisualStyleBackColor = true;
			this->SaveKpup_Button->Click += gcnew System::EventHandler(this, &MyForm::SaveKpup_Button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1093, 561);
			this->Controls->Add(this->SaveKpup_Button);
			this->Controls->Add(this->Loading_Label);
			this->Controls->Add(this->SendBanMa_Button);
			this->Controls->Add(this->SaveBanMa_Button);
			this->Controls->Add(this->Decryp_Button);
			this->Controls->Add(this->ReadFileBanMa_Button);
			this->Controls->Add(this->Encryp_Button);
			this->Controls->Add(this->SaveKpr_Button);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BanRo2_TextBox);
			this->Controls->Add(this->BanMa2_TextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BanMa1_TextBox);
			this->Controls->Add(this->BanRo1_TextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Kpr_TextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CreateKey_Button);
			this->Controls->Add(this->Kpub_TextBox);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"RSA - Nguyễn Khánh Thọ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	/*
	const int MAX_ITER = 20; // số lần lặp thuật toán Miller-Rabin
	const int MAX_PRIME = 200; // số lượng số nguyên tố được tạo ra

	// Hàm kiểm tra số nguyên tố bằng thuật toán Miller-Rabin
	bool MillerRabin(long long n) {
		if (n < 2 || (n > 2 && n % 2 == 0)) return false;
		long long d = n - 1;
		int s = 0;
		while (d % 2 == 0) {
			d /= 2;
			s++;
		}
		for (int i = 0; i < MAX_ITER; i++) {
			long long a = rand() % (n - 2) + 2;
			long long x = 1;
			long long p = d;
			while (p) {
				if (p & 1) x = x * a % n;
				a = a * a % n;
				p >>= 1;
			}
			if (x == 1 || x == n - 1) continue;
			for (int j = 1; j < s; j++) {
				x = x * x % n;
				if (x == n - 1) break;
			}
			if (x != n - 1) return false;
		}
		return true;
	}
	ull GeneratePrime(int len) {
		ull p = rand() % (1ull << len) + (1ull << (len - 1));
		if (p % 2 == 0) p++;
		while (!MillerRabin(p)) {
			p += 2;
			if (p >= (1ull << len)) p = (1ull << len) - 1;
		}
		return p;
	}*/

	long long RandomNumber(int lower, int upper){
		long int number;
		srand(time(NULL));
		number = (rand() % (upper-lower+1)) + lower;
		return number;
	}
	bool IsPrime(long long xi)
	{
		bool kiemtra = true;
		if (xi == 2 || xi == 3)
		{
			// kiemtra = true;
			return kiemtra;
		}
		else
		{
			if (xi == 1 || xi % 2 == 0 || xi % 3 == 0)
			{
				kiemtra = false;
			}
			else
			{
				for (int i = 5; i <= sqrt(xi); i = i + 6)
					if (xi % i == 0 || xi % (i + 2) == 0)
					{
						kiemtra = false;
						break;
					}
			}
		}
		return kiemtra;
	}
	int GCD(long long a, long long b) {
		if (a == 0) return b;
		if (b == 0) return a;
		return GCD(b, a % b);
	}
	long long Modulo_NghichDao(long long a, long long n) {//a^-1 mod n
		if (GCD(a, n) != 1) {
			MessageBox::Show("GCD("+a+","+n+") != 1 , Không tồn tại nghịch đảo", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return -1;
		}
		std::vector<long long> r, q, S, t;
		int i = 0; r.push_back(n); r.push_back(a);q.push_back(0);

		while (r[r.size() - 1] != 0) {
			q.push_back(r[i] / r[i + 1]);
			r.push_back(r[i] % r[i + 1]);
			if (i == 0)
			{
				S.push_back(1);t.push_back(0);
			}
			else if (i == 1)
			{
				S.push_back(0);t.push_back(1);
			}
			else {
				S.push_back(S[i - 2] - q[i - 1] * S[i - 1]);
				t.push_back(t[i - 2] - q[i - 1] * t[i - 1]);
			}
			i++;
		}
		S.push_back(S[i - 2] - q[i - 1] * S[i - 1]);
		t.push_back(t[i - 2] - q[i - 1] * t[i - 1]);
		return Mod(t[t.size() - 1] , n);
	}
	std::vector<int> to_Binary(long long b) {
		std::vector<int> result;
		while (b != 0) {
			result.insert(result.begin(), b % 2);
			b /= 2;
		}
		return result;
	}
	long long ModPow(long long a, long long b, long long n) {//Phương pháp bình phương và nhân tính
		std::vector<int> bi = to_Binary(b);
		long long p = 1;
		for (int i = 0;i < bi.size();i++) {
			p = (p * p) % n;
			if (bi[i] == 1) p = (p * a)% n;
		}
		return p;
		
	}
	long long Mod(long long a, long long n) {
		while (a < 0) a += n;
		return a % n;
	}
	std::vector<long long> RSA_Encrypt(std::wstring BanRo, long long e, long long n)
	{
		std::vector<long long> BanMa;
		for (int i = 0; i < BanRo.length(); i++) {
			long long m = BanRo[i];
			long long c = ModPow(m, e, n);
			BanMa.push_back(c);
		}
		return BanMa;
	}
	std::wstring RSA_Decrypt(std::vector<long long> BanMa, long long d, long long n)
	{
		std::wstring BanRo;
		for (int i = 0; i < BanMa.size(); i++) {
			long long c = BanMa[i];
			long long m = ModPow(c, d, n);
			BanRo += (wchar_t)m;
		}
		return BanRo;
	}

	private: System::Void CreateKey_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		//Tao 100 so nguyen to dau tien:
		int N = 100;
		int pr[101];
		int i = 2, j = 0;
		while (j < 100) {
			if (IsPrime(i)){
				pr[j] = i; 
				j++;
			}
			i++;
		}
		long long p = pr[RandomNumber(51, 76)];
		long long q = pr[RandomNumber(76, 101)];
		long long n = p * q;
		long long Phi_n = (p - 1) * (q - 1);
		long long b;
		do {
			b = RandomNumber(1,Phi_n);
		} while (GCD(b, Phi_n)!=1); 

		long long a = Modulo_NghichDao(b, Phi_n);

		Kpub_TextBox->Text = b.ToString() + "," + n.ToString();
		Kpr_TextBox->Text  = a.ToString() + "," + p.ToString() + "," + q.ToString();
	}
	private: System::Void SaveKpup_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Kpub_TextBox->Text -> Length == 0) {
			MessageBox::Show(L"Chưa tạo khóa Kpub", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
		
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

			// Thiết lập các thuộc tính cho hộp thoại lưu tệp tin
			saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
			saveFileDialog1->FilterIndex = 1;
			saveFileDialog1->RestoreDirectory = true;

			// Mở hộp thoại lưu tệp tin và kiểm tra kết quả trả về
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Lấy đường dẫn tệp tin được chọn bởi người dùng
				String^ filePath = saveFileDialog1->FileName;

				// Chuyển đổi đường dẫn tệp tin từ kiểu String^ sang std::string
				std::string strFilePath = msclr::interop::marshal_as<std::string>(filePath);

				// Mở tệp tin để ghi nội dung vào
				std::ofstream outFile(strFilePath);

				// Kiểm tra tệp tin mở thành công hay không
				if (outFile.is_open()) {
					// Lấy giá trị trong TextBox
					String^ content =	Kpub_TextBox->Text;

					// Chuyển đổi giá trị từ kiểu String^ sang std::string
					std::string strContent = msclr::interop::marshal_as<std::string>(content);

					// Viết nội dung từ TextBox vào tệp tin
					outFile << strContent << std::endl;

					// Đóng tệp tin
					outFile.close();

					// Hiển thị thông báo lưu tệp tin thành công
					MessageBox::Show(L"Tệp tin đã được lưu thành công!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					// Hiển thị thông báo lỗi nếu không thể mở tệp tin
					MessageBox::Show(L"Không thể mở tệp tin để ghi!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//Đọc file txt lay van ban button
		// Tạo đối tượng OpenFileDialog
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->InitialDirectory = "C:\\";
		openFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog->FilterIndex = 1;
		openFileDialog->RestoreDirectory = true;

		// Hiển thị cửa sổ chọn tệp tin
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Lấy đường dẫn tệp tin được chọn
			System::String^ filePath = openFileDialog->FileName;

			// Mở tệp tin để đọc
			std::ifstream inFile(msclr::interop::marshal_as<std::string>(filePath));

			// Khai báo biến để lưu nội dung đọc được từ tệp tin
			std::string fileContent;

			// Đọc nội dung từ tệp tin và ghi vào biến fileContent
			if (inFile.is_open()) {
				std::stringstream buffer;
				buffer << inFile.rdbuf();
				fileContent = buffer.str();
			}

			// Đóng tệp tin
			inFile.close();
			std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
			std::wstring Content = converter.from_bytes(fileContent);
			// Chuyển đổi giá trị từ std::string sang kiểu System::String^
			String^ strContent = gcnew String(Content.c_str());

			// Gán giá trị vừa đọc được từ tệp tin vào TextBox
			BanRo1_TextBox->Text = strContent;
		}
	}
	private: System::Void SaveKpr_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Kpr_TextBox->Text->Length == 0) {
			MessageBox::Show(L"Chưa tạo khóa Kr", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

			// Thiết lập các thuộc tính cho hộp thoại lưu tệp tin     
			saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
			saveFileDialog1->FilterIndex = 1;
			saveFileDialog1->RestoreDirectory = true;

			// Mở hộp thoại lưu tệp tin và kiểm tra kết quả trả về
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Lấy đường dẫn tệp tin được chọn bởi người dùng
				String^ filePath = saveFileDialog1->FileName;

				// Chuyển đổi đường dẫn tệp tin từ kiểu String^ sang std::string
				std::string strFilePath = msclr::interop::marshal_as<std::string>(filePath);

				// Mở tệp tin để ghi nội dung vào
				std::ofstream outFile(strFilePath);

				// Kiểm tra tệp tin mở thành công hay không
				if (outFile.is_open()) {
					// Lấy giá trị trong TextBox
					String^ content = Kpr_TextBox->Text;

					// Chuyển đổi giá trị từ kiểu String^ sang std::string
					std::string strContent = msclr::interop::marshal_as<std::string>(content);

					// Viết nội dung từ TextBox vào tệp tin
					outFile << strContent << std::endl;

					// Đóng tệp tin
					outFile.close();

					// Hiển thị thông báo lưu tệp tin thành công
					MessageBox::Show("Tệp tin đã được lưu thành công!", "Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					// Hiển thị thông báo lỗi nếu không thể mở tệp tin
					MessageBox::Show("Không thể mở tệp tin để ghi!", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
	private: System::Void ReadFileBanMa_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->InitialDirectory = "C:\\";
		openFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog->FilterIndex = 1;
		openFileDialog->RestoreDirectory = true;

		// Hiển thị cửa sổ chọn tệp tin
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Lấy đường dẫn tệp tin được chọn
			System::String^ filePath = openFileDialog->FileName;

			// Mở tệp tin để đọc
			std::ifstream inFile(msclr::interop::marshal_as<std::string>(filePath));

			// Khai báo biến để lưu nội dung đọc được từ tệp tin
			std::string fileContent;

			// Đọc nội dung từ tệp tin và ghi vào biến fileContent
			if (inFile.is_open()) {
				std::stringstream buffer;
				buffer << inFile.rdbuf();
				fileContent = buffer.str();
			}

			// Đóng tệp tin
			inFile.close();

			// Chuyển đổi giá trị từ std::string sang kiểu System::String^
			String^ strContent = gcnew String(fileContent.c_str());

			// Gán giá trị vừa đọc được từ tệp tin vào TextBox
			BanMa2_TextBox->Text = strContent;
		}
	}
	private: System::Void SaveBanMa_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (BanMa1_TextBox->Text->Length == 0) {
			MessageBox::Show(L"Chưa giải mã",L"Thong bao", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

			// Thiết lập các thuộc tính cho hộp thoại lưu tệp tin     
			saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
			saveFileDialog1->FilterIndex = 1;
			saveFileDialog1->RestoreDirectory = true;

			// Mở hộp thoại lưu tệp tin và kiểm tra kết quả trả về
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Lấy đường dẫn tệp tin được chọn bởi người dùng
				String^ filePath = saveFileDialog1->FileName;

				// Chuyển đổi đường dẫn tệp tin từ kiểu String^ sang std::string
				std::string strFilePath = msclr::interop::marshal_as<std::string>(filePath);

				// Mở tệp tin để ghi nội dung vào
				std::ofstream outFile(strFilePath);

				// Kiểm tra tệp tin mở thành công hay không
				if (outFile.is_open()) {
					// Lấy giá trị trong TextBox
					String^ content = BanMa1_TextBox->Text;

					// Chuyển đổi giá trị từ kiểu String^ sang std::string
					std::string strContent = msclr::interop::marshal_as<std::string>(content);

					// Viết nội dung từ TextBox vào tệp tin
					outFile << strContent;

					// Đóng tệp tin
					outFile.close();

					// Hiển thị thông báo lưu tệp tin thành công
					MessageBox::Show(L"Tệp tin đã được lưu thành công!",L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					// Hiển thị thông báo lỗi nếu không thể mở tệp tin
					MessageBox::Show(L"Không thể mở tệp tin để ghi!",L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
	private: System::Void SendBanMa_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (BanMa1_TextBox->Text->Length == 0) {
			MessageBox::Show(L"Chưa giải mã", L"Thong bao", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			BanMa2_TextBox->Text = BanMa1_TextBox->Text;
		}
	}
	private: System::Void Encryp_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (BanRo1_TextBox->Text->Length == 0) {
			MessageBox::Show(L"Vui lòng nhập văn bản",L"Thong bao", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Kpub_TextBox->Text->Length == 0 || Kpr_TextBox->Text->Length == 0) {
			MessageBox::Show(L"Vui lòng tạo khóa",L"Thong bao", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			//chuyển từ String^ sang string
			// Chuyển đổi chuỗi String sang chuỗi std::wstring
			std::wstring BanRo = msclr::interop::marshal_as<std::wstring>(BanRo1_TextBox->Text);
			//std::string BanRo = msclr::interop::marshal_as<std::string>(BanRo1_TextBox->Text);
			std::string Kpub = msclr::interop::marshal_as<std::string>(Kpub_TextBox->Text);
			size_t pos = Kpub.find(',');
			std::string e_Kpub = Kpub.substr(0, pos); // first word
			std::string n_Kpub = Kpub.substr(pos + 1); // second word
			long long e = stoi(e_Kpub);
			long long n = stoi(n_Kpub);
			std::vector<long long> BanMa = RSA_Encrypt(BanRo, e, n);
			BanMa1_TextBox->Text = "";
			for (int i = 0; i < BanMa.size(); i++) {
				BanMa1_TextBox->Text += BanMa[i] + "_";
			}
		}
	}
	private: System::Void Decryp_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (BanRo1_TextBox->Text->Length == 0) {
			MessageBox::Show(L"Vui lòng nhập bản mã",L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Kpub_TextBox->Text->Length == 0 || Kpr_TextBox->Text->Length == 0) {
			MessageBox::Show(L"Vui lòng tạo khóa", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			//chuyển từ String^ sang string
			std::string BanMa = msclr::interop::marshal_as<std::string>(BanMa2_TextBox->Text);
			std::vector<long long> banma;

			std::stringstream ss1(BanMa);
			std::string token;

			while (getline(ss1, token, '_')) {
				int number = std::stoi(token);
				banma.push_back(number);
			}

			std::string Kpr = msclr::interop::marshal_as<std::string>(Kpr_TextBox->Text);
			std::stringstream ss2(Kpr);
			std::vector<long long> values;
			std::string token2;
			while (std::getline(ss2, token2, ',')) {
				long long value = std::stoi(token2);
				values.push_back(value);
			}
			long long d = 0 , p = 0, q=  0;
			d = values.at(0);
			p = values.at(1);
			q = values.at(2);
			std::wstring BanRo = RSA_Decrypt(banma, d, p*q);
			System::String^ banro = msclr::interop::marshal_as<System::String^>(BanRo);
			BanRo2_TextBox->Text = banro;
		}
	}
};
}
