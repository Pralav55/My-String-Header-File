#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Project Name			:		My String Functions
//	Designed By			:		Pralav Prashant Phakatkar
//	Written in			:		C Programming Language
//	Date of Creation		:		11th December 2022	
//	Influenced by			:		string.h 
//	Implementations		:		C & C++ Programming Language
//	Operating System		:		Cross-Platform
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//Displays Function Prototype and Usage of String
//////////////////////////////////////////////////////////////////////////////
void Help()
{
	printf("\t----------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t| 1.  StrRevX(char *str) \t\t\t\t- Reverse the string\t\t\t\t\t\t\t\t|\n");
	printf("\t| 2.  StrLwrX(char *str)  \t\t\t\t- Converts string into lowercase\t\t\t\t\t\t|\n");
	printf("\t| 3.  StrUprX(char *str)  \t\t\t\t- Converts string into uppercase\t\t\t\t\t\t|\n");
	printf("\t| 4.  StrLenX(char *str)  \t\t\t\t- Returns the length of the string\t\t\t\t\t\t|\n");
	printf("\t| 5.  StrCountUpper(char *str)  \t\t\t- Returns the length of uppercase characters in the string\t\t\t|\n");
	printf("\t| 6.  StrCountLower(char *str)  \t\t\t- Returns the length of lowercase characters in the string\t\t\t|\n");
	printf("\t| 7.  DisplayX(char *str)  \t\t\t\t- Displays the particular string\t\t\t\t\t\t|\n");
	printf("\t| 8.  StrCmpX(char *str1,char *str2)  \t\t\t- Compares two string if same returns 0 else 1\t\t\t\t\t|\n");
	printf("\t| 9.  StrCpyX(char *str1,char *str2)  \t\t\t- Copies the content of str2 into str1\t\t\t\t\t\t|\n");
	printf("\t| 10. StrCatX(char *str1,char *str2)  \t\t\t- Concats both strings and store into str1\t\t\t\t\t|\n");
	printf("\t| 11. StrCntFrequency(char *str,char *num) \t\t- Returns count of particular character\t\t\t\t\t\t|\n");
	printf("\t| 12. StrToggleX(char *str)  \t\t\t\t- Toggles the particular string\t\t\t\t\t\t\t|\n");
	printf("\t| 13. CountOccurance(char *str , char num)  \t\t- Returns the count of  character in string with case sensitive\t\t\t|\n");
	printf("\t| 14. FirstOccurance(char *str,char ch)  \t\t- Returns the position of character first occured in string\t\t\t|\n");
	printf("\t| 15. LastOccurance(char *str, char ch)  \t\t- Returns the position of character last occured in string\t\t\t|\n");
	printf("\t| 16. StrNcpyX(char *str1,char *str2,int num)  \t\t- Copies first string content into second string upto entered size\t\t|\n");
	printf("\t| 17. StrCpyCap(char *src, char *dest)  \t\t- Copies capital letters from source into destination\t\t\t\t|\n");
	printf("\t| 18. StrSpaceCatX(char *src, char *dest)  \t\t- Concats both strings and store into str1 with a space in betwwen both strings\t|\n");
	printf("\t| 19. StrCpyRev(char *src , char *dest)  \t\t- Reverse the string of source and store it into destination\t\t\t|\n");
	printf("\t| 20. StrSpaceRemoval(char *src , char *dest)  \t\t- Removes all the spaces from the source and store into destination\t\t|\n");
	printf("\t| 21. StrCpyToggle(char *src , char *dest)  \t\t- Toggles the string and store it into destination string\t\t\t|\n");
	printf("\t| 22. StrCntVowels(char *str)\t\t\t\t- Returns the count of vowels in the string\t\t\t\t\t|\n");
	printf("\t| 23. StrChkVowels(char *str)\t\t\t\t- Returns 1 if an vowel is present else return 0\t\t\t\t|\n");
	printf("\t| 24. StrCntConsonents(char *str)\t\t\t- Returns the count of consonents\t\t\t\t\t\t|\n");
	printf("\t| 25. StrSort(char *str) \t\t\t\t- Sorts the string alphabetically\t\t\t\t\t\t|\n");
	printf("\t| 26. StrSortRev(char *str)\t\t\t\t- Sorts the string alphabetically but in reverse\t\t\t\t|\n");
	printf("\t| 27. StrRemoveNum(char *str)\t\t\t\t- Removes number from the string \t\t\t\t\t\t|\n");
	printf("\t| 28. StrReplaceChar(char *str,char ch1,char ch2)\t- Replace an alphabet in the following string\t\t\t\t\t|\n");
	printf("\t----------------------------------------------------------------------------------------------------------------------------------------\n");
}

