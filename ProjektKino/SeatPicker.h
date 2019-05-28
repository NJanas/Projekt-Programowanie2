#pragma once

namespace ProjektKino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o SeatPicker
	/// </summary>
	public ref class SeatPicker : public System::Windows::Forms::Form
	{
	public:
		SeatPicker(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~SeatPicker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butConfirm;
	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->butConfirm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// butConfirm
			// 
			this->butConfirm->Location = System::Drawing::Point(686, 412);
			this->butConfirm->Name = L"butConfirm";
			this->butConfirm->Size = System::Drawing::Size(161, 67);
			this->butConfirm->TabIndex = 0;
			this->butConfirm->Text = L"PotweirdŸ";
			this->butConfirm->UseVisualStyleBackColor = true;
			this->butConfirm->Click += gcnew System::EventHandler(this, &SeatPicker::butConfirm_Click);
			// 
			// SeatPicker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 491);
			this->Controls->Add(this->butConfirm);
			this->Name = L"SeatPicker";
			this->Text = L"SeatPicker";
			this->ResumeLayout(false);

		}
#pragma endregion
		
		private: System::Void butConfirm_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Close();
		}
	};
}
