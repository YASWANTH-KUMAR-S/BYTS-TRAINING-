bool isAnagram(char * s, char * t){
 if(strlen(s)!=strlen(t)) return false;
 int hash[26]={0};
 for(int i=0;s[i]!='\0';i++)
 {
     ++hash[s[i]-'a'];
     --hash[t[i]-'a'];
 }
 for(int i=0;i<26;i++)
 {
     if(hash[i]!=0)
       return false;
 }
 return true;
}