/////////////////////////////////////////////////////////////
//Reverse the String
////////////////////////////////////////////////////////////
void StrRevX(char *str)
{
	char *start=str;
	char *end = str;
	
	while(*end !='\0')
	{
		end++;
	}
	end--;
	
	while(start <= end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

////////////////////////////////////////////////////////////
//convert string into lower case
////////////////////////////////////////////////////////////
void StrLwrX(char *str)
{
	while(*str != '\0')
	{
		if(*str >='A' && *str<='Z')
		{
			*str = *str + 32;
		}
		str++;
	}
}

////////////////////////////////////////////////////////////
//convert string into upper case
////////////////////////////////////////////////////////////
void StrUprX(char *str)
{
	while(*str !='\0')
	{
		if(*str >= 'a' && *str<='z')
		{
			*str = *str - 32;
		}
		str++;
	}
}

////////////////////////////////////////////////////////////
//returns the length of string
////////////////////////////////////////////////////////////
int StrLenX(char *  str)
{
	int icnt=0;
	while(*str != '\0')
	{	
		icnt++;
		str++;
	}
	return icnt;
}

////////////////////////////////////////////////////////////
//returns count of upper case of String   
////////////////////////////////////////////////////////////
int StrCountUpper(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if(*str >= 'A'  && *str <= 'Z')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

////////////////////////////////////////////////////////////
//returns count of lower case of String   
////////////////////////////////////////////////////////////
int StrCountLower(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if(*str >= 'a'  && *str <= 'z')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

////////////////////////////////////////////////////////////
//Displays the string 
////////////////////////////////////////////////////////////
void DisplayX(char *str)
{
	while(*str !='\0')
	{
		printf("%c",*str);
		str++;
	}
}

///////////////////////////////////////////////////////////////
//compares two string if same returns 0
///////////////////////////////////////////////////////////////
int StrCmpX(char *str1,char *str2)
{
	int flag=0;
	while(*str1 !='\0')
	{
		if(*str1==*str2)
		{
			str1++;
			str2++;
		}
		else
		{
			flag=1;
			break;
		}
	}
	return flag;
}

//////////////////////////////////////////////////////////////////////
//Copy contents of 2nd string into first string
/////////////////////////////////////////////////////////////////////
void StrCpyX(char *str1,char *str2)
{
	while(*str2 !='\0')
	{
		*str1 = *str2;
		
		str1++;
		str2++;
	}
}

//////////////////////////////////////////////////////////////////////
//concats both string into str1
//////////////////////////////////////////////////////////////////////
void StrCatX(char *str1,char *str2)
{
	while(*str1 != '\0')
	{
		str1++;
	}
	
	while(*str2 !='\0')
	{
		*str1 = *str2;
		str2++;
		str1++;
		
	}
	*str1='\0';
}

//////////////////////////////////////////////////////////////////////
//returns count of particular character
//////////////////////////////////////////////////////////////////////
int StrCntFrequency(char *str,char *num)
{
	int iCnt=0;
	
	while(*str !='\0')
	{
		if(*str == *num)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

//////////////////////////////////////////////////////////////////////
//Toggle the string 
//////////////////////////////////////////////////////////////////////
void StrToggleX(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'A' && *str<='Z')
		{
			*str = *str+32;
		}
		else if(*str >= 'a' && *str<='z')
		{
			*str = *str-32;
		}
		
		str++;
	}
}

///////////////////////////////////////////////////////////////////////////////////
//returns the count of following character in string
//////////////////////////////////////////////////////////////////////////////////
int CountOccurance(char *str , char num)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str == num) || ((*str) == (num+32)) || ((*str) == (num-32)) )
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}


///////////////////////////////////////////////////////////////////////////////////
//returns Position of character first occured
///////////////////////////////////////////////////////////////////////////////////
int FirstOccurance(char *str,char ch)
{
	int Position = 1;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
		Position++;
	}
	
	return Position;
}

///////////////////////////////////////////////////////////////////////////////////
//returns Position of character last occured
///////////////////////////////////////////////////////////////////////////////////
int LastOccurance(char *str, char ch)
{
	int Pos = 1;
	int LastPos=0;
	
	while(*str !='\0')
	{
		if(*str == ch)
		{
			LastPos=Pos;
		}
		str++;
		Pos++;
	}
	
	return LastPos;
}

///////////////////////////////////////////////////////////////////////////////////
//Copies str1 data into str2 upto given num
///////////////////////////////////////////////////////////////////////////////////
void StrNcpyX(char *str1,char *str2,int num)
{
	while(num >0)
	{
		*str2 = *str1;
		
		str2++;
		str1++;
		num--;
	}
	*str2='\0';
}

