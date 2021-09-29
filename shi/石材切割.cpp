#include "bits/stdc++.h"
using namespace std;
struct beiwanglu
{    
	int max_area=0;    
	vector<int> f; //切割石块记录
};

beiwanglu  C[1000][1000];  //备忘录填表

vector<int> W;   //待切割石材的宽，数组的下标就是每块石块的id
vector<int> H;   //待切割石材的高beiwanglu C[10000][10000];  //备忘录填表
int main_sheet_W,main_sheet_H,total_number;  //大石块的宽，高和待切割石块的数量//寻找当前石块有没有被标志过，没有被标志过返回1


int notfind(int k,vector<int> vec){
    vector<int>::iterator ret;
    ret = std::find(vec.begin(), vec.end(), k);
    if(ret != vec.end())
    	return 0;
    else
        return 1;
}//动态规划填表


int work(){
    memset(C, 0, sizeof(C));
    for(int i=1;i<=main_sheet_W;i++)       //二维数组填表,i为当前石块w，j为当前石块h，k为递归方程中的i
        for(int j=1;j<=main_sheet_H;j++)        
		{            
		//C1(w,h)=max{si+C(w-wi,hi)+C(w,h-hi):1<=i<=n} 
		//C2(w,h)=max{si+C(w-wi,h)+C(wi,h-hi):1<=i<=n}            
		double C1=0,flag1=0,C2=0,flag2=0;            
	
		//横切     
		for(int k=1;k<=total_number;k++){ 
		   if(i-W[k]>=0 && j-H[k]>=0 && notfind(k,C[i-W[k]][H[k]].f) && notfind(k,C[i][j-H[k]].f)){  
             	if(W[k]*H[k]+C[i-W[k]][H[k]].max_area+C[i][j-H[k]].max_area>C1){       
				    C1 = W[k]*H[k]+C[i-W[k]][H[k]].max_area+C[i][j-H[k]].max_area; 
					flag1 = k;
		 		}             
	    	}            
		}           
		 //竖切       
		for(int k=1;k<=total_number;k++){       
		    if(i-W[k]>=0 && j-H[k]>=0 && notfind(k,C[i-W[k]][j].f) && notfind(k,C[W[k]][j-H[k]].f)){   
				if(W[k]*H[k] + C[i-W[k]][j].max_area + C[W[k]][j-H[k]].max_area> C2){      
			 		C2 = W[k]*H[k] + C[i-W[k]][j].max_area + C[W[k]][j-H[k]].max_area;    
			        flag2 = k;
	            }
	        }            
		}     
		
		
		if(flag1==0 && flag2 ==0) 
			continue;  //如果都无法切割则填0，继续循环  
		if(C1>=C2){  //横切更好，将子问题的切割记录全部赋给C[i][j].f，并把当前石块追加    
			C[i][j].max_area = C1;              
		    C[i][j].f.insert(C[i][j].f.end(),C[i-W[flag1]][H[flag1]].f.begin(),C[i-W[flag1]][H[flag1]].f.end());   
	        C[i][j].f.insert(C[i][j].f.end(),C[i][j-H[flag1]].f.begin(),C[i][j-H[flag1]].f.end());     
			C[i][j].f.push_back(flag1);  
		}else{    //竖切更好             
			C[i][j].max_area = C2;          
			C[i][j].f.insert(C[i][j].f.end(),C[i-W[flag2]][j].f.begin(),C[i-W[flag2]][j].f.end());   
	     	C[i][j].f.insert(C[i][j].f.end(),C[W[flag2]][j-H[flag2]].f.begin(),C[W[flag2]][j-H[flag2]].f.end());      
	        C[i][j].f.push_back(flag2);
	    }            //如果全部切完，则直接返回，进行剪枝     
		sort(C[i][j].f.begin(),C[i][j].f.end());      
		if(C[i][j].f.size()==total_number){            
			cout<<"全部切完"<<endl;
			return 1;         
		}        
	}    
	return 0;
}//打印备忘录

void print(){    
	for(int i=1;i<=main_sheet_W;i++) {    
	    for (int j = 1; j <= main_sheet_H; j++)        
		    cout << C[i][j].max_area << " ";
		cout << endl;    
	}
}
//打印vector，切割的石块
void printvec( vector<int> vector1){ 
	for(int i=0 ;i<vector1.size();i++)      
  		cout<<W[vector1[i]]<<"*"<<H[vector1[i]]<<endl;  
	cout<<endl;
}
int main() { 
	W.push_back(0),H.push_back(0);  //第一个不用  
	cout<<"输入切割石材的宽和高：";    
	cin>>main_sheet_W>>main_sheet_H; 
	cout<<"输入待切割石材的数量:";  
	cin>>total_number;   
	for(int i=0;i<total_number;i++){//        cout<<"输入小石块的宽和高:"; 
		double w,h;  
		cin>>w>>h;   
		W.push_back(w); 
		H.push_back(h);   
	}    
	int flag = work();  //    
	cout<<"备忘录:"<<endl;//   

	 
	if(flag == 0) {  
		//如果没有全部切完的话计算利用率     
		cout << C[main_sheet_W][main_sheet_H].max_area << endl;    
		cout << "利用率" << C[main_sheet_W][main_sheet_H].max_area / double((main_sheet_W * main_sheet_H))<<endl;   
		cout << "切割的石块为:"<<endl;     
		printvec(C[main_sheet_W][main_sheet_H].f);  //C[main_sheet_W][main_sheet_H].f存放着已经切割石块的id   
	}    
	return 0;
}
