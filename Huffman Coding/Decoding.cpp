 #include "iostream" 
 using namespace std;
 #define MAX 20
 
 
 int main(){
 	
 	
 	FILE *fp;
 	
 	char chr[67]={
	'-','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
    'r','s','t','u','v','w','x','y','z',
	'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z',
	'0','1','2','3','4','5','6','7','8','9',',','.',';','-'};
 	
 	fp=fopen("huffman_table.txt","r");
 	
 	int table[MAX][MAX]={2};
 	
 	char ch;
 	int code;
// 	cout<<ch<<endl;
 	
 	for(int i=0;i<67;i++)
 	{
 		
 		
 		int j=0;
 		fscanf(fp,"%d",&code);
          ch=(char)code;
 		 while(ch!='\n')
 		 {
 		 	
 		 	table[i][j]=code;
 		 	fscanf(fp,"%d",&code);
 		 	ch=code;
 		 	j++;	
		  }
	 }
// 	
 	for(int i=0;i<67;i++)
 	{
 		
 		for(int k=0;k<20;k++)
 		{
 		   cout<<table[i][k];
		 		
		 }
		 
		 
		 cout<<endl;
		 
 		
	 }
 	
 	
 	fclose(fp); 	
 	
 	return 0;
 }
