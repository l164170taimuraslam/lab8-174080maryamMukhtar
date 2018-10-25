class RationalNumbers
{
private:
	int a;
	int b;
public:
	RationalNumbers();              //Default Constructor
	RationalNumbers(int x, int y);  //Parametrized Constructor
	int geta();                    //getter
	int getb();                    //getter
	void print();
	RationalNumbers operator+(const RationalNumbers &obj);      //+ operator Over loader
	RationalNumbers operator-(const RationalNumbers &obj);      //- operator Over loader
	RationalNumbers operator*(const RationalNumbers &obj);      //* operator Over loader
	RationalNumbers operator/(const RationalNumbers &obj);      // /operator Over loader
	bool operator==(const RationalNumbers &obj);                //== operator Over loader
	bool operator!=(const RationalNumbers &obj);               //!= operator Over loader
	void ReducedForm();                                        //Function to reduce rational number
	~RationalNumbers();                                        //destructor
};

