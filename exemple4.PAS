Program exemple4;
Var x : Integer;

Procedure Toto;
Var x : integer;
Begin
		x:=4;
		WriteLn('toto x = ', x);
End;

Begin
		x:=2;
		WriteLn ('glob x = ', x);
		Toto;
		Writeln ('glob x = ', x);
End.