///////////////////////////////////////////////////////////////////////////////////
//Copies Capital letters from source into destination
///////////////////////////////////////////////////////////////////////////////////
void StrCpyCap(char *src, char *dest)
{
     	while(*src != '\0')
     	{
     		if((*src >='A') && (*src<='Z'))
         	{
              		*dest = *src;
             		 dest++;
         	}
         	*src++;
     	}   
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//Concats two strings just with space in between and stores in source
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void StrSpaceCatX(char *src, char *dest)
{
     	while(*src != '\0')
     	{
        	src++;
     	}
     	
     	*src = ' ';
     	src++;
     	
    	 while(*dest != '\0')
     	{
     	  	*src = *dest;
         	src++;
         	dest++;
     	}
     	*src='\0';
}

/////////////////////////////////////////////////////////////////////////////////////////
//Reverse the string of source and store it into destination
/////////////////////////////////////////////////////////////////////////////////////////
void StrCpyRev(char *src , char *dest)
{
    	int iCnt = 0;
    
    	while(*src != '\0')
    	{
       	src++;
       	iCnt++;
    	}
    	src--;
    
    	for(int i=0;i<iCnt ; i++)
    	{
       	 *dest = *src;
        	*dest++;
        	*src--;
    	}
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Removes all spaces in the string and store the string into destination
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void StrSpaceRemoval(char *src , char *dest)
{
      while(*src != '\0')
      {
          if(*src == ' ')
          {
             src++;
             continue;
          }
          else
          {
             *dest = *src;
          }
          src++;
          dest++;
      }
      dest='\0';
}

//////////////////////////////////////////////////////////////////////////////////////
//Toggles the string and store it into destination string
//////////////////////////////////////////////////////////////////////////////////////
void StrCpyToggle(char *src , char *dest)
{
      	while(*src != '\0')
      	{
        	if(*src >= 'A' && *src <= 'Z')
          	{
             		*dest = *src+32;  
          	}
          	else if(*src >= 'a' && *src <= 'z')
          	{
             		*dest = *src-32;
          	}
          	else
          	{
             		*dest = *src;
          	}
          	src++;
          	dest++;
      }
      dest='\0';
}

//////////////////////////////////////////////////////////////////////////////////////
//returns the count of vowels in the string 
//////////////////////////////////////////////////////////////////////////////////////
int StrCntVowels(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str == 'a')|| (*str == 'e')|| (*str == 'i')|| (*str == 'o')|| (*str == 'u')|| (*str == 'A')|| (*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////
//Returns 1 if vowel found in string else 0
//////////////////////////////////////////////////////////////////////////////////////
int StrChkVowels(char *str)
{
	int flag=0;
	
	while(*str != '\0')
	{
		if((*str == 'a')|| (*str == 'e')|| (*str == 'i')|| (*str == 'o')|| (*str == 'u')|| (*str == 'A')|| (*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
		{
			flag=1;
			break;
		}
		str++;
	}
	
	return flag;
}

//////////////////////////////////////////////////////////////////////////////////////
//Returns count of consonent in the string
//////////////////////////////////////////////////////////////////////////////////////
int StrCntConsonents(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str == 'a')|| (*str == 'e')|| (*str == 'i')|| (*str == 'o')|| (*str == 'u')|| (*str == 'A')|| (*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
		{
			str++;
		}
		else
		{
			iCnt++;
			str++;
		}
	}
	return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////
//Sorts the string alphabetically
//////////////////////////////////////////////////////////////////////////////////////
void StrSort(char *str)
{
	int size = StrLenX(str);
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(str[i] > str[j])
			{
				int temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}


//////////////////////////////////////////////////////////////////////////////////////
//Sorts the string in reverse alphabetically
//////////////////////////////////////////////////////////////////////////////////////
void StrSortRev(char *str)
{
	int size = StrLenX(str);
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(str[i] > str[j])
			{
				int temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	
	char *start=str;
	char *end = str;
	
	while(*end !='\0')
	{
		end++;
	}
	end--;
	
	while(start <= end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
	
}

//////////////////////////////////////////////////////////////////////////////////////
//Removes numbers and special symbols from the string
//////////////////////////////////////////////////////////////////////////////////////
void StrRemoveNum(char *str)
{
	int size = StrLenX(str);
	int i=0;
	char str1[size];
	char *src=str;
	
	while(*src != '\0')
	{
		if(((*src>='A') && (*src<='Z')) || ((*src>='a') && (*src<='z')) || (*src ==' '))
		{
			str1[i]=*src;
			i++;
		}
		src++;
	}
	str1[i]='\0';
	
	i=0;
	while(str1[i] !='\0')
	{
		*str = str1[i];
		i++;
		str++;
	}
	*str='\0';
}

//////////////////////////////////////////////////////////////////////////////////////
//Replace a alphabet in a string 
//////////////////////////////////////////////////////////////////////////////////////
void StrReplaceChar(char *str,char ch1,char ch2 )
{
	while(*str != '\0')
	{
		if(*str == ch1)
		{
			*str = ch2;
		}
		
		str++;
	}
}


