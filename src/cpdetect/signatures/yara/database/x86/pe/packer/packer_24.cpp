/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_24.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_24 =
R"x86_pe_packer(
rule rule_666_FSG {
	meta:
		tool = "P"
		name = "FSG"
		version = "2.00"
		pattern = "8725??????00619455A4B680FF1373F933C9FF13731633C0FF13731FB68041B010FF1312C073FA753AAAEBE0"
	strings:
		$1 = { 87 25 ?? ?? ?? 00 61 94 55 A4 B6 80 FF 13 73 F9 33 C9 FF 13 73 16 33 C0 FF 13 73 1F B6 80 41 B0 10 FF 13 12 C0 73 FA 75 3A AA EB E0 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_667_Fuck_n_Joy {
	meta:
		tool = "P"
		name = "Fuck'n'Joy"
		version = "1.0c"
		pattern = "60E8000000005D81EDD8054000FF742420E88C0200000BC00F842C01000089856C0840008D852F08400050FFB56C084000E8EF0200000BC00F840C01000089853B0840008D853F08400050FFB56C084000E8CF0200"
	strings:
		$1 = { 60 E8 00 00 00 00 5D 81 ED D8 05 40 00 FF 74 24 20 E8 8C 02 00 00 0B C0 0F 84 2C 01 00 00 89 85 6C 08 40 00 8D 85 2F 08 40 00 50 FF B5 6C 08 40 00 E8 EF 02 00 00 0B C0 0F 84 0C 01 00 00 89 85 3B 08 40 00 8D 85 3F 08 40 00 50 FF B5 6C 08 40 00 E8 CF 02 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_668_Fusion {
	meta:
		tool = "P"
		name = "Fusion"
		version = "1.0"
		pattern = "68043040006804304000E8090300006804304000E8C7020000"
	strings:
		$1 = { 68 04 30 40 00 68 04 30 40 00 E8 09 03 00 00 68 04 30 40 00 E8 C7 02 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_669_GameGuard {
	meta:
		tool = "P"
		name = "GameGuard"
		version = "2006.5.x.x DLL"
		pattern = "31FF740661E94A4D5030BA4C000000807C2408010F85??01000060BE00"
	strings:
		$1 = { 31 FF 74 06 61 E9 4A 4D 50 30 BA 4C 00 00 00 80 7C 24 08 01 0F 85 ?? 01 00 00 60 BE 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_670_GameGuard {
	meta:
		tool = "P"
		name = "GameGuard"
		version = "2006.5.x.x EXE"
		pattern = "31FF740661E94A4D50305ABA7D000000807C240801E90000000060BE00"
	strings:
		$1 = { 31 FF 74 06 61 E9 4A 4D 50 30 5A BA 7D 00 00 00 80 7C 24 08 01 E9 00 00 00 00 60 BE 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_671_Gamehouse_Media_Protector {
	meta:
		tool = "P"
		name = "Gamehouse Media Protector"
		pattern = "68????????6A00FF15????????50FF15??????0000000000000000"
	strings:
		$1 = { 68 ?? ?? ?? ?? 6A 00 FF 15 ?? ?? ?? ?? 50 FF 15 ?? ?? ?? 00 00 00 00 00 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_672_Gardian_Angel {
	meta:
		tool = "P"
		name = "Gardian Angel"
		version = "1.0"
		pattern = "068CC88ED88EC0FCBF????EB"
	strings:
		$1 = { 06 8C C8 8E D8 8E C0 FC BF ?? ?? EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_673_GHF_Protector__pack____GPcH {
	meta:
		tool = "P"
		name = "GHF Protector"
		pattern = "6068????????B8????????FF1068????????50B8????????FF106800A000006A40FFD08905????????89C7BE????????60FCB28031DBA4B302E86D00000073F6"
	strings:
		$1 = { 60 68 ?? ?? ?? ?? B8 ?? ?? ?? ?? FF 10 68 ?? ?? ?? ?? 50 B8 ?? ?? ?? ?? FF 10 68 00 A0 00 00 6A 40 FF D0 89 05 ?? ?? ?? ?? 89 C7 BE ?? ?? ?? ?? 60 FC B2 80 31 DB A4 B3 02 E8 6D 00 00 00 73 F6 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_674_GHF_Protector {
	meta:
		tool = "P"
		name = "GHF Protector"
		pattern = "6068????????B8????????FF1068????????50B8????????FF1068000000006A40FFD08905????????89C7BE????????60FCB28031DBA4B302E86D00000073F631C9E864000000731C31C0E85B0000007323B30241"
	strings:
		$1 = { 60 68 ?? ?? ?? ?? B8 ?? ?? ?? ?? FF 10 68 ?? ?? ?? ?? 50 B8 ?? ?? ?? ?? FF 10 68 00 00 00 00 6A 40 FF D0 89 05 ?? ?? ?? ?? 89 C7 BE ?? ?? ?? ?? 60 FC B2 80 31 DB A4 B3 02 E8 6D 00 00 00 73 F6 31 C9 E8 64 00 00 00 73 1C 31 C0 E8 5B 00 00 00 73 23 B3 02 41 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_675_Goat_s_PE_Mutilator {
	meta:
		tool = "P"
		name = "Goat's PE Mutilator"
		version = "1.6"
		pattern = "E8EA0B0000??????8B1C79F663D88D22B0BFF64908C302BD3B6C294613285D00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000F530FDE0F550F60000000000000000000000000000000000000000000000000000000"
	strings:
		$1 = { E8 EA 0B 00 00 ?? ?? ?? 8B 1C 79 F6 63 D8 8D 22 B0 BF F6 49 08 C3 02 BD 3B 6C 29 46 13 28 5D 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 53 0F DE 0F 55 0F 60 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_676_GP_Install {
	meta:
		tool = "P"
		name = "GP-Install"
		version = "5.0.3.32"
		pattern = "558BEC33C951515151515151535657B8C41C4100E86B3EFFFF33C055687620410064FF30648920BAA047410033C0E8310AFFFF33D2A1A0"
	strings:
		$1 = { 55 8B EC 33 C9 51 51 51 51 51 51 51 53 56 57 B8 C4 1C 41 00 E8 6B 3E FF FF 33 C0 55 68 76 20 41 00 64 FF 30 64 89 20 BA A0 47 41 00 33 C0 E8 31 0A FF FF 33 D2 A1 A0 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_677_GSFX {
	meta:
		tool = "P"
		name = "GSFX"
		pattern = "47534658"
	strings:
		$1 = { 47 53 46 58 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_678_G_X_Protector {
	meta:
		tool = "P"
		name = "G!X Protector"
		version = "1.2"
		pattern = "60EB05E8EB044000EBFAE80A000000"
	strings:
		$1 = { 60 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_679_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.00"
		pattern = "FABD????FFE56A49480C??E4??3F983F"
	strings:
		$1 = { FA BD ?? ?? FF E5 6A 49 48 0C ?? E4 ?? 3F 98 3F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_680_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.10, 1.11"
		pattern = "B430CD2186E03D????73??B42FCD21B0??B44CCD2150B8????58EB"
	strings:
		$1 = { B4 30 CD 21 86 E0 3D ?? ?? 73 ?? B4 2F CD 21 B0 ?? B4 4C CD 21 50 B8 ?? ?? 58 EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_681_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.10p1"
		pattern = "B430CD2186E03D000373??B42FCD21B42ACD21B42CCD21B0FFB44CCD2150B8????58EB"
	strings:
		$1 = { B4 30 CD 21 86 E0 3D 00 03 73 ?? B4 2F CD 21 B4 2A CD 21 B4 2C CD 21 B0 FF B4 4C CD 21 50 B8 ?? ?? 58 EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_682_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.11c"
		pattern = "B430CD2186E03D????73??B4??CD21B0??B44CCD2153BB????5BEB"
	strings:
		$1 = { B4 30 CD 21 86 E0 3D ?? ?? 73 ?? B4 ?? CD 21 B0 ?? B4 4C CD 21 53 BB ?? ?? 5B EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_683_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.11f modified"
		pattern = "52B430CD2152FA??FB3D????EB??CD200E1FB409E8"
	strings:
		$1 = { 52 B4 30 CD 21 52 FA ?? FB 3D ?? ?? EB ?? CD 20 0E 1F B4 09 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_684_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.13"
		pattern = "52B8????1ECD2186E03D????73??CD200E1FB409E8????24??EA"
	strings:
		$1 = { 52 B8 ?? ?? 1E CD 21 86 E0 3D ?? ?? 73 ?? CD 20 0E 1F B4 09 E8 ?? ?? 24 ?? EA }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_685_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.18"
		pattern = "52BA????5AEB??9A????????30CD21??????FD02????CD200E1F52BA????5AEB"
	strings:
		$1 = { 52 BA ?? ?? 5A EB ?? 9A ?? ?? ?? ?? 30 CD 21 ?? ?? ?? FD 02 ?? ?? CD 20 0E 1F 52 BA ?? ?? 5A EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_686_HACKSTOP {
	meta:
		tool = "P"
		name = "HACKSTOP"
		version = "1.19"
		pattern = "52BA????5AEB??9A????????30CD21??????D602????CD200E1F52BA????5AEB"
	strings:
		$1 = { 52 BA ?? ?? 5A EB ?? 9A ?? ?? ?? ?? 30 CD 21 ?? ?? ?? D6 02 ?? ?? CD 20 0E 1F 52 BA ?? ?? 5A EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_687_Hardlock_dongle {
	meta:
		tool = "P"
		name = "Hardlock dongle"
		pattern = "5C5C2E5C484152444C4F434B2E565844000000005C5C2E5C46456E7465446576"
	strings:
		$1 = { 5C 5C 2E 5C 48 41 52 44 4C 4F 43 4B 2E 56 58 44 00 00 00 00 5C 5C 2E 5C 46 45 6E 74 65 44 65 76 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_688_Hasp_dongle {
	meta:
		tool = "P"
		name = "Hasp dongle"
		pattern = "5053515257568B751C8B3E??????????8B5D088AFB????035D108B450C8B4D148B551880FF32"
	strings:
		$1 = { 50 53 51 52 57 56 8B 75 1C 8B 3E ?? ?? ?? ?? ?? 8B 5D 08 8A FB ?? ?? 03 5D 10 8B 45 0C 8B 4D 14 8B 55 18 80 FF 32 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_689_HASP_PROTECTION {
	meta:
		tool = "P"
		name = "HASP PROTECTION"
		pattern = "558BEC535657608BC4A350??????B890??????2B05B0??????A3B0??????833D4C??????000F8411000000A150??????50FF154C??????E969000000C70570"
	strings:
		$1 = { 55 8B EC 53 56 57 60 8B C4 A3 50 ?? ?? ?? B8 90 ?? ?? ?? 2B 05 B0 ?? ?? ?? A3 B0 ?? ?? ?? 83 3D 4C ?? ?? ?? 00 0F 84 11 00 00 00 A1 50 ?? ?? ?? 50 FF 15 4C ?? ?? ?? E9 69 00 00 00 C7 05 70 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_690_HASP_PROTECTION {
	meta:
		tool = "P"
		name = "HASP PROTECTION"
		version = "1.X"
		pattern = "558BEC535657608BC4A3????????B8????????2B05????????A3????????833D????????0074158B0D????????51FF15????????83C404E9A500000068"
	strings:
		$1 = { 55 8B EC 53 56 57 60 8B C4 A3 ?? ?? ?? ?? B8 ?? ?? ?? ?? 2B 05 ?? ?? ?? ?? A3 ?? ?? ?? ?? 83 3D ?? ?? ?? ?? 00 74 15 8B 0D ?? ?? ?? ?? 51 FF 15 ?? ?? ?? ?? 83 C4 04 E9 A5 00 00 00 68 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_691_HEALTH {
	meta:
		tool = "P"
		name = "HEALTH"
		version = ".5.1"
		pattern = "1EE8????2E8C06????2E893E????8BD7B8????CD218BD80E1FE8????0657A1????26"
	strings:
		$1 = { 1E E8 ?? ?? 2E 8C 06 ?? ?? 2E 89 3E ?? ?? 8B D7 B8 ?? ?? CD 21 8B D8 0E 1F E8 ?? ?? 06 57 A1 ?? ?? 26 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_692_Hide_PE {
	meta:
		tool = "P"
		name = "Hide PE"
		version = "1.01"
		pattern = "??BA??????00B8????????890283C204B8????????890283C204B8????????890283C2F8FFE20D0A2D3D5B20486964655045206279204247436F7270205D3D2D"
	strings:
		$1 = { ?? BA ?? ?? ?? 00 B8 ?? ?? ?? ?? 89 02 83 C2 04 B8 ?? ?? ?? ?? 89 02 83 C2 04 B8 ?? ?? ?? ?? 89 02 83 C2 F8 FF E2 0D 0A 2D 3D 5B 20 48 69 64 65 50 45 20 62 79 20 42 47 43 6F 72 70 20 5D 3D 2D }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_693_Hide_Protect {
	meta:
		tool = "P"
		name = "Hide&Protect"
		version = "1.016C"
		pattern = "909090E9D8"
	strings:
		$1 = { 90 90 90 E9 D8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_694_hmimys_Protect {
	meta:
		tool = "P"
		name = "hmimys Protect"
		version = "1.0"
		pattern = "E8BA000000??00000000????0000104000??????00??????0000????00??????00??????00??????00??????00??????00??00000000000000??????000000000000000000??????00??????000000000000000000000000000000000000000000??????00??????00??????00??????00000000004B65726E656C33322E646C6C0000004C6F61644C6962726172794100000047657450726F6341646472657373000000566972"
	strings:
		$1 = { E8 BA 00 00 00 ?? 00 00 00 00 ?? ?? 00 00 10 40 00 ?? ?? ?? 00 ?? ?? ?? 00 00 ?? ?? 00 ?? ?? ?? 00 ?? ?? ?? 00 ?? ?? ?? 00 ?? ?? ?? 00 ?? ?? ?? 00 ?? 00 00 00 00 00 00 00 ?? ?? ?? 00 00 00 00 00 00 00 00 00 ?? ?? ?? 00 ?? ?? ?? 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ?? ?? ?? 00 ?? ?? ?? 00 ?? ?? ?? 00 ?? ?? ?? 00 00 00 00 00 4B 65 72 6E 65 6C 33 32 2E 64 6C 6C 00 00 00 4C 6F 61 64 4C 69 62 72 61 72 79 41 00 00 00 47 65 74 50 72 6F 63 41 64 64 72 65 73 73 00 00 00 56 69 72 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_695_hmimys_s_PE_Pack {
	meta:
		tool = "P"
		name = "hmimys's PE-Pack"
		version = "0.1"
		pattern = "E8000000005D83ED056A00FF95E10E00008985850E00008B583C03D881C3F800000080AD890E000001899D630F00008B4B0C038D850E00008B530880BD890E000000750C038D910E00002B95910E0000898D570F000089955B0F00008B5B10899D5F0F00008B9D5F0F00008B85570F00005350E8B70B00008985730F00006A046800100000506A00FF95E90E000089856B0F00006A04680010000068D87C00006A00FF95E90E000089856F0F00008D85670F00008B9D730F00008B8D6B0F00008B955B0F000083EA0E8BB5570F000083C60E8BBD6F0F0000505351525668D87C000057E8010100008B9D570F00008B033C0175"
	strings:
		$1 = { E8 00 00 00 00 5D 83 ED 05 6A 00 FF 95 E1 0E 00 00 89 85 85 0E 00 00 8B 58 3C 03 D8 81 C3 F8 00 00 00 80 AD 89 0E 00 00 01 89 9D 63 0F 00 00 8B 4B 0C 03 8D 85 0E 00 00 8B 53 08 80 BD 89 0E 00 00 00 75 0C 03 8D 91 0E 00 00 2B 95 91 0E 00 00 89 8D 57 0F 00 00 89 95 5B 0F 00 00 8B 5B 10 89 9D 5F 0F 00 00 8B 9D 5F 0F 00 00 8B 85 57 0F 00 00 53 50 E8 B7 0B 00 00 89 85 73 0F 00 00 6A 04 68 00 10 00 00 50 6A 00 FF 95 E9 0E 00 00 89 85 6B 0F 00 00 6A 04 68 00 10 00 00 68 D8 7C 00 00 6A 00 FF 95 E9 0E 00 00 89 85 6F 0F 00 00 8D 85 67 0F 00 00 8B 9D 73 0F 00 00 8B 8D 6B 0F 00 00 8B 95 5B 0F 00 00 83 EA 0E 8B B5 57 0F 00 00 83 C6 0E 8B BD 6F 0F 00 00 50 53 51 52 56 68 D8 7C 00 00 57 E8 01 01 00 00 8B 9D 57 0F 00 00 8B 03 3C 01 75 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_696_hmimys_Packer {
	meta:
		tool = "P"
		name = "hmimys's Packer"
		version = "1.0"
		pattern = "5E83C664AD50AD5083EE6CAD50AD50AD50AD50AD50E8E707"
	strings:
		$1 = { 5E 83 C6 64 AD 50 AD 50 83 EE 6C AD 50 AD 50 AD 50 AD 50 AD 50 E8 E7 07 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_697_hmimys_Packer {
	meta:
		tool = "P"
		name = "hmimys's Packer"
		version = "1.2"
		pattern = "E895000000??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????5EAD50AD5097AD50AD50AD50E8C0010000AD50AD9387DEB9????????E31D8A074704??3C??73F78B073C??75F3B0000FC805????????2BC7ABE2E3AD85C0742B9756FF138BE8AC84C075FB66AD6685C074E9AC83EE0384C074085655FF5304ABEBE4AD5055FF5304ABEBE0C38B0A3B4A04750AC74210010000000CFFC3"
	strings:
		$1 = { E8 95 00 00 00 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 5E AD 50 AD 50 97 AD 50 AD 50 AD 50 E8 C0 01 00 00 AD 50 AD 93 87 DE B9 ?? ?? ?? ?? E3 1D 8A 07 47 04 ?? 3C ?? 73 F7 8B 07 3C ?? 75 F3 B0 00 0F C8 05 ?? ?? ?? ?? 2B C7 AB E2 E3 AD 85 C0 74 2B 97 56 FF 13 8B E8 AC 84 C0 75 FB 66 AD 66 85 C0 74 E9 AC 83 EE 03 84 C0 74 08 56 55 FF 53 04 AB EB E4 AD 50 55 FF 53 04 AB EB E0 C3 8B 0A 3B 4A 04 75 0A C7 42 10 01 00 00 00 0C FF C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_698_HPA {
	meta:
		tool = "P"
		name = "HPA"
		pattern = "E8????5E8BD683????83????060E1E0E1F33FF8CD3"
	strings:
		$1 = { E8 ?? ?? 5E 8B D6 83 ?? ?? 83 ?? ?? 06 0E 1E 0E 1F 33 FF 8C D3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";