//---------------------------------------------------------------------------

#ifndef audioplayerScriptH
#define audioplayerScriptH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <MPlayer.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TOpenDialog *OpenDialog1;
        TLabel *Label1;
        TListBox *ListBox1;
        TScrollBar *ScrollBar1;
        TTimer *Timer1;
        TMediaPlayer *MediaPlayer1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ListBox1Click(TObject *Sender);
        void __fastcall ScrollBar1Change(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall MediaPlayer1Click(TObject *Sender,
          TMPBtnType Button, bool &DoDefault);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
