object Form1: TForm1
  Left = 163
  Top = 240
  Width = 1330
  Height = 649
  Caption = '3_400101'#1088#1072' '#1059#1073#1072#1081#1076#1091#1083#1083#1086#1077#1074' '#1040
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 280
    Width = 90
    Height = 13
    Caption = 'Intsert, ubdete .Del'
  end
  object Label2: TLabel
    Left = 24
    Top = 336
    Width = 61
    Height = 13
    Caption = 'Select Query'
  end
  object Label3: TLabel
    Left = 656
    Top = 104
    Width = 21
    Height = 13
    Caption = 'Idd='
  end
  object Label4: TLabel
    Left = 656
    Top = 136
    Width = 54
    Height = 13
    Caption = 'nazvaniya='
  end
  object Label5: TLabel
    Left = 656
    Top = 168
    Width = 38
    Height = 13
    Caption = 'obeom='
  end
  object Label6: TLabel
    Left = 656
    Top = 200
    Width = 50
    Height = 13
    Caption = 'data_soh='
  end
  object Label7: TLabel
    Left = 656
    Top = 232
    Width = 17
    Height = 13
    Caption = 'tip='
  end
  object Label8: TLabel
    Left = 376
    Top = 112
    Width = 55
    Height = 13
    Caption = 'Danie class'
  end
  object ComboBox1: TComboBox
    Left = 48
    Top = 48
    Width = 145
    Height = 21
    ItemHeight = 13
    ItemIndex = 0
    TabOrder = 0
    Text = 'tbl1'
    Items.Strings = (
      'tbl1'
      'tbl2')
  end
  object Button1: TButton
    Left = 192
    Top = 48
    Width = 113
    Height = 17
    Caption = 'Show'
    TabOrder = 1
    OnClick = Button1Click
  end
  object DBGrid1: TDBGrid
    Left = 40
    Top = 88
    Width = 217
    Height = 169
    DataSource = DataSource1
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object Edit1: TEdit
    Left = 24
    Top = 304
    Width = 153
    Height = 21
    TabOrder = 3
    Text = 'Edit1'
  end
  object Button2: TButton
    Left = 200
    Top = 304
    Width = 113
    Height = 25
    Caption = 'Exe'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Edit2: TEdit
    Left = 24
    Top = 360
    Width = 161
    Height = 21
    TabOrder = 5
    Text = 'Edit2'
  end
  object Button3: TButton
    Left = 208
    Top = 360
    Width = 113
    Height = 25
    Caption = 'sel info'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 392
    Top = 56
    Width = 145
    Height = 25
    Caption = 'vivod class'
    TabOrder = 7
    OnClick = Button4Click
  end
  object Memo1: TMemo
    Left = 368
    Top = 128
    Width = 185
    Height = 113
    Lines.Strings = (
      'Memo1')
    TabOrder = 8
  end
  object Button5: TButton
    Left = 976
    Top = 56
    Width = 185
    Height = 41
    Caption = 'dab Wort'
    TabOrder = 9
    OnClick = Button5Click
  end
  object Edit3: TEdit
    Left = 720
    Top = 104
    Width = 121
    Height = 21
    TabOrder = 10
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 720
    Top = 136
    Width = 121
    Height = 21
    TabOrder = 11
    Text = 'Edit4'
  end
  object Edit5: TEdit
    Left = 720
    Top = 168
    Width = 121
    Height = 21
    TabOrder = 12
    Text = 'Edit5'
  end
  object Edit6: TEdit
    Left = 720
    Top = 200
    Width = 121
    Height = 21
    TabOrder = 13
    Text = 'Edit6'
  end
  object Edit7: TEdit
    Left = 720
    Top = 232
    Width = 121
    Height = 21
    TabOrder = 14
    Text = 'Edit7'
  end
  object Button6: TButton
    Left = 648
    Top = 48
    Width = 145
    Height = 41
    Caption = 'dab_dan_class'
    TabOrder = 15
    OnClick = Button6Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\azamjon\De' +
      'sktop\Microsoft Access '#1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093'.mdb;Persist Security Info=Fal' +
      'se'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 72
    Top = 408
  end
  object ADOCommand1: TADOCommand
    Parameters = <>
    Left = 112
    Top = 408
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Tbl1'
    Left = 152
    Top = 408
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 24
    Top = 408
  end
  object ADOQuery1: TADOQuery
    Parameters = <>
    Left = 192
    Top = 408
  end
end
