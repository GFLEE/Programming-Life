#include "iostream"
using namespace std;
#include "stdlib.h"

int main()
{
	
	FILE *fp;
	FILE *write;
	
	long int total=0;
	long int arr[67]={0};      //, arr-z ,arr-Z && ' '
	double prob[67]={0};   // single word probibility
    fp=fopen("sample.txt","r");
//    write=fopen("prob_char.txt","w");
	write=fopen("prob.txt","w");
    
    long int others=0;
    char chracters[67]={
	'-','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
    'r','s','t','u','v','w','x','y','z',
	'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z',
	'0','1','2','3','4','5','6','7','8','9',',','.',';','-'};
    
    char ch=fgetc(fp);
    while(ch!=EOF)
    {
//    	cout<<ch;
    	switch(ch){
    		case ' ': arr[0]+=1; break;
    		case 'a': arr[1]+=1; break;
    		case 'b': arr[2]+=1; break; 
    		case 'c': arr[3]+=1; break; 
    		case 'd': arr[4]+=1; break; 
    		case 'e': arr[5]+=1; break; 
    		case 'f': arr[6]+=1; break; 
    		case 'g': arr[7]+=1; break; 
    		case 'h': arr[8]+=1; break; 
    		case 'i': arr[9]+=1; break; 
    		case 'j': arr[10]+=1; break;
    		case 'k': arr[11]+=1; break;
    		case 'l': arr[12]+=1; break;
    		case 'm': arr[13]+=1; break;
    		case 'n': arr[14]+=1; break;
    		case 'o': arr[15]+=1; break;
    		case 'p': arr[16]+=1; break;
    		case 'q': arr[17]+=1; break;
    		case 'r': arr[18]+=1; break;
    		case 's': arr[19]+=1; break;
    		case 't': arr[20]+=1; break;
    		case 'u': arr[21]+=1; break;
    		case 'v': arr[22]+=1; break;
			case 'w': arr[23]+=1; break;
			case 'x': arr[24]+=1; break;
			case 'y': arr[25]+=1; break;
			case 'z': arr[26]+=1; break;
			case 'A': arr[27]+=1; break;
			case 'B': arr[28]+=1; break;
			case 'C': arr[29]+=1; break;
			case 'D': arr[30]+=1; break;
			case 'E': arr[31]+=1; break;
			case 'F': arr[32]+=1; break;
			case 'G': arr[33]+=1; break;
			case 'H': arr[34]+=1; break;
			case 'I': arr[35]+=1; break;
			case 'J': arr[36]+=1; break;
			case 'K': arr[37]+=1; break;
			case 'L': arr[38]+=1; break;
			case 'M': arr[39]+=1; break;
			case 'N': arr[40]+=1; break;
			case 'O': arr[41]+=1; break;
			case 'P': arr[42]+=1; break;
			case 'Q': arr[43]+=1; break;
			case 'R': arr[44]+=1; break;
			case 'S': arr[45]+=1; break;
			case 'T': arr[46]+=1; break;
			case 'U': arr[47]+=1; break;
			case 'V': arr[48]+=1; break;
			case 'W': arr[49]+=1; break;
			case 'X': arr[50]+=1; break;
			case 'Y': arr[51]+=1; break;
			case 'Z': arr[52]+=1; break;
			case '0': arr[53]+=1; break;
			case '1': arr[54]+=1; break;
			case '2': arr[55]+=1; break;
			case '3': arr[56]+=1; break;
			case '4': arr[57]+=1; break;
			case '5': arr[58]+=1; break;
			case '6': arr[59]+=1; break;
			case '7': arr[60]+=1; break;
			case '8': arr[61]+=1; break;
			case '9': arr[62]+=1; break;
			case ',': arr[63]+=1; break;
			case '.': arr[64]+=1; break;
			case ';': arr[65]+=1; break;
            case '\n': arr[66]+=1; break;
            default : others++; break;

		}
    	
    	
    	    	total++;

		ch=getc(fp); 
	}
	
	fclose(fp);
	
	for(int i=0;i<67;i++)
	{
		
		cout<<arr[i]<<endl;
	}
	
		cout<<endl<<"total: "<<total<<endl;
		cout<<endl<<"others: "<<others<<endl;
		cout<<endl<<"actually: "<<total-others<<endl;

	cout<<endl<<endl;
	for(int k=0;k<67;k++)
	{
		prob[k]=arr[k]/(double)(total-others);
	}
//	
//	for(int k=0;k<66;k++)
//	{
//		cout<<prob[k]<<endl;;
//	}
	


		for(int i=0;i<67;i++)
		{
			
			fprintf(write,"%.20f\n",prob[i]); 

//			fprintf(write,"\t%.40f\t\t%c\n\n",prob[i],chracters[i]); 
	
		}

		
	
	
	fclose(write);
	
	
	
	
	
	return 0;
	
}
