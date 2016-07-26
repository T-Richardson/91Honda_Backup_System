// add any #includes if needed or #defines

#define ARRAY_LENGTH		5

#define LEFT			0
#define LEFTMIDDLE		1
#define RIGHTMIDDLE		2
#define RIGHT			3

class Average {
	public:
		Average();
		void fillArrays();
		

		void updateAverages();
		void setClosestDistance();

		int returnCD();
		int returnPosition();


		
	private:
		int closestDistance;
		int closestDistancePosition;

		int leftSonarAverage;
		int leftSonarSum;
		int leftSonarIndex;
		int leftSonar[ARRAY_LENGTH];


		int leftMiddleSonarAverage;
		int leftMiddleSonarSum;
		int leftMiddleSonarIndex;
		int leftMiddleSonar[ARRAY_LENGTH];

		int rightMiddleSonarAverage;
		int rightMiddleSonarSum;
		int rightMiddleSonarIndex;
		int rightMiddleSonar[ARRAY_LENGTH];
	
		int rightSonarAverage;
		int rightSonarSum;
		int rightSonarIndex;
		int rightSonar[ARRAY_LENGTH];


};