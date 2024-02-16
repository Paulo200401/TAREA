#pragma once

using namespace System;
using namespace INTERFAZMODEL;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;

namespace INTERFAZCONTROLLER {
	public ref class Controller
	{
	private:
		static List<User^>^ UserList = gcnew List<User^>();

	public:
		static User^ Crear(User^, String^, String^, String^);
		static int AddUser(User^);
		static List<User^>^ GetUser();
		static void PersistUser();
		static void LoadUser();

		// TODO: Add your methods for this class here.
	};
}
