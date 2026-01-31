string printSequence(string s) {
    // code here.
    
    int n = s.length();
    string ans;
    string keypad[] = {
        "2",    "22",   "222",   // A B C
        "3",    "33",   "333",   // D E F
        "4",    "44",   "444",   // G H I
        "5",    "55",   "555",   // J K L
        "6",    "66",   "666",   // M N O
        "7",    "77",   "777", "7777", // P Q R S
        "8",    "88",   "888",   // T U V
        "9",    "99",   "999", "9999"  // W X Y Z
    };
      for(int i = 0; i < n; i++){
           if(s[i] == ' '){
                ans += '0';
            } else{
            ans += keypad[s[i] - 'A'];
                
            }
        }
     return ans;
}

/*
'A' - 'A' = 0 → "2"
'B' - 'A' = 1 → "22"
'F' - 'A' = 5 → "333"
' ' → "0"

T.C.- O(n)
S.C.- O(n)
*/