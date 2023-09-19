//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->GymUsersGrid->Columns[0]->Header="Id";
	Form1->GymUsersGrid->Columns[1]->Header="Membership Type";
	Form1->GymUsersGrid->Columns[2]->Header="First name";
	Form1->GymUsersGrid->Columns[3]->Header="Last name";

		Form1->GymUsersGrid->Columns[0]->Width=20;
		Form1->GymUsersGrid->Columns[1]->Width=105;
		Form1->GymUsersGrid->Columns[2]->Width=80;
		Form1->GymUsersGrid->Width=320;

	Form1->MembershipGrid->ShowScrollBars=false;
	Form1->GymUsersGrid->ShowScrollBars=false;
	Form1->ShowGrid->ShowScrollBars=false;

	Form1->ShowGrid->Columns[0]->Header="Id";
	Form1->ShowGrid->Columns[1]->Header="Membership Type";
	Form1->ShowGrid->Columns[2]->Header="First name";
	Form1->ShowGrid->Columns[3]->Header="Last name";

	Form1->ShowGrid->Columns[0]->Width=20;
	Form1->ShowGrid->Columns[1]->Width=105;
	Form1->ShowGrid->Columns[2]->Width=60;
	Form1->ShowGrid->Width=320;


	Form1->UserInformationsGrid->Columns[0]->Header="Id";
	Form1->UserInformationsGrid->Columns[1]->Header="Age";
	Form1->UserInformationsGrid->Columns[2]->Header="Email";
	Form1->UserInformationsGrid->Columns[3]->Header="PhoneNumber";
	Form1->UserInformationsGrid->Columns[4]->Header="Trainer";
	Form1->UserInformationsGrid->Columns[5]->Header="ClassType";

	Form1->UserInformationsGrid->Columns[0]->Width=20;
	Form1->UserInformationsGrid->Columns[1]->Width=30;
	Form1->UserInformationsGrid->Columns[2]->Width=100;
	Form1->UserInformationsGrid->Columns[3]->Width=80;
	Form1->UserInformationsGrid->Columns[4]->Width=100;
	Form1->UserInformationsGrid->Columns[5]->Width=60;

}
//---------------------------------------------------------------------------



