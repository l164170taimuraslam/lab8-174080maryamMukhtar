class enrollment{
	private:
		int *rollnumbers;   //pointer to an int array //that stores the roll numbers
		int length;       //current number of students enrolled
		int maxSize;     //total capacity of the class
	public:
		void setLength(int a); 
		void print() const;   //function to print roll numbers of students

		void generateAttendanceSheet();     //Arrange the rollnumbers in Ascending order

		void insertinOrder(int rollnumber);   //function to insert the roll number in order in the array

		enrollment(int size=10);     //create array of the size specified by the paramerter "size"
                                         //use this pointer in the constructor to assign values
		void input();
		void setLength(); 
		bool  Exist(int rollnumber);    //function to check the existence of a roll number
		void testcopyconstructor(enrollment obj);   
		~enrollment();
		enrollment(const enrollment& obj);
};
