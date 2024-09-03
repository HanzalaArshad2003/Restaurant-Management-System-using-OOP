#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "user.h"
#include "dbop.h"
#include "Menu.h"
#include "Mapper.h"
#include "order.h"
#include "Bill.h"
#include "table.h"
#include "Discounted_Bill.h"
#include "employee.h"
namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
   
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::TabPage^ tabPage5;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::DataGridView^ dataGridView3;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::TextBox^ textBox17;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::DataGridView^ dataGridView4;
    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::TextBox^ textBox18;
    private: System::Windows::Forms::TextBox^ textBox19;
    private: System::Windows::Forms::TabPage^ tabPage7;
    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Button^ button28;
    private: System::Windows::Forms::TextBox^ textBox20;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button30;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::DataGridView^ dataGridView5;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::TextBox^ textBox21;
    private: System::Windows::Forms::TextBox^ textBox22;
    private: System::Windows::Forms::TextBox^ textBox23;
    private: System::Windows::Forms::TextBox^ textBox24;
    private: System::Windows::Forms::Label^ label19;

    public:

    public:
        user^ u1;
        Form1(void)
        {
            u1 = gcnew user();
            InitializeComponent();
            //dataGridView1->Columns->Add("c1", "name");
            //dataGridView1->Columns->Add("c2", "price");
            //dataGridView1->Columns->Add("c3", "category");
            //TODO: Add the constructor code here
            //

            // uncomment to execute the rk1-utils:
            //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TabPage^ tabPage4;
    protected:
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TabControl^ tabControl1;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tabPage2->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->tabPage5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->tabPage6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->tabPage7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
            this->SuspendLayout();
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->button14);
            this->tabPage4->Controls->Add(this->textBox4);
            this->tabPage4->Controls->Add(this->button2);
            this->tabPage4->Controls->Add(this->button6);
            this->tabPage4->Controls->Add(this->label6);
            this->tabPage4->Controls->Add(this->label5);
            this->tabPage4->Controls->Add(this->label4);
            this->tabPage4->Controls->Add(this->label3);
            this->tabPage4->Controls->Add(this->button5);
            this->tabPage4->Controls->Add(this->dataGridView1);
            this->tabPage4->Controls->Add(this->button4);
            this->tabPage4->Controls->Add(this->textBox10);
            this->tabPage4->Controls->Add(this->textBox9);
            this->tabPage4->Controls->Add(this->textBox8);
            this->tabPage4->Location = System::Drawing::Point(4, 25);
            this->tabPage4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage4->Size = System::Drawing::Size(837, 312);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"tabPage4";
            this->tabPage4->UseVisualStyleBackColor = true;
            this->tabPage4->Click += gcnew System::EventHandler(this, &Form1::tabPage4_Click);
            // 
            // button14
            // 
            this->button14->Location = System::Drawing::Point(25, 262);
            this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(72, 37);
            this->button14->TabIndex = 14;
            this->button14->Text = L"BACK";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(111, 16);
            this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(112, 29);
            this->textBox4->TabIndex = 13;
            this->textBox4->Text = L"ADD MENU";
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(255, 275);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(109, 24);
            this->button2->TabIndex = 12;
            this->button2->Text = L"SEARCH";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(178, 231);
            this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(109, 24);
            this->button6->TabIndex = 11;
            this->button6->Text = L"DELETE";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(29, 69);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(46, 16);
            this->label6->TabIndex = 10;
            this->label6->Text = L"NAME";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(242, 69);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(82, 16);
            this->label5->TabIndex = 9;
            this->label5->Text = L"CATEGORY";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label4->Location = System::Drawing::Point(146, 69);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(47, 16);
            this->label4->TabIndex = 8;
            this->label4->Text = L"PRICE";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(29, 16);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 16);
            this->label3->TabIndex = 7;
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(88, 183);
            this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(109, 24);
            this->button5->TabIndex = 6;
            this->button5->Text = L"UPDATE";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(370, 3);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(466, 319);
            this->dataGridView1->TabIndex = 5;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(8, 140);
            this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(109, 24);
            this->button4->TabIndex = 4;
            this->button4->Text = L"ADD ITEM";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // textBox10
            // 
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->textBox10->Location = System::Drawing::Point(241, 97);
            this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(89, 23);
            this->textBox10->TabIndex = 3;
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(125, 97);
            this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(89, 22);
            this->textBox9->TabIndex = 2;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(8, 97);
            this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(89, 22);
            this->textBox8->TabIndex = 1;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->button27);
            this->tabPage2->Controls->Add(this->button21);
            this->tabPage2->Controls->Add(this->button13);
            this->tabPage2->Controls->Add(this->textBox5);
            this->tabPage2->Controls->Add(this->button10);
            this->tabPage2->Controls->Add(this->button9);
            this->tabPage2->Controls->Add(this->button8);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage2->Size = System::Drawing::Size(837, 312);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"tabPage2";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // button27
            // 
            this->button27->Location = System::Drawing::Point(342, 239);
            this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(101, 26);
            this->button27->TabIndex = 10;
            this->button27->Text = L"Salary";
            this->button27->UseVisualStyleBackColor = true;
            this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
            // 
            // button21
            // 
            this->button21->Location = System::Drawing::Point(342, 198);
            this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(101, 26);
            this->button21->TabIndex = 9;
            this->button21->Text = L"Billing";
            this->button21->UseVisualStyleBackColor = true;
            this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
            // 
            // button13
            // 
            this->button13->Location = System::Drawing::Point(703, 254);
            this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(72, 37);
            this->button13->TabIndex = 8;
            this->button13->Text = L"BACK";
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(332, 24);
            this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(124, 33);
            this->textBox5->TabIndex = 7;
            this->textBox5->Text = L"CATEGORY";
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button10
            // 
            this->button10->Location = System::Drawing::Point(343, 159);
            this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(100, 24);
            this->button10->TabIndex = 6;
            this->button10->Text = L"Table";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
            // 
            // button9
            // 
            this->button9->Location = System::Drawing::Point(343, 118);
            this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(100, 25);
            this->button9->TabIndex = 5;
            this->button9->Text = L"Order";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
            // 
            // button8
            // 
            this->button8->Location = System::Drawing::Point(343, 74);
            this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(100, 30);
            this->button8->TabIndex = 4;
            this->button8->Text = L"Menu";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->button1);
            this->tabPage1->Controls->Add(this->textBox3);
            this->tabPage1->Controls->Add(this->textBox2);
            this->tabPage1->Controls->Add(this->textBox1);
            this->tabPage1->Controls->Add(this->label2);
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage1->Size = System::Drawing::Size(837, 312);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"tabPage1";
            this->tabPage1->UseVisualStyleBackColor = true;
            this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(337, 233);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(105, 40);
            this->button1->TabIndex = 16;
            this->button1->Text = L"Login";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(316, 196);
            this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(158, 22);
            this->textBox3->TabIndex = 15;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(316, 119);
            this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(158, 22);
            this->textBox2->TabIndex = 14;
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(268, 26);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(256, 28);
            this->textBox1->TabIndex = 0;
            this->textBox1->Text = L"Welcome to Cafe Muse!";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(347, 159);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(76, 19);
            this->label2->TabIndex = 13;
            this->label2->Text = L"Password";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(347, 92);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(80, 19);
            this->label1->TabIndex = 12;
            this->label1->Text = L"Username";
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage5);
            this->tabControl1->Controls->Add(this->tabPage6);
            this->tabControl1->Controls->Add(this->tabPage7);
            this->tabControl1->Location = System::Drawing::Point(-1, 6);
            this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(845, 341);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->button15);
            this->tabPage3->Controls->Add(this->textBox6);
            this->tabPage3->Controls->Add(this->button3);
            this->tabPage3->Controls->Add(this->button7);
            this->tabPage3->Controls->Add(this->label7);
            this->tabPage3->Controls->Add(this->label8);
            this->tabPage3->Controls->Add(this->label9);
            this->tabPage3->Controls->Add(this->button11);
            this->tabPage3->Controls->Add(this->dataGridView2);
            this->tabPage3->Controls->Add(this->button12);
            this->tabPage3->Controls->Add(this->textBox7);
            this->tabPage3->Controls->Add(this->textBox11);
            this->tabPage3->Controls->Add(this->textBox12);
            this->tabPage3->Location = System::Drawing::Point(4, 25);
            this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage3->Size = System::Drawing::Size(837, 312);
            this->tabPage3->TabIndex = 4;
            this->tabPage3->Text = L"tabPage3";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // button15
            // 
            this->button15->Location = System::Drawing::Point(25, 258);
            this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(72, 37);
            this->button15->TabIndex = 26;
            this->button15->Text = L"BACK";
            this->button15->UseVisualStyleBackColor = true;
            this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(77, 17);
            this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(176, 29);
            this->textBox6->TabIndex = 25;
            this->textBox6->Text = L"CUSTOMER ORDER";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(252, 271);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(109, 24);
            this->button3->TabIndex = 24;
            this->button3->Text = L"SEARCH";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(175, 227);
            this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(109, 24);
            this->button7->TabIndex = 23;
            this->button7->Text = L"DELETE";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(8, 65);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(84, 16);
            this->label7->TabIndex = 22;
            this->label7->Text = L"CUSTOMER";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(248, 65);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(76, 16);
            this->label8->TabIndex = 21;
            this->label8->Text = L"QUANTITY";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label9->Location = System::Drawing::Point(143, 65);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(39, 16);
            this->label9->TabIndex = 20;
            this->label9->Text = L"ITEM";
            // 
            // button11
            // 
            this->button11->Location = System::Drawing::Point(85, 179);
            this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(109, 24);
            this->button11->TabIndex = 19;
            this->button11->Text = L"UPDATE";
            this->button11->UseVisualStyleBackColor = true;
            this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(367, -1);
            this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 62;
            this->dataGridView2->RowTemplate->Height = 28;
            this->dataGridView2->Size = System::Drawing::Size(471, 319);
            this->dataGridView2->TabIndex = 18;
            // 
            // button12
            // 
            this->button12->Location = System::Drawing::Point(5, 136);
            this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(109, 24);
            this->button12->TabIndex = 17;
            this->button12->Text = L"ADD ITEM";
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
            // 
            // textBox7
            // 
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->textBox7->Location = System::Drawing::Point(8, 93);
            this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(89, 23);
            this->textBox7->TabIndex = 16;
            // 
            // textBox11
            // 
            this->textBox11->Location = System::Drawing::Point(123, 93);
            this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(89, 22);
            this->textBox11->TabIndex = 15;
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(238, 93);
            this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(89, 22);
            this->textBox12->TabIndex = 14;
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->button16);
            this->tabPage5->Controls->Add(this->textBox13);
            this->tabPage5->Controls->Add(this->button17);
            this->tabPage5->Controls->Add(this->button18);
            this->tabPage5->Controls->Add(this->label10);
            this->tabPage5->Controls->Add(this->label11);
            this->tabPage5->Controls->Add(this->label12);
            this->tabPage5->Controls->Add(this->button19);
            this->tabPage5->Controls->Add(this->dataGridView3);
            this->tabPage5->Controls->Add(this->button20);
            this->tabPage5->Controls->Add(this->textBox14);
            this->tabPage5->Controls->Add(this->textBox15);
            this->tabPage5->Controls->Add(this->textBox16);
            this->tabPage5->Location = System::Drawing::Point(4, 25);
            this->tabPage5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage5->Size = System::Drawing::Size(837, 312);
            this->tabPage5->TabIndex = 5;
            this->tabPage5->Text = L"tabPage5";
            this->tabPage5->UseVisualStyleBackColor = true;
            this->tabPage5->Click += gcnew System::EventHandler(this, &Form1::tabPage5_Click);
            // 
            // button16
            // 
            this->button16->Location = System::Drawing::Point(22, 257);
            this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(72, 37);
            this->button16->TabIndex = 39;
            this->button16->Text = L"BACK";
            this->button16->UseVisualStyleBackColor = true;
            this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
            // 
            // textBox13
            // 
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox13->Location = System::Drawing::Point(67, 15);
            this->textBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(216, 29);
            this->textBox13->TabIndex = 38;
            this->textBox13->Text = L"TABLE MANAGEMENT";
            this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button17
            // 
            this->button17->Location = System::Drawing::Point(250, 270);
            this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(109, 24);
            this->button17->TabIndex = 37;
            this->button17->Text = L"SEARCH";
            this->button17->UseVisualStyleBackColor = true;
            this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
            // 
            // button18
            // 
            this->button18->Location = System::Drawing::Point(172, 226);
            this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(109, 24);
            this->button18->TabIndex = 36;
            this->button18->Text = L"DELETE";
            this->button18->UseVisualStyleBackColor = true;
            this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(5, 63);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(84, 16);
            this->label10->TabIndex = 35;
            this->label10->Text = L"CUSTOMER";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(246, 63);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(52, 16);
            this->label11->TabIndex = 34;
            this->label11->Text = L"SEATS";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label12->Location = System::Drawing::Point(116, 63);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(73, 16);
            this->label12->TabIndex = 33;
            this->label12->Text = L"TABLE NO";
            // 
            // button19
            // 
            this->button19->Location = System::Drawing::Point(83, 178);
            this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(109, 24);
            this->button19->TabIndex = 32;
            this->button19->Text = L"UPDATE";
            this->button19->UseVisualStyleBackColor = true;
            this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
            // 
            // dataGridView3
            // 
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Location = System::Drawing::Point(364, -2);
            this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->RowHeadersWidth = 62;
            this->dataGridView3->RowTemplate->Height = 28;
            this->dataGridView3->Size = System::Drawing::Size(471, 319);
            this->dataGridView3->TabIndex = 31;
            // 
            // button20
            // 
            this->button20->Location = System::Drawing::Point(3, 134);
            this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(109, 24);
            this->button20->TabIndex = 30;
            this->button20->Text = L"ADD ITEM";
            this->button20->UseVisualStyleBackColor = true;
            this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
            // 
            // textBox14
            // 
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->textBox14->Location = System::Drawing::Point(5, 91);
            this->textBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(89, 23);
            this->textBox14->TabIndex = 29;
            // 
            // textBox15
            // 
            this->textBox15->Location = System::Drawing::Point(120, 91);
            this->textBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(89, 22);
            this->textBox15->TabIndex = 28;
            // 
            // textBox16
            // 
            this->textBox16->Location = System::Drawing::Point(236, 91);
            this->textBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(89, 22);
            this->textBox16->TabIndex = 27;
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->button22);
            this->tabPage6->Controls->Add(this->textBox17);
            this->tabPage6->Controls->Add(this->button23);
            this->tabPage6->Controls->Add(this->button24);
            this->tabPage6->Controls->Add(this->label13);
            this->tabPage6->Controls->Add(this->label14);
            this->tabPage6->Controls->Add(this->label15);
            this->tabPage6->Controls->Add(this->button25);
            this->tabPage6->Controls->Add(this->dataGridView4);
            this->tabPage6->Controls->Add(this->button26);
            this->tabPage6->Controls->Add(this->textBox18);
            this->tabPage6->Controls->Add(this->textBox19);
            this->tabPage6->Location = System::Drawing::Point(4, 25);
            this->tabPage6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tabPage6->Size = System::Drawing::Size(837, 312);
            this->tabPage6->TabIndex = 6;
            this->tabPage6->Text = L"tabPage6";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // button22
            // 
            this->button22->Location = System::Drawing::Point(22, 257);
            this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(72, 37);
            this->button22->TabIndex = 52;
            this->button22->Text = L"BACK";
            this->button22->UseVisualStyleBackColor = true;
            this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
            // 
            // textBox17
            // 
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox17->Location = System::Drawing::Point(109, 16);
            this->textBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(108, 29);
            this->textBox17->TabIndex = 51;
            this->textBox17->Text = L"BILLING";
            this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button23
            // 
            this->button23->Location = System::Drawing::Point(250, 270);
            this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(109, 24);
            this->button23->TabIndex = 50;
            this->button23->Text = L"SEARCH";
            this->button23->UseVisualStyleBackColor = true;
            this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
            // 
            // button24
            // 
            this->button24->Location = System::Drawing::Point(172, 226);
            this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(109, 24);
            this->button24->TabIndex = 49;
            this->button24->Text = L"DELETE";
            this->button24->UseVisualStyleBackColor = true;
            this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(-1, 63);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(110, 16);
            this->label13->TabIndex = 48;
            this->label13->Text = L"ORDERED ITEM";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(246, 63);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(0, 16);
            this->label14->TabIndex = 47;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label15->Location = System::Drawing::Point(129, 63);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(47, 16);
            this->label15->TabIndex = 46;
            this->label15->Text = L"PRICE";
            // 
            // button25
            // 
            this->button25->Location = System::Drawing::Point(83, 178);
            this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(109, 24);
            this->button25->TabIndex = 45;
            this->button25->Text = L"UPDATE";
            this->button25->UseVisualStyleBackColor = true;
            this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
            // 
            // dataGridView4
            // 
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Location = System::Drawing::Point(364, -2);
            this->dataGridView4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->RowHeadersWidth = 62;
            this->dataGridView4->RowTemplate->Height = 28;
            this->dataGridView4->Size = System::Drawing::Size(471, 319);
            this->dataGridView4->TabIndex = 44;
            this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView4_CellContentClick);
            // 
            // button26
            // 
            this->button26->Location = System::Drawing::Point(3, 134);
            this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(109, 24);
            this->button26->TabIndex = 43;
            this->button26->Text = L"ADD ITEM";
            this->button26->UseVisualStyleBackColor = true;
            this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
            // 
            // textBox18
            // 
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->textBox18->Location = System::Drawing::Point(5, 91);
            this->textBox18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(89, 23);
            this->textBox18->TabIndex = 42;
            // 
            // textBox19
            // 
            this->textBox19->Location = System::Drawing::Point(120, 91);
            this->textBox19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(89, 22);
            this->textBox19->TabIndex = 41;
            // 
            // tabPage7
            // 
            this->tabPage7->Controls->Add(this->textBox24);
            this->tabPage7->Controls->Add(this->label19);
            this->tabPage7->Controls->Add(this->button28);
            this->tabPage7->Controls->Add(this->textBox20);
            this->tabPage7->Controls->Add(this->button29);
            this->tabPage7->Controls->Add(this->button30);
            this->tabPage7->Controls->Add(this->label16);
            this->tabPage7->Controls->Add(this->label17);
            this->tabPage7->Controls->Add(this->label18);
            this->tabPage7->Controls->Add(this->button31);
            this->tabPage7->Controls->Add(this->dataGridView5);
            this->tabPage7->Controls->Add(this->button32);
            this->tabPage7->Controls->Add(this->textBox21);
            this->tabPage7->Controls->Add(this->textBox22);
            this->tabPage7->Controls->Add(this->textBox23);
            this->tabPage7->Location = System::Drawing::Point(4, 25);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Padding = System::Windows::Forms::Padding(3);
            this->tabPage7->Size = System::Drawing::Size(837, 312);
            this->tabPage7->TabIndex = 7;
            this->tabPage7->Text = L"tabPage7";
            this->tabPage7->UseVisualStyleBackColor = true;
            // 
            // textBox24
            // 
            this->textBox24->Location = System::Drawing::Point(193, 153);
            this->textBox24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(89, 22);
            this->textBox24->TabIndex = 54;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(211, 135);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(55, 16);
            this->label19->TabIndex = 53;
            this->label19->Text = L"BONUS";
            // 
            // button28
            // 
            this->button28->Location = System::Drawing::Point(21, 256);
            this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(72, 37);
            this->button28->TabIndex = 52;
            this->button28->Text = L"BACK";
            this->button28->UseVisualStyleBackColor = true;
            this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
            // 
            // textBox20
            // 
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox20->Location = System::Drawing::Point(66, 14);
            this->textBox20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(216, 29);
            this->textBox20->TabIndex = 51;
            this->textBox20->Text = L"SALARY CALCULATOR";
            this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button29
            // 
            this->button29->Location = System::Drawing::Point(249, 269);
            this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(109, 24);
            this->button29->TabIndex = 50;
            this->button29->Text = L"SEARCH";
            this->button29->UseVisualStyleBackColor = true;
            this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
            // 
            // button30
            // 
            this->button30->Location = System::Drawing::Point(173, 241);
            this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(109, 24);
            this->button30->TabIndex = 49;
            this->button30->Text = L"DELETE";
            this->button30->UseVisualStyleBackColor = true;
            this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(9, 62);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(80, 16);
            this->label16->TabIndex = 48;
            this->label16->Text = L"EMPLOYEE";
            this->label16->Click += gcnew System::EventHandler(this, &Form1::label16_Click);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(245, 62);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(60, 16);
            this->label17->TabIndex = 47;
            this->label17->Text = L"SALARY";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label18->Location = System::Drawing::Point(124, 62);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(67, 16);
            this->label18->TabIndex = 46;
            this->label18->Text = L"POSTION";
            // 
            // button31
            // 
            this->button31->Location = System::Drawing::Point(82, 213);
            this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(109, 24);
            this->button31->TabIndex = 45;
            this->button31->Text = L"UPDATE";
            this->button31->UseVisualStyleBackColor = true;
            this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
            // 
            // dataGridView5
            // 
            this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView5->Location = System::Drawing::Point(363, -3);
            this->dataGridView5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView5->Name = L"dataGridView5";
            this->dataGridView5->RowHeadersWidth = 62;
            this->dataGridView5->RowTemplate->Height = 28;
            this->dataGridView5->Size = System::Drawing::Size(471, 319);
            this->dataGridView5->TabIndex = 44;
            // 
            // button32
            // 
            this->button32->Location = System::Drawing::Point(3, 185);
            this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(109, 24);
            this->button32->TabIndex = 43;
            this->button32->Text = L"ADD ITEM";
            this->button32->UseVisualStyleBackColor = true;
            this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
            // 
            // textBox21
            // 
            this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->textBox21->Location = System::Drawing::Point(4, 90);
            this->textBox21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(89, 23);
            this->textBox21->TabIndex = 42;
            // 
            // textBox22
            // 
            this->textBox22->Location = System::Drawing::Point(119, 90);
            this->textBox22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(89, 22);
            this->textBox22->TabIndex = 41;
            // 
            // textBox23
            // 
            this->textBox23->Location = System::Drawing::Point(235, 90);
            this->textBox23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(89, 22);
            this->textBox23->TabIndex = 40;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(844, 345);
            this->Controls->Add(this->tabControl1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabControl1->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->tabPage6->ResumeLayout(false);
            this->tabPage6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->tabPage7->ResumeLayout(false);
            this->tabPage7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

        // You can call the functions at a button click. If you prefer, 
         // you can call them by clicking a menu item.







    private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
        DatabaseOperations crud;

        menu ob1;
        ob1.name = textBox8->Text;
        ob1.price = textBox9->Text;
        ob1.category = textBox10->Text;
        crud.insert(r + "Menu.txt", ob1.name + "," + ob1.price + "," + ob1.category);

        dataGridView1->Columns->Clear();
        dataGridView1->Rows->Clear();

        cli::array<menu^>^ m; 
        m= Mapper::map_menu(crud.read(r + "Menu.txt"));

        dataGridView1->Columns->Add("c1", "name");
        dataGridView1->Columns->Add("c2", "price");
        dataGridView1->Columns->Add("c3", "category");

        for (int i = 0; i < m->Length; i++) {
            dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
        }

    }



    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
        tabControl1->SelectedIndex = 2;
    }

    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        String^ x = System::Convert::ToString(textBox2->Text);
        String^ y = System::Convert::ToString(textBox3->Text);
        if (x == u1->getuser() && y == u1->getpass()) {
            MessageBox::Show("Login successful!");
            tabControl1->SelectedIndex = 1;
        }
        else {
            MessageBox::Show("Incorrect id/pass");
        }
    }

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    menu ob1;
    ob1.name = textBox8->Text;
    ob1.price = textBox9->Text;
    ob1.category = textBox10->Text;
    crud.update(r + "Menu.txt", ob1.name,0, ob1.name +","+ ob1.price + "," + ob1.category);

    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    cli::array<menu^>^ m = Mapper::map_menu(crud.read(r + "Menu.txt"));

    dataGridView1->Columns->Add("c1", "name");
    dataGridView1->Columns->Add("c2", "price");
    dataGridView1->Columns->Add("c3", "category");

    for (int i = 0; i < m->Length; i++) {
        dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
    }

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    menu ob1;
    ob1.name = textBox8->Text;
    ob1.price = textBox9->Text;
    ob1.category = textBox10->Text;
    crud.discard(r + "Menu.txt", ob1.name, 0);

    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    cli::array<menu^>^ m = Mapper::map_menu(crud.read(r + "Menu.txt"));

    dataGridView1->Columns->Add("c1", "name");
    dataGridView1->Columns->Add("c2", "price");
    dataGridView1->Columns->Add("c3", "category");

    for (int i = 0; i < m->Length; i++) {
        dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
    }
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    menu ob1;
    ob1.name = textBox8->Text;
    ob1.price = textBox9->Text;
    ob1.category = textBox10->Text;

    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    cli::array<menu^>^ m;
    if (ob1.name == "*") {
        m = Mapper::map_menu(crud.read(r + "Menu.txt"));
    }
    else {
        m = Mapper::map_menu(crud.search(r + "Menu.txt",ob1.name,0));
    }

    dataGridView1->Columns->Add("c1", "name");
    dataGridView1->Columns->Add("c2", "price");
    dataGridView1->Columns->Add("c3", "category");

    for (int i = 0; i < m->Length; i++) {
        dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
    }
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox7->Text;
    ob1.item = textBox11->Text;
    ob1.quantity = textBox12->Text;
    crud.insert(r + "Order.txt", ob1.customer + "," + ob1.item + "," + ob1.quantity);

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    o = Mapper::map_order(crud.read(r + "Order.txt"));

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 3;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 0;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox7->Text;
    ob1.item = textBox11->Text;
    ob1.quantity = textBox12->Text;
    crud.update(r + "Order.txt", ob1.customer,0,ob1.customer + "," + ob1.item + "," + ob1.quantity);

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    o = Mapper::map_order(crud.read(r + "Order.txt"));

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox7->Text;
    ob1.item = textBox11->Text;
    ob1.quantity = textBox12->Text;
    crud.discard(r + "Order.txt", ob1.customer, 0);

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    o = Mapper::map_order(crud.read(r + "Order.txt"));

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox7->Text;
    ob1.item = textBox11->Text;
    ob1.quantity = textBox12->Text;

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    if (ob1.customer == "*") {
        o = Mapper::map_order(crud.read(r + "Order.txt"));
    }
    else {
        o = Mapper::map_order(crud.search(r + "Order.txt", ob1.customer, 0));
    }

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 4;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox14->Text;
    ob1.table_no = textBox15->Text;
    ob1.seats = textBox16->Text;
    crud.insert(r + "Table.txt", ob1.customer + "," + ob1.table_no + "," + ob1.seats);

    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();

    cli::array<table^>^ t;
    t = Mapper::map_table(crud.read(r + "Table.txt"));

    dataGridView3->Columns->Add("c1", "Customer");
    dataGridView3->Columns->Add("c2", "Table No");
    dataGridView3->Columns->Add("c3", "Seats");

    for (int i = 0; i < t->Length; i++) {
        dataGridView3->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox14->Text;
    ob1.table_no = textBox15->Text;
    ob1.seats = textBox16->Text;
    crud.update(r + "Table.txt", ob1.customer,0,ob1.customer + "," + ob1.table_no + "," + ob1.seats);

    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();

    cli::array<table^>^ t;
    t = Mapper::map_table(crud.read(r + "Table.txt"));

    dataGridView3->Columns->Add("c1", "Customer");
    dataGridView3->Columns->Add("c2", "Table No");
    dataGridView3->Columns->Add("c3", "Seats");

    for (int i = 0; i < t->Length; i++) {
        dataGridView3->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox14->Text;
    ob1.table_no = textBox15->Text;
    ob1.seats = textBox16->Text;
    crud.discard(r + "Table.txt", ob1.customer,0);

    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();

    cli::array<table^>^ t;
    t = Mapper::map_table(crud.read(r + "Table.txt"));

    dataGridView3->Columns->Add("c1", "Customer");
    dataGridView3->Columns->Add("c2", "Table No");
    dataGridView3->Columns->Add("c3", "Seats");

    for (int i = 0; i < t->Length; i++) {
        dataGridView3->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox14->Text;
    ob1.table_no = textBox15->Text;
    ob1.seats = textBox16->Text;

    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();

    cli::array<table^>^ t;
    if (ob1.customer == "*") {
        t = Mapper::map_table(crud.read(r + "Table.txt"));
    }
    else {
        t = Mapper::map_table(crud.search(r + "Table.txt", ob1.customer, 0));
    }

    dataGridView3->Columns->Add("c1", "Customer");
    dataGridView3->Columns->Add("c2", "Table No");
    dataGridView3->Columns->Add("c3", "Seats");

    for (int i = 0; i < t->Length; i++) {
        dataGridView3->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }

}
private: System::Void tabPage5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 5;
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    Discounted_Bill ob1;
    ob1.ordered_item = textBox18->Text;
    ob1.price = textBox19->Text;
    String^ billtype = ob1.generatebill(textBox19->Text);
    crud.insert(r + "Bill.txt", ob1.ordered_item + "," + ob1.price + "," + billtype);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();


    cli::array<Discounted_Bill^>^ b;
    b = Mapper::map_bill(crud.read(r + "Bill.txt"));

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->ordered_item, b[i]->price, b[i]->billamount);
    }
}
private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    Discounted_Bill ob1;
    ob1.ordered_item = textBox18->Text;
    ob1.price = textBox19->Text;
    String^ billtype = ob1.generatebill(textBox19->Text);
    crud.update(r + "Bill.txt", ob1.ordered_item,0,ob1.ordered_item + "," + ob1.price + "," + billtype);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();

    cli::array<Discounted_Bill^>^ b;
    b = Mapper::map_bill(crud.read(r + "Bill.txt"));

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->ordered_item, b[i]->price, b[i]->billamount);
    }
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    Discounted_Bill ob1;
    ob1.ordered_item = textBox18->Text;
    ob1.price = textBox19->Text;
    String^ billtype = ob1.generatebill(textBox19->Text);
    crud.discard(r + "Bill.txt", ob1.ordered_item, 0);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();


    cli::array<Discounted_Bill^>^ b;
    b = Mapper::map_bill(crud.read(r + "Bill.txt"));

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->ordered_item, b[i]->price, b[i]->billamount);
    }
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    Discounted_Bill ob1;
    ob1.ordered_item = textBox18->Text;
    ob1.price = textBox19->Text;
    String^ billtype = ob1.generatebill(textBox19->Text);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();

    cli::array<Discounted_Bill^>^ b;
    if (ob1.ordered_item == "*") {
        b = Mapper::map_bill(crud.read(r + "Bill.txt"));
    }
    else {
        b= Mapper::map_bill(crud.search(r + "Bill.txt",ob1.ordered_item,0));
    }

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->ordered_item, b[i]->price, b[i]->billamount);
    }
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 6;
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.employ_name = textBox21->Text;
    ob1.postion = textBox22->Text;
    ob1.salary = textBox23->Text;
    ob1.bonus = textBox24->Text;
    String^ salarytype;
    if (ob1.bonus == "")
    {
        salarytype=ob1.setsalary(textBox23->Text);
    }
    else {
        salarytype = ob1.setsalary(textBox23->Text, textBox24->Text);
    }
    crud.insert(r + "Emp.txt", ob1.employ_name + "," + ob1.postion + "," + salarytype);

    dataGridView5->Columns->Clear();
    dataGridView5->Rows->Clear();


    cli::array<employee^>^ d;
    d = Mapper::map_emp(crud.read(r + "Emp.txt"));

    dataGridView5->Columns->Add("c1", "Employee");
    dataGridView5->Columns->Add("c2", "Position");
    dataGridView5->Columns->Add("c3", "Salary");

    for (int i = 0; i < d->Length; i++) {
        dataGridView5->Rows->Add(d[i]->employ_name, d[i]->postion, d[i]->salary);
    }
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.employ_name = textBox21->Text;
    ob1.postion = textBox22->Text;
    ob1.salary = textBox23->Text;
    ob1.bonus = textBox24->Text;
        
    String^ salarytype;
    if (ob1.bonus == "") {
       salarytype = ob1.setsalary(textBox23->Text);
    }
    else {
        salarytype = ob1.setsalary(textBox23->Text, textBox24->Text);
    }    
    crud.update(r + "Emp.txt", ob1.employ_name, 0, ob1.employ_name + "," + ob1.postion + "," + salarytype);

    dataGridView5->Columns->Clear();
    dataGridView5->Rows->Clear();


    cli::array<employee^>^ d;
    d = Mapper::map_emp(crud.read(r + "Emp.txt"));

    dataGridView5->Columns->Add("c1", "Employee");
    dataGridView5->Columns->Add("c2", "Position");
    dataGridView5->Columns->Add("c3", "Salary");

    for (int i = 0; i < d->Length; i++) {
        dataGridView5->Rows->Add(d[i]->employ_name, d[i]->postion, d[i]->salary);
    }

    
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.employ_name = textBox21->Text;
    ob1.postion = textBox22->Text;
    ob1.salary = textBox23->Text;
    ob1.bonus = textBox24->Text;
    String^ salarytype;
    if (ob1.bonus == "") {
        salarytype = ob1.setsalary(textBox23->Text);
    }
    else {
        salarytype = ob1.setsalary(textBox23->Text, textBox24->Text);
    }
    
    crud.discard(r + "Emp.txt", ob1.employ_name, 0);

    dataGridView5->Columns->Clear();
    dataGridView5->Rows->Clear();


    cli::array<employee^>^ d;
    d = Mapper::map_emp(crud.read(r + "Emp.txt"));

    dataGridView5->Columns->Add("c1", "Employee");
    dataGridView5->Columns->Add("c2", "Position");
    dataGridView5->Columns->Add("c3", "Salary");

    for (int i = 0; i < d->Length; i++) {
        dataGridView5->Rows->Add(d[i]->employ_name, d[i]->postion, d[i]->salary);
    }
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\wajiz.pk\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.employ_name = textBox21->Text;
    ob1.postion = textBox22->Text;
    ob1.salary = textBox23->Text;
    ob1.bonus = textBox24->Text;
    // String^ salarytype;
    //if (ob1.bonus == "") {
    //   salarytype = ob1.setsalary(textBox23->Text);
   // }
    //else {
    //    salarytype = ob1.setsalary(textBox23->Text, textBox24->Text);
   // }

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();

    cli::array<employee^>^ b;
    if (ob1.employ_name == "*") {
        b = Mapper::map_emp(crud.read(r + "Emp.txt"));
    }
    else {
        b = Mapper::map_emp(crud.search(r + "Emp.txt", ob1.employ_name, 0));
    }

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->employ_name, b[i]->postion, b[i]->salary);
    }
}
};
}// end of class Form1
     // end of namespace CppCLRWinFormsProject

