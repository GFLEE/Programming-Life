#include "iostream"
using namespace std;
#include <stdio.h>
#define MAX 100
#define weight_MAX 32767
#define N 100      //max huffman coding length

typedef struct    //tree  Node stucture
{
	
	int data;
	double weight;
	int parent;
	int LNode;
	int RNode;

}HTNode;
//=====================huffman code arrar============================
typedef struct {
	
	int code[N];
	int start;
	
}HCode;
//==================================================================
void createHT(HTNode ht[],int n)  
{
		for(int i=0;i<2*n-1;i++)     //all the tree nodes initiate
	{
		ht[i].parent=ht[i].LNode=ht[i].RNode=-1;
	}
//======================================

//create Huffman tree
for(int m=n;m<2*n-1;m++)    // load data to nomal node ('n' to last node )   
	{

	double min1,min2;     //the minimum weight of two of all the leaf nodes.
	    min1=min2=weight_MAX;	
	
	int leftNode,rightNode;   //confirm  the final left or right node  location
		leftNode=rightNode=-1;
	
	for(int i=0;i<m;i++)     //select minimum weight of two from leaf nodes and new node has no parent.
	{
		if(ht[i].parent==-1)    //choose the left/right child node from  node which has no parent
		{
			if(ht[i].weight<min1)    //send the current_data to right part,then recieve the less weight node
			{
				min2=min1;
				min1=ht[i].weight;
				rightNode=leftNode; 
//				rightNode=leftNode;   //jesus!
				leftNode=i;
				
			}
			else if(ht[i].weight<min2)     //min1 doesnt need the node that weight greater than itself. 
		//but the weight less than min2,so min2 will recieve this node_weight
			{
				min2=ht[i].weight;
				rightNode=i;
			}
			//if the weight greater than min1&min2,still choose two minimum weight,because the min1&min2 have return to 32767 
			
		}	
	}
	//========build a relationship between and childs============
	ht[m].weight=ht[leftNode].weight+ht[rightNode].weight;
	ht[m].LNode=leftNode;
	ht[m].RNode=rightNode;
	
	ht[leftNode].parent=m;
	ht[rightNode].parent=m;


	}	
}

//===================================huffman coding at 2018.06.9=======================================

//note: left->0   ;  right->1

int HfCoding(HTNode ht[],HCode hfcode[],int n)         // 'n' is the counts of leaf nodes;
{
	
	HCode temp_hfcode;
	
	for(int k=0;k<N;k++)
	{
		temp_hfcode.code[k]=2;
	}
	
	int father;
	int current;
	
	for(int i=0;i<n;i++)      //start coding for each leaf node;
	{
		for(int k=0;k<N;k++)
	{
		temp_hfcode.code[k]=2;
	}
		temp_hfcode.start = N-1;    //load coding numbers from end to head,(satrt--)
		current=i;              //coding for one node ,need to initiate the current_location &parent'location 
		father=ht[i].parent;        
		
		while(father!=-1)
		{ 
		
		if(ht[father].LNode==current)
		{
			temp_hfcode.code[temp_hfcode.start--]=0;
		}
		else
		{
			temp_hfcode.code[temp_hfcode.start--]=1;

		}
		  
		 current = father;     //father  for the next judge	
		 father = ht[current].parent;
		
		//bug report:
//		  current = ht[i].parent;     //father  for the next judge	
//		  father = ht[current].parent; 
			
		}        // now,one leaf node coding finished!
	
			temp_hfcode.start++;
			hfcode[i] = temp_hfcode;  //save one leaf node's coding to the array that save all nodes's huffman code.
		     //revise the right starting  location of the huffman codes.
		
	}

	
	return 0;
}



//============================================================================================--===
int main()
{
	HTNode ht[MAX];
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//=========================element test =============================	
//     
//	ht[0].weight=0.1;
//	ht[1].weight=0.2;
//	ht[2].weight=0.3;
//	ht[3].weight=0.4;
////    ht[4].weight=9;
//
//	 
//	createHT(ht,4);
//	
//	
//
//	  for(int k=0;k<7;k++)
//	  {
//	  	cout<<ht[k].weight<<',';
//	  }
//	  
//	  cout<<endl<<ht[4].RNode<<endl;
//	  
////	  cout<<ht[7].weight<<','<<ht[8].weight<<endl;
////cout<<ht[0].parent<<','<<ht[5].parent<<','<<ht[6].parent<<','<<ht[7].parent<<','<<ht[8].parent<<','<<ht[3].parent<<','<<ht[4].parent;
//	  
//	  HCode hfcodes[4];
////	  
//	  HfCoding(ht,hfcodes,4);
////	  
//	  cout<<endl;
//	  
//	  for(int i=0;i<4;i++)
//	  {
//	  	cout<<endl;
//	  	for(int j=hfcodes[i].start;j<N;j++)
//	  	{
//	  		cout<<hfcodes[i].code[j]<<',';
//		  }
//	  	
//	  }
//==================================test down=========================================


	  
	  
	return  0;
 } 
