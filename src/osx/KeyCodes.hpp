class KeyCode
{
	
public:
	
	KeyCode() { };
	
	KeyCode(int generic, int osx, int windows) : generic_(generic), osx_(osx), windows_(windows) { };
	
	int windows_;
	int osx_;
	int generic_;
	
};

class KeyCodes
{
	typedef std::map<int, KeyCode> KeyCodeMap;
	
public:
	
	KeyCodes()
	{
		
		key_codes_[0] = KeyCode(0, 0, 65);
		key_codes_[1] = KeyCode(1, 1, 83);
		key_codes_[2] = KeyCode(2, 2, 68);
		key_codes_[3] = KeyCode(3, 3, 70);
		key_codes_[4] = KeyCode(4, 4, 72);
		key_codes_[5] = KeyCode(5, 5, 71);
		key_codes_[6] = KeyCode(6, 6, 90);
		key_codes_[7] = KeyCode(7, 7, 88);
		key_codes_[8] = KeyCode(8, 9, 86);

		key_codes_[9] = KeyCode(9, 11, 66);
		key_codes_[10] = KeyCode(10, 12, 81);
		key_codes_[11] = KeyCode(11, 13, 87);
		key_codes_[12] = KeyCode(12, 14, 69);
		key_codes_[13] = KeyCode(13, 15, 82);
		key_codes_[14] = KeyCode(14, 16, 89);
		key_codes_[15] = KeyCode(15, 17, 84);
		key_codes_[16] = KeyCode(16, 18, 49);
		key_codes_[17] = KeyCode(17, 19, 50);
		key_codes_[18] = KeyCode(18, 20, 51);
		key_codes_[19] = KeyCode(19, 21, 52);
		key_codes_[20] = KeyCode(20, 22, 53);
		key_codes_[21] = KeyCode(21, 23, 54);
		
		key_codes_[22] = KeyCode(22, 25, 57);
		key_codes_[23] = KeyCode(23, 26, 55);
		
		key_codes_[24] = KeyCode(24, 28, 56);
		key_codes_[25] = KeyCode(25, 29, 48);

		key_codes_[26] = KeyCode(26, 31, 79);
		key_codes_[27] = KeyCode(27, 32, 85);

		key_codes_[28] = KeyCode(28, 34, 73);
		key_codes_[29] = KeyCode(29, 35, 80);
		
		key_codes_[30] = KeyCode(30, 36, 13);
		
		key_codes_[31] = KeyCode(31, 37, 76);
		key_codes_[32] = KeyCode(32, 38, 74);

		key_codes_[33] = KeyCode(33, 40, 75);
		
		key_codes_[34] = KeyCode(34, 43, 188);
		key_codes_[35] = KeyCode(35, 44, 191);
		key_codes_[36] = KeyCode(36, 45, 78);
		key_codes_[37] = KeyCode(37, 46, 77);
		key_codes_[38] = KeyCode(38, 47, 190);
		key_codes_[39] = KeyCode(39, 48, 9);
		key_codes_[40] = KeyCode(40, 49, 9);

	};
	
	int osx_to_generic(int keycode)
	{	
		for(KeyCodeMap::iterator i = key_codes_.begin(); i != key_codes_.end(); ++i)
		{
			if ((*i).second.osx_ == keycode)
			{
				return (*i).second.generic_;
			}
		}
		
		return 0;
	};
	
	int generic_to_windows(int keycode)
	{
		return key_codes_[keycode].windows_;
	}
	
private:
	
	KeyCodeMap key_codes_;	

};