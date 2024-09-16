Program Lab1;

Uses
  System.SysUtils;
Const
    INPUT_ACCURACY :Integer = 20;
    INACCURACY :Real = 0.0000001;
Var
    IsWork:Boolean;
    X, Y:Real;
Begin
    X := 0.0;
    Y := 0.0;

    WriteLn('This program determines, whether a point (x,y) belongs to the closed set D');

    Repeat
        IsWork := True;
        WriteLn('Please enter the x coordinate within +/- ', INPUT_ACCURACY);
        Try
            ReadLn(X);
        Except
            IsWork := False;
        End;
        If IsWork And ((X < -INPUT_ACCURACY) Or (X > INPUT_ACCURACY)) Then
        Begin
            WriteLn('The number is out of range.');
            IsWork := False;
        End;
    Until IsWork;

    Repeat
        IsWork := True;
        WriteLn('Please enter the y coordinate within +/- ', INPUT_ACCURACY);
        Try
            ReadLn(Y);
        Except
            IsWork := False;
        End;
        If IsWork And ((Y < -INPUT_ACCURACY) Or (Y > INPUT_ACCURACY)) Then
        Begin
            WriteLn('The number is out of range.');
            IsWork := False;
        End;
    Until IsWork;

    If ((X + Y < 1.0 + INACCURACY) And (2.0 * X - Y < 1.0 + INACCURACY) And (Y + INACCURACY > 0.0)) Then
        WriteLn ('This point belongs to a closed set D')
    Else
        WriteLn ('This point doesn''t belong to a closed set D');
End.
