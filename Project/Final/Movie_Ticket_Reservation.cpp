//Movie Ticket Reservation System
#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
ifstream fin;
ofstream fout;
class filec;
class Bill;
class structure //Base class
{
	private:
		//data members
		int ch,ch1,ch2,seat,no,n[10],cost,row[10],column[10],price,check;
		char n1,seatn[20];
	public:
		//member functions
	friend void file(Bill &t,filec &fobj);
		void login()
		{
		
			int i=0;
			char user[11],pass[25]={},ch;
			cout<<"\n\t\t\t\t\t\t_________________________________________________________\n";
			cout<<"\n\t\t\t\t\t\t\t##---------------WELCOME---------------##\n";
			cout<<"\n\t\t\t\t\t\t_________________________________________________________\n";
			cout<<"\n\tAdmin Login:\n";
			cout<<"\t-------------";
			label:
			i=0;
			cout<<"\n\n\t\tEnter username:-";
			fflush(stdin);
			gets(user);
			if(strcmp(user,"Bookmyshow")==0)
			{
				cout<<"\n\t\tEnter password:-";
				fflush(stdin);
				while((ch=getch())!=13)
				{
					pass[i]=ch;
				    i=i+1;
		    		cout<<"*";
		    	}pass[i]='\0';
				if(strcmp(pass,"Aditya@07")==0) 
				{
					cout<<"\n\n\t\tLogin access successful....!";
				}
				else
				{
					cout<<"\n\n\t\tInvalid Password";
					cout<<"\n\t\tLogin acess denied...Try after sometime";
			    	cout<<"\n\t\tPress any key to Try Again...";
					goto label;	
				}
	    	}	
	    	else if(strcmp(user,"Bookmyshow")!=0)
			{
				cout<<"\n\n\t\tInvalid Username";
				cout<<"\n\t\tLogin acess denied...Try after sometime";
			    cout<<"\n\t\tPress any key to Try Again...";
				goto label;	
			}
		}
    	char name[50],mon[10];
		int i,yr;
		char mob_no[10];
		void getdata()
		{
			home:
			cout<<"\t\tEnter your full Name:"; 
			fflush(stdin);
			gets(name);
	        cout<<"\t\tEnter the date of birth (DD-MON-YYYY):-";
	        fflush(stdin);
	        cin>>i>>mon>>yr;
	        if(yr>2005)
	        {
				cout<<"\n\tSorry! But you are not eligible for ticketing.";
				cout<<"\n\tpress any key to exit..";
				cout<<"\n\tPlease follow rules & try again....\n";
				cout<<"\t--------------------------------------------------\n\n";
				goto home;
			}
	        cout<<"\t\tEnter your Mob. No.:"; 
			fflush(stdin);
			gets(mob_no);
		}
		    void putdata()
		    {
		    	cout<<"\n\t\t\t\t_____________________________________________________________________________________________";
		    	cout<<"\n\t\t\t\tName-:"<<name; cout<<"\t\tDate of Birth-:"<<i<<"-"<<mon<<"-"<<yr;
				cout<<"\t\tMob. No.:"<<mob_no;
				cout<<"\n\t\t\t\t_____________________________________________________________________________________________\n";
			}
			void home_page()
			{
				cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
				cout<<"\n\t\t\t\t\t\t  ##---------------WELCOME to BOOK MY SHOW---------------##\n";
				cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
				cout<<"\n\tTicket Counteration:\n";
				cout<<"\t--------------------\n\n";
				getdata();
				cout<<"\n\t\t\t\t\t\t##--------------- |Movie Theatre| --------------##\n";
				cout<<"\t\t1.Cinemax Cinemas(CCM)\n\t\t2.MovieMax Cinemas\n\t\t3.LUXE Cinemas\n\t\t4.Nexus Vijaya Mall\n\t\t5.Sunset Drive-in Cinema";
				cout<<"\n\n\tEnter your choice: ";	cin>>ch;
				cout<<"\n\t\t\t\t\t\t##--------------- |Trending Movie List| --------------##\n";
				cout<<"\t________________________________________________________\n";
				cout<<"\t  Movie Name\t\t\t    Price\n";
				cout<<"\t            \t\tClassic\tPrime\tPrime +\n";
				cout<<"\t________________________________________________________\n";
				cout<<"\t1.Drishyam 2\t\t175Rs.\t250Rs.\t350Rs.\n\t2.Avatar\t\t144Rs.\t275Rs.\t417Rs.\t\n\t3.KGF 2\t\t\t169Rs.\t294Rs.\t460Rs.\n\t4.Black Panther\t\t198Rs.\t375Rs.\t470Rs.\n\t5.Charlie 777\t\t275Rs.\t433Rs.\t540Rs.";
				cout<<"\n\t________________________________________________________\n";
				cout<<"\n\n\tEnter your choice: ";	
				cin>>ch;
				switch(ch)
				{
					case 1:
					case 2:
					case 3:
					case 4:	
					case 5:	cout<<"\n\t\tEnter Movie Type:";
							cout<<"\n\t\t1.3D\n\t\t2.2D\n";
							cout<<"\n\tEnter your choice: ";
							cin>>ch1;
							cout<<"\n\t\t\t\t\t\t\t##---------------TIMING--------------##\n";
							cout<<"\t_________________________________________\n";
							cout<<"\t  Movie Name\t\tTime\n";
							cout<<"\t_________________________________________\n";
							cout<<"\t1.Drishyam 2\t\t9:00am-11:30am\n\t2.Avatar\t\t12:00pm-2:30pm\n\t3.KGF 2\t\t\t3:00pm-5:30pm\n\t4.Black Panther\t\t6:00pm-8:30pm\n\t5.Charlie 777\t\t9:00pm-11:30pm";
							cout<<"\n\t_________________________________________\n";
				}
			}
			void seats()
			{
				int i,j,k,h=0,l,flag=0;
				//DRISHYAM 2
				if(ch==1)
				{
					cout<<"\n\t\t\t\t\t\t\t##---------------Choose your seats--------------##";
					cout<<"\n                    Classic (175 Rs.)    "<<endl<<endl;
					// veiw of first two set of rows 
					for(i=1;i<7;++i)
	   				{	
						for(j=1;j<7;++j)
	   	   				{
		   	   				if(j==4)
			   	    		{
	   	  						cout<<"       ";
							}
							cout<<"["<<i<<" "<<j<<"]";					   	
						}
						cout<<"\n";		  
	   				}
					cout<<"\n"; 	
    				cout<<"                    Prime (250 Rs.)    "<<endl<<endl;
					// view of third and fourth set of rows   
					for(i=7;i<10;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	      				{
	   	  						cout<<"       ";
			 				}
			   				cout<<"["<<i<<" "<<j<<"]";
						}
						cout<<"\n";		  
	   				}  
	   				cout<<"\n";
	   				cout<<"                    Prime +  (350 Rs.)           "<<endl<<endl;
	   				// viw of last two set of rows
	   				for(i=10;i<12;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{
							if(j==3||j==5||j==7)
							{
								cout<<"   ";
							}
			   				cout<<"["<<i<<" "<<j<<"]";	   	
						}
						cout<<"\n";		  
	   				} 
	   				cout<<"\nHow many seats you want to book: ";
	   				cin>>no;
	   				for(k=0;k<no;++k)
					{	
						cout<<"\nEnter seat number to reserve(Row-Column): ";  // accept seat number 
						cin>>row[k]>>column[k];cout<<endl;	    
						// to disagree invalid seat number 
						for(i=0;i<12;++i)
	   					{
	   						for(j=0;j<6;++j)
	   	   					{
	   	   						if(i==row[k] && j==column[k])
	   	   	  					{
	   	   	  						h=1;
	   	   	  						break;
	    						}		
		    				}   
						}
						if(h!=1)
	  					{
	  						cout<<"\nSEAT RESERVATION CANCELLED";
							cout<<" INVALID SEAT NUMBER !!";
	  					}
					}	  
				} 			 
				//AVATAR 
				else if(ch==2)
				{
					cout<<"\n\t\t\t\t\t\t\t##---------------Choose your seats--------------##";
					cout<<"\n                    Classic (144 Rs.)    "<<endl<<endl;
					// veiw of first two set of rows 
					for(i=1;i<7;++i)
	   				{	
						for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    				{
	   	  						cout<<"       ";
							}
							cout<<"["<<i<<" "<<j<<"]";					   	
						}
						cout<<"\n";		  
	   				}
					cout<<"\n"; 	
    				cout<<"                    Prime (275 Rs.)    "<<endl<<endl;
					// view of third and fourth set of rows   
					for(i=7;i<10;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
	   	   					if(j==4)
	   	      				{
	   	  						cout<<"       ";
			 				}
			   				cout<<"["<<i<<" "<<j<<"]";				   	
			  			}
						cout<<"\n";		  
	   				}  
	   				cout<<"\n";
	   				cout<<"                    Prime +  (417 Rs.)           "<<endl<<endl;
	   				// viw of last two set of rows
	   				for(i=10;i<12;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
							if(j==3||j==5||j==7)
							{
								cout<<"   ";
							}
			   				cout<<"["<<i<<" "<<j<<"]";	   	
						}
						cout<<"\n";		  
	   				} 
	   				cout<<"\nHow many seats you want to book: ";
	   				cin>>no;
	   				for(k=0;k<no;++k)
					{				
						cout<<"\nEnter seat number to reserve(Row-Column): ";  // accept seat number 
						cin>>row[k]>>column[k];
						cout<<endl;
						// to disagree invalid seat number 
						for(i=0;i<12;++i)
	   					{
	   						for(j=0;j<6;++j)
	   	   					{
	   	   						if(i==row[k] && j==column[k])
	   	   	  					{
	   	   	  						h=1;
	   	   	  						break;
	    						}		
					    	}   
						}
						if(h!=1)
	  					{
	  						cout<<"\nSEAT RESERVATION CANCELLED";
							cout<<" INVALID SEAT NUMBER !!";
	  					}
					}
				}
				//KGF-2
				if(ch==3)
				{
					cout<<"\n\t\t\t\t\t\t\t##---------------Choose your seats--------------##";
					cout<<"\n                    Classic (169 Rs.)    "<<endl<<endl;
					// veiw of first two set of rows 
					for(i=1;i<7;++i)
	   				{	
						for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    				{
	   	  						cout<<"       ";
							}
							cout<<"["<<i<<" "<<j<<"]";					   	
						}
						cout<<"\n";		  
	   				}
					cout<<"\n"; 	
   					cout<<"                   Prime (294 Rs.)    "<<endl<<endl;
					// view of third and fourth set of rows   
					for(i=7;i<10;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
	   	   					if(j==4)
	   	      				{
	   	  						cout<<"       ";
			 				}
			   				cout<<"["<<i<<" "<<j<<"]";				   	
			  			}
						cout<<"\n";		  
	   				}  
	   				cout<<"\n";
	   				cout<<"                    Prime + (460 Rs.)         "<<endl<<endl;
	   				// viw of last two set of rows
	   				for(i=10;i<12;++i)
	   				{		
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
							if(j==3||j==5||j==7)
							{
								cout<<"   ";
							}
			   				cout<<"["<<i<<" "<<j<<"]";	   	
						}
						cout<<"\n";		  
	   				} 
	   				cout<<"\nHow many seats you want to book: ";
	   				cin>>no;
	    			for(k=0;k<no;++k)
					{				
						cout<<"\nEnter seat number to reserve(Row-Column): ";  // accept seat number 
						cin>>row[k]>>column[k];
						cout<<endl;
						// to disagree invalid seat number 
						for(i=0;i<12;++i)
	   					{
	   						for(j=0;j<6;++j)
	   	   					{
	   	   						if(i==row[k] && j==column[k])
	   	   	  					{
	   	   	  						h=1;
	   	   	  						break;
	    						}		
		    				}   
						}	
						if(h!=1)
	  					{
						  	cout<<"\nSEAT RESERVATION CANCELLED";
							cout<<" INVALID SEAT NUMBER !!";
	  					}
					}
				}
				//Black Panther
				if(ch==4)
				{
					cout<<"\n\t\t\t\t\t\t\t##---------------Choose your seats--------------##";
					cout<<"\n                    Classic (198 Rs.)    "<<endl<<endl;
					// veiw of first two set of rows 
					for(i=1;i<7;++i)
	   				{	
						for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    				{
	   	  						cout<<"       ";
							}
							cout<<"["<<i<<" "<<j<<"]";					   	
						}
						cout<<"\n";		  
	   				}
					cout<<"\n"; 	
   					cout<<"                   Prime (375 Rs.)    "<<endl<<endl;
					// view of third and fourth set of rows   
					for(i=7;i<10;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
	   	   					if(j==4)
	   	      				{
	   	  						cout<<"       ";
			 				}
			   				cout<<"["<<i<<" "<<j<<"]";				   	
			  			}
						cout<<"\n";		  
	   				}  
	   				cout<<"\n";
	   				cout<<"                    Prime + (470 Rs.)         "<<endl<<endl;
	   				// viw of last two set of rows
	   				for(i=10;i<12;++i)
	   				{	
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
							if(j==3||j==5||j==7)
							{
								cout<<"   ";
							}
			   				cout<<"["<<i<<" "<<j<<"]";	   	
						}
						cout<<"\n";		  
	   				} 
	   				cout<<"\nHow many seats you want to book: ";
	   				cin>>no;
	   				for(k=0;k<no;++k)
					{				
						cout<<"\nEnter seat number to reserve(Row-Column): ";  // accept seat number 
						cin>>row[k]>>column[k];
						cout<<endl;
						// to disagree invalid seat number 
						for(i=0;i<12;++i)
	   					{
	   						for(j=0;j<6;++j)
	   	   					{
	   	   						if(i==row[k] && j==column[k])
	   	   	  					{
	   	   	  						h=1;
	   	   	  						break;
	    						}		
		    				}   
						} 	
						if(h!=1)
	  					{
	  						cout<<"\nSEAT RESERVATION CANCELLED";
							cout<<" INVALID SEAT NUMBER !!";
	  					}
					}
				}
				//Charlie 777
				if(ch==5)
				{
					cout<<"\n\t\t\t\t\t\t\t##---------------Choose your seats--------------##";
					cout<<"\n                    Classic (275 Rs.)    "<<endl<<endl;
					// veiw of first two set of rows 
					for(i=1;i<7;++i)
	   				{	
						for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    				{
	   	  						cout<<"       ";
							}
							cout<<"["<<i<<" "<<j<<"]";					   	
						}
						cout<<"\n";		  
	   				}
					cout<<"\n"; 	
    				cout<<"                    Prime (433 Rs.)    "<<endl<<endl;
					// view of third and fourth set of rows   
					for(i=7;i<10;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
	   	   					if(j==4)
	   	      				{
	   	  						cout<<"       ";
			 				}
			   				cout<<"["<<i<<" "<<j<<"]";				   	
			  			}
						cout<<"\n";		  
	   				}  
	   				cout<<"\n";
	   				cout<<"                    Prime +  (540 Rs.)           "<<endl<<endl;
	   				// viw of last two set of rows
	   				for(i=10;i<12;++i)
	   				{
	   					for(j=1;j<7;++j)
	   	   				{	   	   	
							if(j==3||j==5||j==7)
							{
								cout<<"   ";
							}
			   				cout<<"["<<i<<" "<<j<<"]";	   	
						}
						cout<<"\n";		  
	   				} 
	   				cout<<"\nHow many seats you want to book: ";
	   				cin>>no;
	   				for(k=0;k<no;++k)
					{				
						cout<<"\nEnter seat number to reserve(Row-Column): ";  // accept seat number 
						cin>>row[k]>>column[k];
						cout<<endl;
						// to disagree invalid seat number 
						for(i=0;i<12;++i)
	   					{
	   						for(j=0;j<6;++j)
	   	   					{
	   	   						if(i==row[k] && j==column[k])
	   	   	  					{
	   	   	  						h=1;
	   	   	  						break;
	    						}		
		    				}   
						} 	
						if(h!=1)
	  					{
	  						cout<<"\nSEAT RESERVATION CANCELLED";
							cout<<" INVALID SEAT NUMBER !!";
	  					}
					}	
				}
				//int i,j,k,l,flag=0;
				int A;
				cost=0;	
				if(ch==1)
				{		
					//for(int k=0;k<no;++k)
					{
						//	cout<<"\n                    Classic (175 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
   						{	   	
							for(j=1;j<7;++j)
   							{
   								if(j==4)
   								{
			   	  					//	cout<<"       ";
		 						}flag=0;
		 						for(l=0;l<no;l++)
		 						{
									if(i==row[l] && j==column[l])
   	   	  							{
   	   	  								cost=cost+175;
	   	   	  							flag=1;
	   	   	  							//	cout<<"[X X]";
				  					}
								}
								if(flag==1)
									price=1;
								else
			   						A=0;//	cout<<"["<<i<<" "<<j<<"]";			
		  					}
							//	cout<<"\n";		  
	   					}
						//	cout<<"\n"; 
    					//	cout<<"                   Prime (250 Rs.)    "<<endl<<endl;
						// view of third and fourth set of rows   
						for(i=7;i<10;++i)
						{
	   						for(j=1;j<7;++j)
					   	   	{
						   	   	if(j==4)
								{
	   		  						//	cout<<"       ";
			  					}
								flag=0;
			 					for(l=0;l<no;l++)
			 					{
									if(i==row[l] && j==column[l])
									{
										cost=cost+250;
		   	   	  						flag=1;
		   	   	  						//	cout<<"[X X]";
									}
								}
								if(flag==1)
									price=2;
								else
				  					A=0;// 	cout<<"["<<i<<" "<<j<<"]";
							}
							//	cout<<"\n";		  
						}  
	  					// 	cout<<"\n";
	 					//  	cout<<"                    Prime + (350 Rs.)         "<<endl<<endl;
	   					// viw of last two set of rows
	   					for(i=10;i<12;++i)
	   					{
		   					for(j=1;j<7;++j)
							{   	
								if(j==3||j==5||j==7)
								{
									//	cout<<"   ";
								}
								flag=0;
			 					for(l=0;l<no;l++)
			 					{
									if(i==row[l] && j==column[l])
									{
										cost=cost+350;
		   	   	  						flag=1;
		   	   	  						//	cout<<"[X X]";
									}
								}
								if(flag==1)
									price=3;
								else
									A=0;	   //	cout<<"["<<i<<" "<<j<<"]";
							}
							//	cout<<"\n";		  
						}
					}
				}
				if(ch==2)
				{
					//for(k=0;k<no;++k)
					{
						//	cout<<"\n                    Classic (144 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
		   				{	   	
							for(j=1;j<7;++j)
		   	   				{
		   	   					if(j==4)
	   	    					{
	   							  //	cout<<"       ";
			 					}
								flag=0;
			 					for(l=0;l<no;l++)
			 					{
									if(i==row[l] && j==column[l])
	   	   	  						{
		   	   	  						cost=cost+144;
		   	   	  						flag=1;
		   	   	  						//	cout<<"[X X]";
					  				}
								}
								if(flag==1)
									price=4;
								else
			   					{
				   					//	cout<<"["<<i<<" "<<j<<"]";
				   				}				   	
		  					}
							//	cout<<"\n";		  
	   					}
						//	cout<<"\n"; 
   						// cout<<"                   Prime (275 Rs.)    "<<endl<<endl;
						// view of third and fourth set of rows   
						for(i=7;i<10;++i)
	   					{
	   						for(j=1;j<7;++j)
	   	   					{
	   	   						if(j==4)
	   	      					{
	   		  //cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+275;
		   	   	  	flag=1;
		   	   	  //	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=5;
					else
			   	{
				   //	cout<<"["<<i<<" "<<j<<"]";
				   }	   	
			}
	//	cout<<"\n";		  
	   }  
	//   cout<<"\n";
	  // cout<<"                    Prime + (417 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
			//	cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+417;
		   	   	  	flag=1;
		   	   	  //	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=6;
					else
			   	{
				   	//cout<<"["<<i<<" "<<j<<"]";
				   }
				   	
			  }
	//	cout<<"\n";		  
	   }
	}
}
if(ch==3)
{
	//for(k=0;k<no;++k)
		{
					//	cout<<"\n                    Classic (169 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
	   				{	   	
								for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    					{
	   	  //	cout<<"       ";
			 }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+169;
		   	   	  	flag=1;
		   	   	  //	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=7;
					else
			   	{
				  // 	cout<<"["<<i<<" "<<j<<"]";
				   }				   	
		  }
	//	cout<<"\n";		  
	   }
//	cout<<"\n"; 
  //  cout<<"                   Prime (294 Rs.)    "<<endl<<endl;
	// view of third and fourth set of rows   
	for(i=7;i<10;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	if(j==4)
	   	      {
	   		  //	cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+294;
		   	   	  	flag=1;
		   	   	//  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=8;
					else
			   	{
				   //	cout<<"["<<i<<" "<<j<<"]";
				   }	   	
			}
	//	cout<<"\n";		  
	   }  
	  // cout<<"\n";
	//   cout<<"                    Prime + (460 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
			//	cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+460;
		   	   	  	flag=1;
		   	   	  //	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=9;
					else
			   	{
				  // 	cout<<"["<<i<<" "<<j<<"]";
				   }
				   	
			  }
	//	cout<<"\n";		  
	   } 
}
if(ch==4)
{
	//for(k=0;k<no;++k)
		{
					//	cout<<"\n                    Classic (198 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
	   				{	   	
								for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    					{
	   	  //	cout<<"       ";
			 }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+198;
		   	   	  	flag=1;
		   	   	 // 	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=10;
					else
			   	{
				 //  	cout<<"["<<i<<" "<<j<<"]";
				   }					   	
		  }
	//	cout<<"\n";		  
	   }
//	cout<<"\n"; 
 //   cout<<"                   Prime (375 Rs.)    "<<endl<<endl;
	// view of third and fourth set of rows   
	for(i=7;i<10;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	if(j==4)
	   	      {
	   		  //	cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+375;
		   	   	  	flag=1;
		   	   	 // 	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=11;
					else
			   	{
				   //	cout<<"["<<i<<" "<<j<<"]";
				   }		   	
			}
	//	cout<<"\n";		  
	   }  
	//   cout<<"\n";
	//   cout<<"                    Prime + (470 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
			//	cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+470;
		   	   	  	flag=1;
		   	   	  //	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=12;
					else
			   	{
				  // 	cout<<"["<<i<<" "<<j<<"]";
				   }	
				   	
			  }
	//	cout<<"\n";		  
	   } 
}
}
if(ch==5)
{
	//for(k=0;k<no;++k)
		{
					//	cout<<"\n                    Classic (275 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
	   				{	   	
								for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    					{
	   	  //	cout<<"       ";
			 }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+275;
		   	   	  	flag=1;
		   	   	  //	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=13;
					else
			   	{
			//	   	cout<<"["<<i<<" "<<j<<"]";
				   }					   	
		  }
	//	cout<<"\n";		  
	   }
//	cout<<"\n"; 
   // cout<<"                   Prime (433 Rs.)    "<<endl<<endl;
	// view of third and fourth set of rows   
	for(i=7;i<10;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	if(j==4)
	   	      {
	   		  //	cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+433;
		   	   	  	flag=1;
		   	   	 // 	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=14;
					else
			   	{
				   //	cout<<"["<<i<<" "<<j<<"]";
				   }		   	
			}
	//	cout<<"\n";		  
	   }  
	 //  cout<<"\n";
	//   cout<<"                    Prime + (540 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
			//	cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+540;
		   	   	  	flag=1;
		   	   	  //	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=15;
					else
			   	{
				  // 	cout<<"["<<i<<" "<<j<<"]";
				   }	
				   	
			  }
	//	cout<<"\n";		  
	   } 
}
}
}
}
void final_seats()
{
	int i,j,k,l,flag=0;
	cost=0;
	if(ch==1)
	{		
	//for(int k=0;k<no;++k)
	{
		cout<<"\n                    Classic (175 Rs.)   "<<endl<<endl;
		// veiw of first two set of rows 
		for(i=1;i<7;++i)
   		{	   	
			for(j=1;j<7;++j)
   			{
   				if(j==4)
   				{
			   	  	cout<<"       ";
		 		}flag=0;
		 		for(l=0;l<no;l++)
		 		{
					if(i==row[l] && j==column[l])
   	   	  			{
   	   	  				cost=cost+175;
	   	   	  			flag=1;
	   	   	  			cout<<"[X X]";
				  	}
				}
				if(flag==1)
					price=1;
				else
			   		cout<<"["<<i<<" "<<j<<"]";			
		  	}
			cout<<"\n";		  
	   	}
		cout<<"\n"; 
    	cout<<"                   Prime (250 Rs.)    "<<endl<<endl;
		// view of third and fourth set of rows   
		for(i=7;i<10;++i)
		{
	   		for(j=1;j<7;++j)
	   	   	{
		   	   	if(j==4)
				{
	   		  		cout<<"       ";
			  	}
				flag=0;
			 	for(l=0;l<no;l++)
			 	{
					if(i==row[l] && j==column[l])
					{
						cost=cost+250;
		   	   	  		flag=1;
		   	   	  		cout<<"[X X]";
					}
				}
				if(flag==1)
					price=2;
				else
				   	cout<<"["<<i<<" "<<j<<"]";
			}
			cout<<"\n";		  
		}  
	   	cout<<"\n";
	   	cout<<"                    Prime + (350 Rs.)         "<<endl<<endl;
	   	// viw of last two set of rows
	   	for(i=10;i<12;++i)
	   	{
		   	for(j=1;j<7;++j)
			{   	
				if(j==3||j==5||j==7)
				{
					cout<<"   ";
				}
				flag=0;
			 	for(l=0;l<no;l++)
			 	{
					if(i==row[l] && j==column[l])
					{
						cost=cost+350;
		   	   	  		flag=1;
		   	   	  		cout<<"[X X]";
					}
				}
				if(flag==1)
					price=3;
				else
				   	cout<<"["<<i<<" "<<j<<"]";
			}
			cout<<"\n";		  
		}

	}
}
	if(ch==2)
	{
		//for(k=0;k<no;++k)
		{
						cout<<"\n                    Classic (144 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
	   				{	   	
								for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    					{
	   	  	cout<<"       ";
			 }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+144;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=4;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }				   	
		  }
		cout<<"\n";		  
	   }
	cout<<"\n"; 
    cout<<"                   Prime (275 Rs.)    "<<endl<<endl;
	// view of third and fourth set of rows   
	for(i=7;i<10;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	if(j==4)
	   	      {
	   		  	cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+275;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=5;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }	   	
			}
		cout<<"\n";		  
	   }  
	   cout<<"\n";
	   cout<<"                    Prime + (417 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
				cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+417;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=6;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }
				   	
			  }
		cout<<"\n";		  
	   }
	}
}
if(ch==3)
{
	//for(k=0;k<no;++k)
		{
						cout<<"\n                    Classic (169 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
	   				{	   	
								for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    					{
	   	  	cout<<"       ";
			 }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+169;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=7;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }				   	
		  }
		cout<<"\n";		  
	   }
	cout<<"\n"; 
    cout<<"                   Prime (294 Rs.)    "<<endl<<endl;
	// view of third and fourth set of rows   
	for(i=7;i<10;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	if(j==4)
	   	      {
	   		  	cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+294;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=8;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }	   	
			}
		cout<<"\n";		  
	   }  
	   cout<<"\n";
	   cout<<"                    Prime + (460 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
				cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+460;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=9;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }
				   	
			  }
		cout<<"\n";		  
	   } 
}
if(ch==4)
{
	//for(k=0;k<no;++k)
		{
						cout<<"\n                    Classic (198 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
	   				{	   	
								for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    					{
	   	  	cout<<"       ";
			 }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+198;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=10;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }					   	
		  }
		cout<<"\n";		  
	   }
	cout<<"\n"; 
    cout<<"                   Prime (375 Rs.)    "<<endl<<endl;
	// view of third and fourth set of rows   
	for(i=7;i<10;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	if(j==4)
	   	      {
	   		  	cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+375;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=11;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }		   	
			}
		cout<<"\n";		  
	   }  
	   cout<<"\n";
	   cout<<"                    Prime + (470 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
				cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+470;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=12;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }	
				   	
			  }
		cout<<"\n";		  
	   } 
}
}
if(ch==5)
{
	//for(k=0;k<no;++k)
		{
						cout<<"\n                    Classic (275 Rs.)   "<<endl<<endl;
						// veiw of first two set of rows 
						for(i=1;i<7;++i)
	   				{	   	
								for(j=1;j<7;++j)
	   	   				{
	   	   					if(j==4)
	   	    					{
	   	  	cout<<"       ";
			 }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+275;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=13;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }					   	
		  }
		cout<<"\n";		  
	   }
	cout<<"\n"; 
    cout<<"                   Prime (433 Rs.)    "<<endl<<endl;
	// view of third and fourth set of rows   
	for(i=7;i<10;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	if(j==4)
	   	      {
	   		  	cout<<"       ";
			  }
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+433;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=14;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }		   	
			}
		cout<<"\n";		  
	   }  
	   cout<<"\n";
	   cout<<"                    Prime + (540 Rs.)         "<<endl<<endl;
	   // viw of last two set of rows
	   for(i=10;i<12;++i)
	   {
	   	for(j=1;j<7;++j)
	   	   {
	   	   	
			if(j==3||j==5||j==7)
			{
				cout<<"   ";
			}
			flag=0;
			 for(l=0;l<no;l++)
			 {
					if(i==row[l] && j==column[l])
	   	   	  {
		   	   	  	cost=cost+540;
		   	   	  	flag=1;
		   	   	  	cout<<"[X X]";
					  }
			}
					if(flag==1)
						price=15;
					else
			   	{
				   	cout<<"["<<i<<" "<<j<<"]";
				   }	
				   	
			  }
		cout<<"\n";		  
	   } 
}
}
}
}
		void ticket_details()
		{
			int i;
			cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
			cout<<"\n\t\t\t\t\t\t  ##---------------Generating Ticket Bill---------------##\n";
			cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
			if(ch==1){cout<<"\tDrishyam 2";}
			if(ch==2){cout<<"\tAvatar";}
			if(ch==3){cout<<"\tKGF2";}
			if(ch==4){cout<<"\tBlack Panther";}
			if(ch==5){cout<<"\tCharlie 777";}
			
			if(ch1==1){cout<<"\n\tMovie Type = 3D";}
			if(ch1==2){cout<<"\n\tMovie Type = 2D";}
			
			if(ch==1){cout<<"\n\tMovie Time = 9:00am-11:30am";}
			if(ch==2){cout<<"\n\tMovie Time = 12:00pm-2:30pm";}
			if(ch==3){cout<<"\n\tMovie Time = 3:00pm-5:30pm";}
			if(ch==4){cout<<"\n\tMovie Time = 6:00pm-8:30pm";}
			if(ch==5){cout<<"\n\tMovie Time = 9:00pm-11:30pm";}
			cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";
			/*if(price==1){cost=175*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==2){cost=250*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==3){cost=350*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			
			if(price==4){cost=144*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==5){cost=275*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==6){cost=417*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			
			if(price==7){cost=169*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==8){cost=294*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==9){cost=460*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			
			if(price==10){cost=198*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==11){cost=375*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==12){cost=470*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			
			if(price==13){cost=275*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==14){cost=433*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}
			if(price==15){cost=540*no;cout<<"\n\tPrice of your "<<no<<" seats = "<<cost<<"Rs";}*/
			
		}
		void f_bill()
		{
			final_seats();
			cout<<endl;
			cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
			cout<<"\n\t\t\t\t\t\t    ##---------------|Final Bill Copy|---------------##\n";
			cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
			putdata();
			
			cout<<"\n\t\t\t\t   Movie\tMovie Type\tTiming\t\t\tAmount\t\t\tSeats"<<endl;
			cout<<"\t\t\t\t_____________________________________________________________________________________________\n";
			if(ch==1){cout<<"\t\t\t\tDrishyam 2";}
			if(ch==2){cout<<"\t\t\t\tAvatar";}
			if(ch==3){cout<<"\t\t\t\tKGF2";}
			if(ch==4){cout<<"\t\t\t\tBlack Panther";}
			if(ch==5){cout<<"\t\t\t\tCharlie 777";}
			
			if(ch1==1){cout<<"\t\tHindi|3D";}
			if(ch1==2){cout<<"\t\tHindi|2D";}
			
			if(ch==1){cout<<"\t9:00am-11:30am\t";}
			if(ch==2){cout<<"\t12:00pm-2:30pm\t";}
			if(ch==3){cout<<"\t3:00pm-5:30pm\t";}
			if(ch==4){cout<<"\t6:00pm-8:30pm\t";}
			if(ch==5){cout<<"\t9:00pm-11:30pm\t";}
			
			/*if(ch==1){cout<<"\t"<<cost<<"Rs";}
			if(ch==2){cout<<"\t"<<cost<<"Rs";}
			if(ch==3){cout<<"\t"<<cost<<"Rs";}
			if(ch==4){cout<<"\t"<<cost<<"Rs";}
			if(ch==5){cout<<"\t"<<cost<<"Rs";}*/
			cout<<"\t"<<cost<<"Rs";
			for(i=0;i<no;i++)
			{
				cout<<"\t\t\t["<<row[i]<<" "<<column[i]<<"]\n\t\t\t\t\t\t\t\t\t\t\t";
			}
			cout<<"\n\t\t\t\t_____________________________________________________________________________________________\n";
	    }	
};
class Bill:public structure //creation of derived class 
{
	private:  //access specifier
	//Data members
	long int phonepe_id;
	long int upi_id;
	long int google_pay_id;
	long int google_pay_pass;
	long int debit_card_number;
	long int debit_cvv_number;
	long int credit_card_number;
	long int credit_cvv_number;
	public:  //access specifier
	//default constructer
	Bill()
	{
		phonepe_id=9309298;
		upi_id=7875191;
		google_pay_id=9309298;
		google_pay_pass=7875191;
		debit_card_number=9309298;
		debit_cvv_number=101;
		credit_card_number=7875191;
		credit_cvv_number=201;
	}
	//Member functions
	void phonepe(void);  
	void google_pay(void);
	void debit_card(void);
	void credit_card(void);
}; //End of derived class
//member function defination outside the class using SRO
//Member Function defination of F-1
void Bill::google_pay()
{ 

    long int pass2,id2;
	cout<<"\nEnter GOOGLE-PAY ID: ";
	cin>>id2;
	if(id2==google_pay_id) //Compare Google_pay_id
	{
		cout<<"Enter GOOGLE-PAY PASS: ";
		cin>>pass2;
		if(pass2==google_pay_pass)  //Compare Google_pay_pass
		{	
		cout<<"\n\n\t\tTRANSACTION SUCCESSFULL.....\n";
	    cout<<"\tAmount has been deducted from ur Account......";
	    cout<<"\n\tPlease go into Theatre and Enjoy ur Movie.....";
	    }
	}
	else  //Check Both are != id2,pass2
		{
	     cout<<"\n\t\tTRANSACTION UNSUCCESSFULL.....\n";
	     cout<<"\n\t\tPlease enter valid details.....\n";
	     cout<<"\n\tPlease enter any key to restart the ticketing process........";
	     abort();
	    }
}
//Member Function defination of F-2
void Bill::phonepe()
{
	long int id2,pass2;
	cout<<"\nEnter PHONEPE ID: ";
	cin>>id2;
	if(id2==phonepe_id)  //Compare phonepe_id
	{
	      cout<<"Enter BHIM UPI ID: ";
	      cin>>pass2;
	      if(pass2==upi_id)  //Compare upi_id
	      {
	       cout<<"\n\n\t\tTRANSACTION SUCCESSFULL.....\n";
	       cout<<"\tAmount has been deducted from ur Account......";
	       cout<<"\n\tPlease go into Theatre and Enjoy ur Movie.....";
	      }
	}
	   else //Check Both are != id2,pass2
	    {
	     cout<<"\n\t\tTRANSACTION UNSUCCESSFULL.....\n";
	     cout<<"\n\t\tPlease enter valid details.....\n";
	     cout<<"\n\tPlease enter any key to restart the ticketing process........";
	     abort();
	    }
}
//Member Function defination of F-3
void Bill::debit_card()
{
	long int id2,pass2;
	cout<<"\nEnter DEBIT CARD Number: ";
	cin>>id2;
	if(id2==debit_card_number)  //Compare Debit_card_number
	{
		cout<<"Enter CVV Number: ";
		cin>>pass2;
		if(pass2==debit_cvv_number)  //Compare Debit_cvv_number
		{
		cout<<"\n\n\t\tTRANSACTION SUCCESSFULL.....\n";
	    cout<<"\tAmount has been deducted from ur Account......";
	    cout<<"\n\tPlease go into Theatre and Enjoy ur Movie.....";
	    }
	}
	   else //Check Both are != id2,pass2
	    {
	     cout<<"\n\t\tTRANSACTION UNSUCCESSFULL.....\n";
	     cout<<"\n\t\tPlease enter valid details.....\n";
	     cout<<"\n\tPlease enter any key to restart the ticketing process........";
	     abort();
	    }
}
//Member Function defination of F-4
void Bill::credit_card()
{
	long int id2,pass2;  
	cout<<"\nEnter CREDIT CARD Number: ";
	cin>>id2;
	if(id2==credit_card_number)  //Compare Credit_card_number
	{
		cout<<"Enter CVV Number: ";
		cin>>pass2;
		if(pass2==credit_cvv_number)  //Compare Credit_cvv_number
		{
		cout<<"\n\n\t\tTRANSACTION SUCCESSFULL.....\n";
	    cout<<"\tAmount has been deducted from ur Account......";
	    cout<<"\n\tPlease go into Theatre and Enjoy ur Movie.....";
	    }
	}
	   else  //Check Both are != id2,pass2
	    {
	     cout<<"\n\t\tTRANSACTION UNSUCCESSFULL.....\n";
	     cout<<"\n\t\tPlease enter valid details.....\n";
	     cout<<"\n\tPlease enter any key to restart the ticketing process........";
	     abort();
	    }
}

