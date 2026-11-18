#include<iostream>
#include<vector> 
#include<algorithm>
#include<list>
#include<forward_list>
#include<cstdlib>
#include<ctime>
#include<chrono>
using namespace std;

template<typename T>
void down(T data[], int i, int size ){ 

int n=size + 1;

while(true)
{ int l=2*i+1,r=l+1,m=i;

if(l<n&&data[l]>data[m]) 
	m=l;

if(r<n&&data[r]>data[m]) 
	m=r;

if(m==i) 
	return;
	
	std::swap(data[i],data[m]); 
	i=m; } 
	
	}

	  
	template<typename T>
void heaping__sorting(T a[], int n)
{
	for(int i = n/2 - 1; i>=0; i--)
	{
  
	down(a, i, n-1);               
	}
	
	for(int i = n-1; i>0; i--){	
		std::swap(a[0], a[i]);
		down(a, 0, i-1);

	}

	
}


	  
template<typename T>
void insertion_sort(vector<T>&a)
{
    for(int i = 1; i<a.size(); i++)
    {
        T num = a[i];
        int j = i-1;
        
        while(j>=0&&num<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        
        a[j+1] = num;
        
    }
}
	



int main()
{
    vector<int> A, B, C, E, F, G;
    list<int>  A1, B1, C1, E1, F1, G1;
    forward_list<int>  A2, B2, C2, E2, F2, G2;



        cout<<"Ascending Insertion"<<endl;

    //vector Ascending
   auto start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
        A.push_back(i);
    auto end = chrono::steady_clock::now();
    chrono::duration<double,milli>t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;


    //List Ascending
    start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
        A1.push_back(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;

   
   //forward_list Ascending
   start = chrono::steady_clock::now();
    for (int i = 100000; i >= 1; i--)
        A2.push_front(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
 
 cout<<"Descending Insertion"<<endl;
    //vector Descending
    start = chrono::steady_clock::now();
    for (int i = 100000; i >= 1; i--)
        B.push_back(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
 

    //List Descending
    start = chrono::steady_clock::now();
    for (int i = 100000; i >= 1; i--)
        B1.push_back(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;


    //forward_list Descending
    start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
        B2.push_front(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;


   
   
    srand(time(0));
    
     cout<<"Random Insertion"<<endl;
    
     //Random Inserting vector
     start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
    {
       
       // C2.push_front(num);
        C.push_back(rand());
        //C1.push_back(num);
    }
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    
    //Random Inserting List
     start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
    {
       
        C1.push_back(rand());
    }
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    
    //Random Inserting Forward List
     start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
    {
       
        C2.push_front(rand());
    }
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    


         cout<<"sorting"<<endl;
    start = chrono::steady_clock::now();
    sort(A.begin(), A.end());
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
   
   
  start = chrono::steady_clock::now();
    sort(B.begin(), B.end());
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    sort(C.begin(), C.end());
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    start = chrono::steady_clock::now();
    A1.sort();
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    start = chrono::steady_clock::now();
    B1.sort();
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    C1.sort();
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
   
   
    start = chrono::steady_clock::now();
    A2.sort();
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    B2.sort();
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    C2.sort();
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
     cout<<"Ascending Insertion"<<endl;
    //vector Ascending
    start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
        E.push_back(i);
        end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;


    //List Ascending
    start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
        E1.push_back(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    

    //forward_list Ascending
    start = chrono::steady_clock::now();
    for (int i = 100000; i >= 1; i--)
        E2.push_front(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;


     cout<<"Descending Insertion"<<endl;

    //vector Descending
    start = chrono::steady_clock::now();
    for (int i = 100000; i >= 1; i--)
        F.push_back(i);
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;



    //List Descending
    start = chrono::steady_clock::now();
    for (int i = 100000; i >= 1; i--)
        F1.push_back(i);
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;




    //forward_list Descending
    start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
        F2.push_front(i);
         end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
        
        
        
         cout<<"Random Insertion"<<endl;

  srand(time(0));
    
     //Random Inserting vector
     start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
    {

        G.push_back(rand());
      
    }
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    
    //Random Inserting List
     start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
    {
       
        G1.push_back(rand());
    }
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    
    //Random Inserting Forward List
     start = chrono::steady_clock::now();
    for (int i = 1; i <= 100000; i++)
    {
       
        G2.push_front(rand());
    }
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    

 cout<<"Removing odds"<<endl;

    start = chrono::steady_clock::now();
    erase_if(E, [](int x) {    return x % 2 != 0;  });
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    erase_if(E1, [](int x) {    return x % 2 != 0;  });
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    erase_if(E2, [](int x) {    return x % 2 != 0;  });
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
     start = chrono::steady_clock::now();
    erase_if(F, [](int x) {    return x % 2 != 0;  });
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    erase_if(F1, [](int x) {    return x % 2 != 0;  });
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
     start = chrono::steady_clock::now();
    erase_if(F2, [](int x) {    return x % 2 != 0;  });
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
     start = chrono::steady_clock::now();
    erase_if(G, [](int x) {    return x % 2 != 0;  });
    end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    start = chrono::steady_clock::now();
    erase_if(G1, [](int x) {    return x % 2 != 0;  });
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
     start = chrono::steady_clock::now();
    erase_if(G2, [](int x) {    return x % 2 != 0;  });
     end = chrono::steady_clock::now();
    t = end-start;
    cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    
    
    cout<<"Heapify Sorting"<<endl;
    
     
     start = chrono::steady_clock::now(); //comment the STL SORT for accurate time measurement for objects of this container
    heaping__sorting(A.data(),A.size());
    end = chrono::steady_clock::now();
     t = end-start;
     cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
     
     
    start = chrono::steady_clock::now(); 
    heaping__sorting(B.data(),B.size());
    end = chrono::steady_clock::now();
     t = end-start;
     cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
     
     
    start = chrono::steady_clock::now(); 
    heaping__sorting(C.data(),C.size());
     end = chrono::steady_clock::now();
     t = end-start;
     cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
     
     
     
     
      cout<<"Insertion Sorting"<<endl;    //comment the erase if functions for accurate time measurement for objects of this container
    start = chrono::steady_clock::now(); 
    insertion_sort(E);
    end = chrono::steady_clock::now();
     t = end-start;
     cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    
    
    start = chrono::steady_clock::now(); 
    insertion_sort(F);
    end = chrono::steady_clock::now();
     t = end-start;
     cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
     
     
     
       start = chrono::steady_clock::now(); 
    insertion_sort(G);
      end = chrono::steady_clock::now();
     t = end-start;
     cout<<"Execution Time for this operation is: "<<t.count()<<"ms"<<endl;
    
    


}