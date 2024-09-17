Program Task2;

uses
  System.SysUtils;

Const
  INPUT_ACCURACY: Integer = 12;

Var
  IsWork: Boolean;
  N, M: Integer;
  Answer: Cardinal; // = unsigned integer

Begin
  N := 0;
  M := 0;
  Answer := 1;

  WriteLn('This program calculates permutation from n to m');

  // Ввод значения n
  WriteLn('Please enter n from 1 to ', INPUT_ACCURACY);
  Repeat
    IsWork := True;
    Try
      ReadLn(N);
    Except
      IsWork := False;
      WriteLn('Please enter a number again');
    End;

    If (IsWork) And ((N < 1) Or (N > INPUT_ACCURACY)) Then
    Begin
      WriteLn('Please enter a number again from 1 to ', INPUT_ACCURACY);
      IsWork := False;
    End;
  Until IsWork;

  // Ввод значения m
  WriteLn('Please enter m from 1 to ', INPUT_ACCURACY);
  Repeat
    IsWork := True;
    Try
      ReadLn(M);
    Except
      IsWork := False;
      WriteLn('Please enter a number again');
    End;

    If (IsWork) And ((M < 1) Or (M > INPUT_ACCURACY)) Then
    Begin
      WriteLn('Please enter a number again from 1 to ', INPUT_ACCURACY);
      IsWork := False;
    End
    Else If (M > N) Then
    Begin
      WriteLn('m can''t be greater than n. Please try again');
      IsWork := False;
    End;
  Until IsWork;

  // Вычисление перестановки
  For var i := N DownTo N - M + 1 Do
    Answer := Answer * i;

  WriteLn('The permutation = ', Answer);
End.
