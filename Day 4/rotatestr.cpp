bool rotateString(char * s, char * goal){
   if(strlen(s)!=strlen(goal)) return false;
    char temp[strlen(s)*2+1];
    strcpy(temp,s);
    strcat(temp,s);
    return strstr(temp,goal)?true:false;
}