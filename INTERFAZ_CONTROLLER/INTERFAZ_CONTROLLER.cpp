#include "pch.h"

#include "INTERFAZ_CONTROLLER.h"

User^ INTERFAZCONTROLLER::Controller::Crear(User^ name)
{
	user->name = name;
	return name;
}

int INTERFAZCONTROLLER::Controller::AddUser(User^)
{
	UserList->Add(user);
	PersistUser();
	return 1;
}

List<User^>^ INTERFAZCONTROLLER::Controller::GetUser()
{
	List<User^>^ userlist = gcnew List<User^>();
	LoadUser();
	userlist = UserList;
	return userlist;
}

void INTERFAZCONTROLLER::Controller::PersistUser()
{
	XmlSerializer^ writer = gcnew XmlSerializer(UserList->GetType());
	StreamWriter^ sw = gcnew StreamWriter("Users.xml");
	writer->Serialize(sw, UserList);
	sw->Close();
}

void INTERFAZCONTROLLER::Controller::LoadUser()
{
	try {
		XmlSerializer^ reader = gcnew XmlSerializer(UserList->GetType());
		StreamReader^ sr = gcnew StreamReader("Usuarios.xml");
		UserList = (List<User^>^)reader->Deserialize(sr);
		sr->Close();
	}
	catch (Exception^ e) {

	}
}