class filec:public structure
{
	private:
	char name[35],mon[10],movie[25],time[25],seats[20],ph_no[10];
	int dd,yy,no_o_seat,ticketcost,R[10],C[10];
	
	public:
	friend void file(Bill &t,filec &fobj);
	void putting_data(void);
	friend void write_into_file(filec &fobj,Bill &t);
};
 void file(Bill &t,filec &fobj)
{
	fobj.dd=t.i;
	strcpy(fobj.mon,t.mon);
	fobj.yy=t.yr;
	strcpy(fobj.ph_no,t.mob_no);
	strcpy(fobj.name,t.name);
	fobj.ticketcost=t.cost;
	fobj.no_o_seat=t.no;
	strcpy(fobj.seats,t.seatn);
	for(int i=0;i<t.no;i++)
	{
		fobj.R[i]=t.row[i];
		fobj.C[i]=t.column[i];
	}
	
}
void write_into_file(filec &fobj,Bill &t)
{
	fout<<"\n"<<fobj.name;
	fout<<"\t\t"<<fobj.dd<<"-";
	fout<<fobj.mon<<"-";
	fout<<fobj.yy;
	fout<<"\t\t"<<fobj.ph_no;
	fout<<"\t\t"<<fobj.ticketcost;
	fout<<"\t\t"<<fobj.no_o_seat<<"\t\t\t";
	for(int i=0;i<fobj.no_o_seat;i++)
	{
		fout<<"["<<fobj.R[i]<<" "<<fobj.C[i]<<"],";
	}
}
void filec::putting_data(void)
{
	cout<<"\n\tName : "<<name<<endl;
	cout<<"\tBirthdate : "<<dd<<" "<<mon<<" "<<yy<<endl;
	cout<<"\tPhone : "<<ph_no<<endl;
	cout<<"\tCost : "<<ticketcost<<endl;
	cout<<"\tNumber of tickets : "<<no_o_seat;
}

