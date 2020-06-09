//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>
#include <vector>
#include "audioplayerScript.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
bool flag=0;
TForm1 *Form1;
 using namespace std;
   vector <string> names;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
{            
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
OpenDialog1->Execute();

ListBox1->Items->Add(ExtractFileName(OpenDialog1->FileName));
   //функция при нажатии кнопки "добавить музыку"
   //открывается компонент opendialog и выбирается mp3 файл
   //адрес записываем в listbox
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ListBox1Click(TObject *Sender)
{                                     // ListBox1->Items->Strings[]
Label1->Caption=ListBox1->Items->Strings[ListBox1->ItemIndex]  ;
MediaPlayer1->FileName  =  ListBox1->Items->Strings[ListBox1->ItemIndex];
MediaPlayer1->Open();
  Timer1->Enabled = True;
  //функция вызываемая при выборе объекта в listbox
   //записываем адрес проигрывамоего файла в объект mediaplayer
   //открываем   mediaplayer
   // запускаем таймер
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
if (ScrollBar1->Position!=MediaPlayer1->Position*100/MediaPlayer1->Length)   {
MediaPlayer1->Stop();
MediaPlayer1->Position = MediaPlayer1->Length*ScrollBar1->Position/100;
   MediaPlayer1->Play();
   //функция вызываемая при изменениии объекта scrollbar
   //если объект изменился не из-за таймер, то останавливаем плеер,
   //меняем врем€ проигрывани€ пропорцинально длинее scrollbar
   // запускаем плеер

       }
else
{

      Timer1->Enabled = True;

}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
   ScrollBar1->Position=MediaPlayer1->Position*100/MediaPlayer1->Length;
   //изменение позиции по таймеру каждую секунду пропорционально длинне дорожки mp3
}
//---------------------------------------------------------------------------
void __fastcall TForm1::MediaPlayer1Click(TObject *Sender,
      TMPBtnType Button, bool &DoDefault)
{         //функция настройки кнопок объекта mediaplayer
// при play  - музыка проигрываетс€
 MediaPlayer1->Play();


}

//---------------------------------------------------------------------------

