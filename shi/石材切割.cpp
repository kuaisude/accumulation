#include "bits/stdc++.h"
using namespace std;
struct beiwanglu
{    
	int max_area=0;    
	vector<int> f; //�и�ʯ���¼
};

beiwanglu  C[1000][1000];  //����¼���

vector<int> W;   //���и�ʯ�ĵĿ�������±����ÿ��ʯ���id
vector<int> H;   //���и�ʯ�ĵĸ�beiwanglu C[10000][10000];  //����¼���
int main_sheet_W,main_sheet_H,total_number;  //��ʯ��Ŀ��ߺʹ��и�ʯ�������//Ѱ�ҵ�ǰʯ����û�б���־����û�б���־������1


int notfind(int k,vector<int> vec){
    vector<int>::iterator ret;
    ret = std::find(vec.begin(), vec.end(), k);
    if(ret != vec.end())
    	return 0;
    else
        return 1;
}//��̬�滮���


int work(){
    memset(C, 0, sizeof(C));
    for(int i=1;i<=main_sheet_W;i++)       //��ά�������,iΪ��ǰʯ��w��jΪ��ǰʯ��h��kΪ�ݹ鷽���е�i
        for(int j=1;j<=main_sheet_H;j++)        
		{            
		//C1(w,h)=max{si+C(w-wi,hi)+C(w,h-hi):1<=i<=n} 
		//C2(w,h)=max{si+C(w-wi,h)+C(wi,h-hi):1<=i<=n}            
		double C1=0,flag1=0,C2=0,flag2=0;            
	
		//����     
		for(int k=1;k<=total_number;k++){ 
		   if(i-W[k]>=0 && j-H[k]>=0 && notfind(k,C[i-W[k]][H[k]].f) && notfind(k,C[i][j-H[k]].f)){  
             	if(W[k]*H[k]+C[i-W[k]][H[k]].max_area+C[i][j-H[k]].max_area>C1){       
				    C1 = W[k]*H[k]+C[i-W[k]][H[k]].max_area+C[i][j-H[k]].max_area; 
					flag1 = k;
		 		}             
	    	}            
		}           
		 //����       
		for(int k=1;k<=total_number;k++){       
		    if(i-W[k]>=0 && j-H[k]>=0 && notfind(k,C[i-W[k]][j].f) && notfind(k,C[W[k]][j-H[k]].f)){   
				if(W[k]*H[k] + C[i-W[k]][j].max_area + C[W[k]][j-H[k]].max_area> C2){      
			 		C2 = W[k]*H[k] + C[i-W[k]][j].max_area + C[W[k]][j-H[k]].max_area;    
			        flag2 = k;
	            }
	        }            
		}     
		
		
		if(flag1==0 && flag2 ==0) 
			continue;  //������޷��и�����0������ѭ��  
		if(C1>=C2){  //���и��ã�����������и��¼ȫ������C[i][j].f�����ѵ�ǰʯ��׷��    
			C[i][j].max_area = C1;              
		    C[i][j].f.insert(C[i][j].f.end(),C[i-W[flag1]][H[flag1]].f.begin(),C[i-W[flag1]][H[flag1]].f.end());   
	        C[i][j].f.insert(C[i][j].f.end(),C[i][j-H[flag1]].f.begin(),C[i][j-H[flag1]].f.end());     
			C[i][j].f.push_back(flag1);  
		}else{    //���и���             
			C[i][j].max_area = C2;          
			C[i][j].f.insert(C[i][j].f.end(),C[i-W[flag2]][j].f.begin(),C[i-W[flag2]][j].f.end());   
	     	C[i][j].f.insert(C[i][j].f.end(),C[W[flag2]][j-H[flag2]].f.begin(),C[W[flag2]][j-H[flag2]].f.end());      
	        C[i][j].f.push_back(flag2);
	    }            //���ȫ�����꣬��ֱ�ӷ��أ����м�֦     
		sort(C[i][j].f.begin(),C[i][j].f.end());      
		if(C[i][j].f.size()==total_number){            
			cout<<"ȫ������"<<endl;
			return 1;         
		}        
	}    
	return 0;
}//��ӡ����¼

void print(){    
	for(int i=1;i<=main_sheet_W;i++) {    
	    for (int j = 1; j <= main_sheet_H; j++)        
		    cout << C[i][j].max_area << " ";
		cout << endl;    
	}
}
//��ӡvector���и��ʯ��
void printvec( vector<int> vector1){ 
	for(int i=0 ;i<vector1.size();i++)      
  		cout<<W[vector1[i]]<<"*"<<H[vector1[i]]<<endl;  
	cout<<endl;
}
int main() { 
	W.push_back(0),H.push_back(0);  //��һ������  
	cout<<"�����и�ʯ�ĵĿ�͸ߣ�";    
	cin>>main_sheet_W>>main_sheet_H; 
	cout<<"������и�ʯ�ĵ�����:";  
	cin>>total_number;   
	for(int i=0;i<total_number;i++){//        cout<<"����Сʯ��Ŀ�͸�:"; 
		double w,h;  
		cin>>w>>h;   
		W.push_back(w); 
		H.push_back(h);   
	}    
	int flag = work();  //    
	cout<<"����¼:"<<endl;//   

	 
	if(flag == 0) {  
		//���û��ȫ������Ļ�����������     
		cout << C[main_sheet_W][main_sheet_H].max_area << endl;    
		cout << "������" << C[main_sheet_W][main_sheet_H].max_area / double((main_sheet_W * main_sheet_H))<<endl;   
		cout << "�и��ʯ��Ϊ:"<<endl;     
		printvec(C[main_sheet_W][main_sheet_H].f);  //C[main_sheet_W][main_sheet_H].f������Ѿ��и�ʯ���id   
	}    
	return 0;
}
