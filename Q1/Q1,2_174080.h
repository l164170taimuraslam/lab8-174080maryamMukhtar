class enrollment 
{
private:
	int *rollnumbers;   //pointer to an int array //that stores the roll numbers
	int length;       //current number of students enrolled
	int maxSize;       //total capacity of the class
public:
	enrollment(int size = 10);            //create array of the size specified by the paramerter "size"
										  //use this pointer in the constructor to assign values
	enrollment(const enrollment& obj);     //copy constructor
	void setLength(int a);                //setter
	void setmaxsize(int b);               //setter
	int getlength();                      //getter
	int getmaxsize();                    //getter
	void input();                       //set length function
	void ValidInput(int &a);          //Function to check for positive inputs
	void print() const;                 //function to print roll numbers of students
	void generateAttendanceSheet();     //Arrange the rollnumbers in Ascending order
	void insertinOrder(int rollnumber);   //function to insert the roll number in order in the array
	bool  Exist(int rollnumber);           //function to check the existence of a roll number
	void testcopyconstructor(enrollment obj);    //copying one obj elements into another and adding 1 in roll numbers
	~enrollment();     //destructor			
};