int main()
{
	Bill t;  //create object of derived class
	Bill *ptr; //Pointer object
	filec fobj;
	ptr=&t; //Initialize pointer to object
	int ch,result;
	char y[6],line[100];
	int n9;
	ptr->login(); //accessing member function using pointer to object
	do{
	cout<<"\n**********************************************\n";
	cout<<"\t\t\tMenu\t\t\t\n";
	cout<<"\t1. Book a Ticket:\n";
	cout<<"\t2. Customers Record/Booked Tickets:\n";
	cout<<"\t3. Exit";
	cout<<"\n**********************************************\n";
	cout<<"\tEnter ur Choice:";
	cin>>n9;
	switch(n9)
	{
		case 1:
		cout<<"\n\nWould you like to Book a ticket ?(YES/NO (for cancelation): ";
		cin>>y;
		if(strcmpi(y,"YES")==0)
		{
			ptr->home_page(); //member function call using pointer to object
			ptr->seats();//member function call using pointer to object
			ptr->ticket_details();  //member function call using pointer to object
			file(t,fobj);
			fobj.putting_data();
			getch();
			
			cout<<"\n\nWould you like to pay bill ?(YES/NO (for cancelation): ";
			cin>>y;
			if(strcmpi(y,"YES")==0)
			{
				cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
				cout<<"\n\t\t\t\t\t\t  ##---------------Transaction Mode---------------##\n";
				cout<<"\n\t\t\t\t\t\t_____________________________________________________________\n";
				cout<<"\t\t\t1.PHONEPE TRANSACTION\n\t\t\t2.GOOGLE PAY TRANSACTION\n\t\t\t3.DEBIT CARD TRANSACTION\n\t\t\t4.CREDIT CARD TRANSACTION";
				cout<<"\n\nNote:-For Payment, Use only this details:..\n";
				cout<<"\n\tphonepe_id=9309298 \n\tupi_id=7875191 \n\tgoogle_pay_id=9309298 \n\tgoogle_pay_pass=7875191 \n\tdebit_card_number=9309298 \n\tdebit_cvv_number=101 \n\tcredit_card_number=7875191 \n\tcredit_cvv_number=201";
				cout<<"\n\nEnter your choice : ";
				cin>>ch;
    			switch(ch)
    			{
    				case 1:
							ptr->phonepe();  //member function call using pointer to object
							break;
	    			case 2:
							ptr->google_pay();  //member function call using pointer to object
							break;
	    			case 3:
							ptr->debit_card();  //member function call using pointer to object
							break;
					case 4:
							ptr->credit_card();  //member function call using pointer to object
							break;
	    			default:
							cout<<"Invalid Choice..";
				}
				fout.open("movief.txt",ios::app);
				write_into_file(fobj,t);
				fout.close();
			}
			else	
			{
	 			cout<<"\n\t\tThank you for visiting us.....";	
	 			cout<<"\n\tYour Ticket has been cancelled successfully.....";
	 			cout<<"\n\t\tPress any key to exit.....";
	 			exit(0);
			}	
			ptr->f_bill();  //member function call using pointer to object
		}
		else
		{
	 		cout<<"\n\t\tThank you for visiting us.....";	
	 		cout<<"\n\tYour Ticket has been cancelled successfully.....";
	 		cout<<"\n\t\tPress any key to exit.....";
	 		exit(0);
		}
		cout<<"\n\n\n\t\t\t\t\t\t    ##---------------|HAVE A NICE DAY|---------------##\n";
		getch();
		break;
		case 2:
		fin.open("movief.txt");
		cout<<"\n\t\t\t\tDetails of Tickets of Users:\n";
		cout<<"\t\t\t\t------------------------------\n";
		cout<<"Name            Date of Birth           Phone no.               Price           No.of Tickets           Booked seats\n";
		cout<<"==================================================================================================================================\n";
		while(!fin.eof())  //check upto end of file
		{
			fin.getline(line,100);
			cout<<line<<"\n";
		}
		cout<<"\n==================================================================================================================================\n";
		fin.close();
		case 3:
			break;
	}
	}while(n9!=3);
	return 0;
}